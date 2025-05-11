#include<stdio.h>

void fun(int i){
    if(i == 5){
        printf("\n");
        return;
    }
    printf("Gathering the stack %d\n",i);
    fun(i+1);
    printf("Removing the stack %d\n",i);
}

int main() {
    fun(1);
    return 0;
}