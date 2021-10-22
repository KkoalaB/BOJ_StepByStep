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
#define MAX_N 100001

/* ���� */
int N, result = INT_MIN;
int input[MAX_N];

/* �Լ� */
int dp(int i) {
    if(i == 0) {
        return result = input[0];
        return result > 0 ? result : 0;
    }

    int tmp = dp(i-1) + input[i];
    if(result < input[i]) result = input[i];
    if(tmp > 0) {
        if(result < tmp) result = tmp;
        return tmp;
    }
    else return 0;
}

int main() {
    /* Fast cin cout */
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*****************/

    /* �Է� */
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> input[i];

    /* Ǯ�� */
    dp(N-1);

    /* ��� */
    cout << result << '\n';
}