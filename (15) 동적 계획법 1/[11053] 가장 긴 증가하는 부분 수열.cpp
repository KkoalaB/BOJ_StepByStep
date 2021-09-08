/*
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 */

#include <iostream>
#include <utility> // pair
#include <algorithm>

using namespace std;

/* 조건 */
#define MAX_N 1001
#define MAX_A 1001

/* 변수 */
int N, arr[MAX_N], dp[MAX_N];
int max = 1;

int main() {
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &k);
        arr[i] = k;
    }

    for (int i = 0; i < N; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) {
            if(arr[j] < arr[i] && dp[j]+1 > dp[i]) {
                dp[i] = dp[j] + 1;
                if(max < dp[i]) {
                    max = dp[i];
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}