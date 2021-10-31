/*
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 */

#include <iostream>
#include <utility> // pair
#include <algorithm>

/* STL
#include <vector> // https://blockdmask.tistory.com/70
#include <list>
#include <map>
#include <set>
*/

/* math.h
#define _USE_MATH_DEFINES // need this to use math defines
#include <math.h>
*/

//#include <string>
/* �迭 �ʱ�ȭ memset
    //byte-by-byte�� int�� -1�̳� 0�� �ƴϸ� �ȵ�
    #include <cstring>
    memset(arr, 0, sizeof(arr));
*/

#include <climits>
/* <climits>
CHAR_BIT    char�� ��Ʈ ��
SCHAR_MIN   signed char�� �ּҰ�
SCHAR_MAX   signed char�� �ִ밪
UCHAR_MAX   unsigned char�� �ִ밪
CHAR_MIN    char�� �ּҰ�
CHAR_MAX    char�� �ִ밪
MB_LEN_MAX  ��Ƽ����Ʈ ������ �ִ� ����Ʈ ��
SHRT_MIN    short int�� �ּҰ�
SHRT_MAX    short int�� �ִ밪
USHRT_MAX   unsigned short int�� �ִ밪
INT_MIN     int�� �ּҰ�
INT_MAX     int�� �ִ밪
UINT_MAX    unsigned int�� �ִ밪
LONG_MIN    long int�� �ּҰ�
LONG_MAX    long int�� �ִ밪
ULONG_MAX   unsigned long int�� �ִ밪
*/

using namespace std;

/* ���� */
#define MAX_N 101
#define MAX_K 100001
#define MAX_W 100001
#define MAX_V 1001

/* ���� */
int N, K;
int W[MAX_N], V[MAX_N];
int memo[MAX_N][MAX_K];

/* �Լ� */
int dp(int n, int k) {
    if(n == 0 || k <= 0) {
        if(k >= W[n]) return V[n];
        return 0;
    }

    int& ret = memo[n][k];
    if(ret > -1) return ret;
    if(k < W[n]) return ret = dp(n-1, k);
    return ret = max(dp(n-1, k-W[n]) + V[n], dp(n-1, k));
}

int main() {
    /* Fast cin cout */
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*****************/

    /* �Է� */
    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        cin >> W[i] >> V[i];
    }

    /* Ǯ�� �� ��� */
    for(int i = 0; i < MAX_N; i++) {
        for(int j = 0; j < MAX_K; j++)
            memo[i][j] = -1;
    }
    cout << dp(N-1, K) << '\n';
}