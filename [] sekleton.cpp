#include <iostream>

/* STL
#include <vector> // https://blockdmask.tistory.com/70
#include <list>
#include <map>
#include <set>
*/

/* Algorithm
#include <algorithm>
*/

/* 정렬 함수
// Insertion sort
void insertionSort(int arr[], int size) {
    int tmp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

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
    unsigned int a = -1;
    int b = 1;
    int c = 3;

    if(a > (b - 3)) printf("%u\n", a);
}