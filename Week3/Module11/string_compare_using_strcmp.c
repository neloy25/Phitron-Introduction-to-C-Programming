#include<stdio.h>

int main() {
    char a[101],b[101];
    scanf("%s%s", &a,&b);

    int val = strcmp(a,b);

    if(val < 0){
        printf("A is smaller");
    } else if(val == 0){
        printf("Both are equal");
    } else{
        printf("B is smaller");
    }
    return 0;
}