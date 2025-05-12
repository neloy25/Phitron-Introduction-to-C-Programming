#include<stdio.h>

int main() {
    int r,c;
    scanf("%d%d", &r,&c);
    if(r != c){
        printf("This is not a primary diagonal matrix");
        return 0;
    }
    int arr[r][c];
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        scanf("%d", &arr[i][j]);
      }
    }
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if(i == j) continue;
        if(arr[i][j] != 0) {
            printf("This is not a primary diagonal matrix");
            return 0;
        }
      }
    }
    printf("This is a primary diagonal matrix");
    return 0;
}