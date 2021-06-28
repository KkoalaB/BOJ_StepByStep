/*****************************
 * Author: Byeongmin Ryoo
 * Blog: https://velog.io/@kkoala
 * Contact: bmformail@naver.com
 *****************************/

#include <iostream>
#include <utility> // pair

/* STL
#include <vector> // https://blockdmask.tistory.com/70
#include <list>
#include <map>
#include <set>
*/

/* Algorithm
#include <algorithm>
*/

/* math.h
#define _USE_MATH_DEFINES // need this to use math defines
#include <math.h>
*/

/* 참고
int: -21억 ~ 21억
백준에서 fflush 같은거 안됨
*/

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<int, int> a, b;
    a = make_pair(1, 5);
    b = make_pair(1, 3);

    printf("%s", a<b?"A\n":"B\n");
}