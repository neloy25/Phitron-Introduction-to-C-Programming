#include<stdio.h>

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(int arr[],int n){
    int left = 0;
    int right = n - 1;
    while(left < right){
        swap(&arr[left],&arr[right]);
        left++;
        right--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr,n);

    for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
    }
    return 0;
}