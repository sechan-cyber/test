/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1. 행(m) 입력 및 유효성 함수 
int inputM() {
    int m;
    while (1) {
        printf("<<< 행렬의 행값(m): ");
        if (scanf("%d", &m) == 1 && m >= 2 && m <= 5) {
            break;
        }
        while (getchar() != '\n'); 
        printf(">>> 입력 오류(조건: 2<=m<=5)\n");
    }
    return m;
}

// 2. 열(n) 입력 및 유효성 함수 
int inputN() {
    int n;
    while (1) {
        printf("<<< 행렬의 열값(n): ");
        if (scanf("%d", &n) == 1 && n >= 2 && n <= 5) {
            break;
        }
        while (getchar() != '\n'); 
        printf(">>> 입력 오류(조건: 2<=n<=5)\n");
    }
    return n;
}

// 3. 행렬 덧셈 결과 출력 함수
void printAddition(int m, int n, int A[5][5], int B[5][5]) {
    printf(">>> %d*%d 행렬 덧셈 결과\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}

// 4. 행렬 뺄셈 결과 출력 함수
void printSubtraction(int m, int n, int A[5][5], int B[5][5]) {
    printf(">>> %d*%d 행렬 뺄셈 결과\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j] - B[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand((unsigned int)time(NULL));

    int A[5][5], B[5][5];

    
    int m = inputM();
    int n = inputN();

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = (rand() % 201) - 100;
            B[i][j] = (rand() % 201) - 100;
        }
    }

    
    printAddition(m, n, A, B);
    printSubtraction(m, n, A, B);

    return 0;
}
*/