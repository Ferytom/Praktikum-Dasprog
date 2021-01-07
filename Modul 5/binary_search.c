#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int start, int end){
    int pivot = arr[end];
    int index = start;
    for (int i = start; i < end; i++){
        if (arr[i] < pivot){
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[index], &arr[end]);
    return index;
}

void quickSort(int *arr, int start, int end){
    if (start < end){
        int index = partition(arr, start, end);
        quickSort (arr, start, index - 1);
        quickSort (arr, index + 1, end);
    }
}

int binarySearch (int *arr, int range, int search){
    int start = 0, end = range - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if (search == arr[mid]) return mid;
        else if (search < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int search;
    scanf("%d", &search);
    for (int i = 0; i < n; i++){
        quickSort(arr[i], 0, n - 1);
    }
    int searchIndex, baris;
    for (int i = 0; i < n; i++){
        searchIndex = binarySearch(arr[i], n, search);
        if (searchIndex != -1){
            while (arr[i][searchIndex - 1] == arr[i][searchIndex] && searchIndex - 1 >= 0){
                searchIndex--;
            }
            baris = i;
            break;
        }
    }
    printf("%d %d", baris + 1, searchIndex + 1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
