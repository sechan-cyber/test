/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 함수 1: 내림차순 정렬 함수 (사용자 정의 함수)
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

// 함수 2: 메인 함수
int main() {
    srand((unsigned int)time(NULL));
    int n;
    int arr[15]; 

 
    while (1) {
        printf("<<<<< 양의 정수 입력 (10<=n<=100): ");
        if (scanf("%d", &n) != 1)
        {
            while (getchar() != '\n');
            printf(">>> 입력 오류 발생, 다시 입력해 주세요\n");
            continue;
        }
        if (n >= 10 && n <= 100) 
        {
            break;
        }
        else 
        {
            printf(">>> 입력 오류 발생, 다시 입력해 주세요\n");
        }
    }

    
    for (int i = 0; i < 15; i++) {
        arr[i] = rand() % (n + 1);
    }

   
    printf(">>> 발생된 15개의 난수: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    sortDescending(arr, 15);

   
    printf(">>> 내림차순 정렬 결과: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // 4. 최대값, 중간값, 최소값 찾기 및 출력
    int max = arr[0];       
    int min = arr[14];      
    int median = arr[7];   

    printf(">>> 최대값: %d\n", max);
    printf(">>> 중간값: %d\n", median);
    printf(">>> 최소값: %d\n", min);

    return 0;
}
*/