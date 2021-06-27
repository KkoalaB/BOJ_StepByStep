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

// Merge sort
void merge(int* arr, int* sortedArr, int begin, int middle, int end) {
    int sortedInd = begin;
    int i = begin;
    int j = middle+1;


    while (i <= middle && j <= end) {
        if (arr[i] < arr[j]) sortedArr[sortedInd] = arr[i++];
        else  sortedArr[sortedInd] = arr[j++];

        sortedInd++;
    }

    //왼쪽이 오른쪽보다 모두 작은 경우
    if (i > middle) {
        while (j <= end) {
            sortedArr[sortedInd++] = arr[j++];
        }
    }
    //오른쪽이 왼쪽보다 모두 작은 경우
    if (j > end) {
        while (i <= middle) {
            sortedArr[sortedInd++] = arr[i++];
        }
    }

    for (int k = begin; k <= end; k++) arr[k] = sortedArr[k];

}

void mergeSort(int* arr, int* sortedArr, int begin, int end) {
    int middle;
    if (begin<end) {
        middle = (begin + end) / 2;
        mergeSort(arr, sortedArr, begin, middle);
        mergeSort(arr, sortedArr, middle + 1, end);
        merge(arr, sortedArr, begin, middle, end);
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
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<int, int> a, b;
    a = make_pair(1, 5);
    b = make_pair(1, 3);

    printf("%s", a<b?"A\n":"B\n");
}