#include <stdio.h>

int arr[1000];

void sort(int n) {
    int i, j;
    int imsi;

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                imsi = arr[i];
                arr[i] = arr[j];
                arr[j] = imsi;
            }
        }
    }
}





int main () {
    int N;

    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    sort(N);

    int del = 0;
    int sum = 0;
    for(int i=0; i<N; i++) {
        del += arr[i];
        sum += del;
    }
    printf("%d", sum);

    
    return 0;
}