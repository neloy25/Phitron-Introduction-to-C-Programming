#include<stdio.h>

int rem(int arr[], int n,int pos){
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int len = n;
    for (int i = 0; i < n; i++) {
      if(arr[i] == 0) {
        rem(arr,n,i);
        arr[n - 1] = 0;
        n--;
        i--;
      }
    }

    for (int i = 0; i < len; i++) {
      printf("%d ", arr[i]);
    }
    return 0;
}