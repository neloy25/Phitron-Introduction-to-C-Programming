#include<stdio.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    printf("Array name: %p\n", arr);
    printf("%d\n", *(arr + 2));
    *(arr + 4) = 100;
    int* p = &arr[0];
    printf("zero index adress: %p\n", p);
    p = p + 1;
    printf("%p\n", p);
    printf("%d\n", *p);

    for (int i = 0; i < 5; i++) {
      printf("%d ", arr[i]);
    }
    return 0;
}