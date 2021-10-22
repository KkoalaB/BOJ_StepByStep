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
/* 배열 초기화 memset
    //byte-by-byte라서 int는 -1이나 0이 아니면 안됨
    #include <cstring>
    memset(arr, 0, sizeof(arr));
*/

#include <climits>
/* <climits>
CHAR_BIT    char의 비트 수
SCHAR_MIN   signed char의 최소값
SCHAR_MAX   signed char의 최대값
UCHAR_MAX   unsigned char의 최대값
CHAR_MIN    char의 최소값
CHAR_MAX    char의 최대값
MB_LEN_MAX  멀티바이트 문자의 최대 바이트 수
SHRT_MIN    short int의 최소값
SHRT_MAX    short int의 최대값
USHRT_MAX   unsigned short int의 최대값
INT_MIN     int의 최소값
INT_MAX     int의 최대값
UINT_MAX    unsigned int의 최대값
LONG_MIN    long int의 최소값
LONG_MAX    long int의 최대값
ULONG_MAX   unsigned long int의 최대값
*/

using namespace std;

/* 조건 */
#define MAX_N 100001

/* 변수 */
int N, result = INT_MIN;
int input[MAX_N];

/* 함수 */
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

    /* 입력 */
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> input[i];

    /* 풀이 */
    dp(N-1);

    /* 출력 */
    cout << result << '\n';
}