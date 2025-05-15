#include<stdio.h>

int main() {
    int r,c;
    scanf("%d%d", &r,&c);
    if(r != c){
        printf("NO");
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
        if(i == j){
            if(arr[i][j] != 1) {
                printf("NO");
                return 0;
            }
        } else if(i + j + 1 == r){
            if(arr[i][j] != 1) {
                printf("NO");
                return 0;
            }
        } else{
           if(arr[i][j] != 0) {
                printf("NO");
                return 0;
            } 
        }
      }
    }
    printf("YES");
    return 0;
}