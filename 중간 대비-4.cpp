/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 함수 1: 행(m)과 열(n)을 입력받고 유효성 검사 수행 (2 <= 값 <= 5)
void inputDimensions(int* m, int* n) {
    while (1) {
        printf("<<< 행렬의 행값(m): ");
        if (scanf("%d", m) != 1 || *m < 2 || *m > 5) {
            while (getchar() != '\n');
            printf(">>> 입력 오류(조건: 2<=m<=5)\n");
            continue;
        }
        break;
    }
    while (1) {
        printf("<<< 행렬의 열값(n): ");
        if (scanf("%d", n) != 1 || *n < 2 || *n > 5) {
            while (getchar() != '\n');
            printf(">>> 입력 오류(조건: 2<=n<=5)\n");
            continue;
        }
        break;
    }
}

// 함수 2: 행렬에 -100 ~ 100 사이의 난수 원소 채우기
void generateMatrix(int m, int n, int matrix[5][5]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 201) - 100;
        }
    }
}

// 함수 3: 두 행렬의 덧셈(A+B)과 뺄셈(A-B)을 계산하고 출력
void processAndPrintMatrix(int m, int n, int A[5][5], int B[5][5]) {
    printf(">>> %d*%d 행렬 덧셈 결과\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    printf(">>> %d*%d 행렬 뺄셈 결과\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j] - B[i][j]);
        }
        printf("\n");
    }
}

// 함수 4: 메인 함수
int main() {
    srand((unsigned int)time(NULL));

    int m, n;
    int A[5][5], B[5][5];

    inputDimensions(&m, &n);

    generateMatrix(m, n, A);
    generateMatrix(m, n, B);

    processAndPrintMatrix(m, n, A, B);

    return 0;
}
*/