#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NLLIMIT 9
#define NHLIMIT 99
#define RLLIMIT -99
#define RHLIMIT 99

int Get_Integer();
void Generate_Rand_Num(int* nData, int n);
void Sort_Data(const int* nData, int* nSortData, int n);
void Print_Results(const int* nData, const int* nSortData, int n);

int main()
{
    srand((unsigned int)time(NULL));

    int n;

    n = Get_Integer();

    int* nData = (int*)malloc(n * sizeof(int));
    int* nSortData = (int*)malloc(n * sizeof(int));

    if (nData == NULL || nSortData == NULL) {
        printf("동적 메모리 할당 실패!\n");
        return 1;
    }

    Generate_Rand_Num(nData, n);

    Sort_Data(nData, nSortData, n);

    printf("\n==== <출력> ====\n");
    Print_Results(nData, nSortData, n);

    free(nData);
    free(nSortData);

    return 0;
}

// 1. limit보다 큰 홀수 정수 입력 함수 
int Get_Integer() {
    int n;
    while (1) {
        printf("<<<<< 9 이상의 홀수 정수 입력(n): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            printf(">>> Error: 입력 오류!!! (숫자만 입력)\n");
            continue;
        }
        if (n >= NLLIMIT && n % 2 != 0) {
            break;
        }
        else {
            printf(">>> Error: 입력 오류!!! (조건: n >= %d 이며 홀수)\n", NLLIMIT);
        }
    }
    return n;
}

// 2. nllimit ~ nhlimit 사이의 n개의 난수 발생 함수 
void Generate_Rand_Num(int* nData, int n) {
    for (int i = 0; i < n; i++) {
        nData[i] = rand() % (RHLIMIT - RLLIMIT + 1) + RLLIMIT;
    }
}

// 3. 발생된 난수를 내림차순으로 정렬하는 함수 
void Sort_Data(const int* nData, int* nSortData, int n) {
    for (int i = 0; i < n; i++) {
        nSortData[i] = nData[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (nSortData[j] < nSortData[j + 1]) {
                int temp = nSortData[j];
                nSortData[j] = nSortData[j + 1];
                nSortData[j + 1] = temp;
            }
        }
    }
}

// 4. 발생된 난수, 내림차순 정렬된 난수, 최대값, 중간값, 최소값 출력 함수 
void Print_Results(const int* nData, const int* nSortData, int n) {
    printf(">>> 발생된 난수 (%d개): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", nData[i]);
    }
    printf("\n");

    printf(">>> 내림차순 정렬 결과: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nSortData[i]);
    }
    printf("\n\n");

    printf(">>> 최대값: %d\n", nSortData[0]);
    printf(">>> 중간값: %d\n", nSortData[n / 2]);
    printf(">>> 최소값: %d\n", nSortData[n - 1]);
}