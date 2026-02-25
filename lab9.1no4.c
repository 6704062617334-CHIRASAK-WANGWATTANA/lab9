#include <stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);

int main() {
    int a = 1, b = 2, c = 3;

    printf("Before swap function : a=%d, b=%d, c=%d\n", a, b, c);

    swapValue(&a, &b, &c);

    printf("After swap function  : a=%d, b=%d, c=%d\n", a, b, c);

    int arr1[3] = {10, 20, 30};
    int arr2[3] = {100, 200, 300};
    int i;

    swapArray(arr1, arr2, 3);

    printf("\nAfter swapArray:\n");
    printf("arr1: ");
    for(i = 0; i < 3; i++)
        printf("%d ", arr1[i]);

    printf("\narr2: ");
    for(i = 0; i < 3; i++)
        printf("%d ", arr2[i]);

    return 0;
}

void swapValue(int *a, int *b, int *c) {
    int temp;

    temp = *c;
    *c = *a;
    *a = *b;
    *b = temp;
}

void swapArray(int a[], int b[], int size) {
    int i, temp;

    for(i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
