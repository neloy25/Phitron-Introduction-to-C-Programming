#include<stdio.h>
#include<math.h>

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int sorted[],int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if(sorted[i] > sorted[j]){
                swap(&sorted[i],&sorted[j]);
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int sorted[n];
        for (int i = 0; i < n; i++) {
            sorted[i] = arr[i];
        }
        sort(sorted,n);

        for (int i = 0; i < n; i++) {
            printf("%d ", abs(arr[i] - sorted[i]));
        }
        printf("\n");
    }
    return 0;
}