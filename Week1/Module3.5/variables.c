#include<stdio.h>

int main(){
    int a; 
    scanf("%d",&a);
    printf("%d\n",a);

    long long int b;
    scanf("%lld",&b);
    printf("%lld\n",b);

    float c; 
    scanf("%f",&c);
    printf("%.2f\n",c);

    scanf(" "); //bypass new line for int input
    char d;
    scanf("%c",&d);
    printf("%c\n",d);

    return 0;
}