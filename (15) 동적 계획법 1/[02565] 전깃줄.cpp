/*
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 */

#include <iostream>

using namespace std;

/* ���� */
#define MAX_N 101

/* ���� */
int N, A[MAX_N], B[MAX_N];
int line = 0; // A�� B�� ����� ���� �� ����
int dp[MAX_N]; // index������ �ٲ� A�� ���� �� A[i]������ LIS�� ����
int max_LIS = 0; // LIS��

/* �Լ� */

int find_idx(int n) { 
    // B[]���� A[i]�� ���� ã�� �ش� index ��ȯ
    // ����Ǵ� ���� ���� ��� -1��ȯ
    // ���� ����� ��� line�� ������Ʈ
    for(int i = 0; i < N; i++) {
        if(B[i] == n) {
            line++;
            return i;
        }
    }
    return -1;
}

int main() {
    /* Fast cin cout */
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*****************/

    /* �Է� */
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> B[i];
        dp[i] = 1; // dp�� 1�� �ʱ�ȭ
    }

    for(int i = 0; i < N; i++) { // ��� A[]�� ���Ͽ�
        A[i] = find_idx(A[i]); // A[i]�� ���� B�迭�� ����� index�� ��ȯ
    }

    /* Ǯ�� */
    for(int i = 0; i < N; i++) {
        if(A[i] == -1) { // A[i]�� ������ �ȵǴ� ��ġ�� ���
            dp[i] = 0;
            continue;
        }
        for(int j = 0; j < i; j++) { // dp[i]�� LIS ������Ʈ
            if(A[j] < A[i] && dp[j] >= dp[i]) {
                dp[i] = dp[j] + 1;
                if(max_LIS < dp[i]) // max_LIS ������Ʈ
                    max_LIS = dp[i];
            }
        }
    }

    /* ��� */
    cout << line - max_LIS << '\n';
}