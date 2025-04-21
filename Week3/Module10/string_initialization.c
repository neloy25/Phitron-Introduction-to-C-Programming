#include<stdio.h>

int main() {
    char s[6] = "Sadman";
    printf("%s\n", s);

    char s1[7] = "Sadman"; // Allocate memory for null character
    printf("%s", s1);
    return 0;
}