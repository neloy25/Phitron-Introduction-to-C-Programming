#include<stdio.h>

int main() {
    int r,c;
    scanf("%d%d", &r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        scanf("%d", &arr[i][j]);
      }
    }

    int count = 0;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if(arr[i][j] == 0) count++;
      }
    }

    if(count == r * c) printf("It is a zero matrix");
    else printf("It is not a zero matrix");
    return 0;
}