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
    int row, col;
    scanf("%d%d", &row,&col);
    for (int i = 0; i < c; i++) {
        printf("%d ", arr[row][i]);
    }

    for (int i = 0; i < r; i++) {
        printf("%d ", arr[i][col]);
    }
    return 0;
}