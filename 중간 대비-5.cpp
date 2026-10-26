/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 함수 1: 조건에 맞는 정수를 입력받는 함수 (1 ~ 999,999,999)[cite: 10]
long long inputNumber() {
    long long n;
    while (1) {
        printf("<<< 9자리 이하의 양의 정수 입력: ");
        if (scanf("%lld", &n) != 1) {
            while (getchar() != '\n');
            printf(">>> Error: 입력 오류!!!\n");
            continue;
        }
        if (n >= 1 && n <= 999999999) {
            break;
        }
        else {
            printf(">>> Error: 입력 오류!!!\n");
        }
    }
    return n;
}

// 함수 2: 정수의 각 자리를 분리하여 동적 메모리 배열에 저장하고 9자리로 맞추는 함수
int* splitAndFillDigits(long long n, int* size) {
    *size = 9; 
    int* arr = (int*)malloc((*size) * sizeof(int)); 

    for (int i = 0; i < *size; i++) {
        arr[i] = 0; 
    }

    long long temp = n;
    int index = *size - 1;
    while (temp > 0 && index >= 0) {
        arr[index--] = temp % 10;
        temp /= 10;
    }

    return arr;
}

// 함수 3: 분리된 숫자를 내림차순으로 정렬하는 함수[cite: 10]
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 함수 4: 입력된 정수 및 정렬된 결과 출력 함수[cite: 10]
void printResults(long long originalN, int arr[], int size) {
    printf(">>> 입력된 정수: %lld\n", originalN);
    printf(">>> 출력: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf("-");
        }
    }
    printf("\n");
}

int main() {
    long long n;
    int size = 9;

    n = inputNumber();
    int* digits = splitAndFillDigits(n, &size);

    sortDescending(digits, size);

    printResults(n, digits, size);

    free(digits);

    return 0;
}
*/