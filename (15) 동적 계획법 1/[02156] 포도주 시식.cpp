/*
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 */

#include <iostream>
#include <cstring> // memset

using namespace std;

/* ���� */
#define MAX_N 10001

/* ���� */
int N;
int wine[MAX_N], memo[MAX_N];

/* �Լ� */
int dp(int idx) {
    if(idx > N) return 0;
    if(memo[idx] > -1) return memo[idx];
    int max_score = -1;
    for(int i = idx; i < N; i++) {
        if(max < )
    }
    return ret = wine[idx] + max(wine[idx+1] + dp(idx+3), max(dp(idx+2), dp(idx+3)));
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
        cin >> wine[i];
    }

    /* Ǯ�� */
    memset(memo, -1, sizeof(memo));

    /* ��� */
    cout << dp(0) << '\n';
}