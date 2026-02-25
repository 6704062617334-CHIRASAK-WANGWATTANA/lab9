#include <stdio.h>
#define NMAX 10

void inputArray(int array[], int N);
void showArray2D(int matrix[][10], int N);
void constructMatrix(int P[][10], int N, int A[], int B[]);

int main() {

    int a[NMAX], b[NMAX], p[NMAX][NMAX], n;

    printf("Enter N = ");
    scanf("%d", &n);

    printf("Input array A\n");
    inputArray(a, n);

    printf("Input array B\n");
    inputArray(b, n);

    constructMatrix(p, n, a, b);

    printf("Matrix P\n");
    showArray2D(p, n);

    return 0;
}

void inputArray(int array[], int N) {
    int i;
    printf("Enter %d integers: ", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
}

void constructMatrix(int P[][10], int N, int A[], int B[]) {
    int i, j;

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            P[i][j] = A[i] * B[j];
        }
    }
}

void showArray2D(int matrix[][10], int N) {
    int i, j;

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
