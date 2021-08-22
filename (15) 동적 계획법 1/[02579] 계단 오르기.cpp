/*
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 */

#include <iostream>

/* math.h
#define _USE_MATH_DEFINES // need this to use math defines
#include <math.h>
*/

using namespace std;

/* 조건 */
#define MAX_N 301

/* 변수 */
int N, tmp;
int score[MAX_N], memo[MAX_N];

/* 함수 */

int main() {
    /* Fast cin cout */
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*****************/

    /* 입력 */
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> score[i];
    }
    score[N] = 0;

    /* 풀이 */

    /* 출력 */
}