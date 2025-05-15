#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[14];
    arr[0] = 4;
    arr[1] = 7;
    int j = 0;
    int i = 2;
    while (1) {
        if(arr[j] * 10 + 4 > n) break;
        arr[i++] = arr[j] * 10 + 4;
        if(arr[j] * 10 + 7 > n) break;
        arr[i++] = arr[j] * 10 + 7;
        j++;
    }

    for (int k = 0; k < i; k++) {
      if(n % arr[k] == 0){
        printf("YES");
        return 0;
      }
    }
    printf("NO");
    return 0;
}