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

/* ���� */
#define MAX_N 301

/* ���� */
int N, tmp;
int score[MAX_N], memo[MAX_N];

/* �Լ� */

int main() {
    /* Fast cin cout */
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*****************/

    /* �Է� */
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> score[i];
    }
    score[N] = 0;

    /* Ǯ�� */

    /* ��� */
}