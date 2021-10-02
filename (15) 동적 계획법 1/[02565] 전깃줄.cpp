/*
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 */

#include <iostream>

using namespace std;

/* 조건 */
#define MAX_N 101

/* 변수 */
int N, A[MAX_N], B[MAX_N];
int line = 0; // A와 B에 연결된 선의 총 개수
int dp[MAX_N]; // index값으로 바뀐 A에 대해 각 A[i]에서의 LIS의 길이
int max_LIS = 0; // LIS값

/* 함수 */

int find_idx(int n) { 
    // B[]에서 A[i]의 값을 찾아 해당 index 반환
    // 연결되는 선이 없는 경우 -1반환
    // 선이 연결된 경우 line값 업데이트
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

    /* 입력 */
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> B[i];
        dp[i] = 1; // dp를 1로 초기화
    }

    for(int i = 0; i < N; i++) { // 모든 A[]에 대하여
        A[i] = find_idx(A[i]); // A[i]의 값을 B배열에 연결된 index로 변환
    }

    /* 풀이 */
    for(int i = 0; i < N; i++) {
        if(A[i] == -1) { // A[i]가 연결이 안되는 위치인 경우
            dp[i] = 0;
            continue;
        }
        for(int j = 0; j < i; j++) { // dp[i]에 LIS 업데이트
            if(A[j] < A[i] && dp[j] >= dp[i]) {
                dp[i] = dp[j] + 1;
                if(max_LIS < dp[i]) // max_LIS 업데이트
                    max_LIS = dp[i];
            }
        }
    }

    /* 출력 */
    cout << line - max_LIS << '\n';
}