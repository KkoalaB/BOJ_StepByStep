/* Merge Sort */
void merge(int* arr, int* sortedArr, int begin, int middle, int end) {
    int sortedInd = begin;
    int i = begin;
    int j = middle+1;


    while (i <= middle && j <= end) {
        if (arr[i] < arr[j]) sortedArr[sortedInd] = arr[i++];
        else  sortedArr[sortedInd] = arr[j++];

        sortedInd++;
    }

    //������ �����ʺ��� ��� ���� ���
    if (i > middle) {
        while (j <= end) {
            sortedArr[sortedInd++] = arr[j++];
        }
    }
    //�������� ���ʺ��� ��� ���� ���
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

/* Insertion Sort */
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