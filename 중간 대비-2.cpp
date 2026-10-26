/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input_odd_number(void) {
	int n;
	while (1) {
		printf("9보다 큰 홀수 n을 입력하세요: ");
		if (scanf("%d", &n) != 1) {
			while (getchar() != '\n')
				continue;

			}
			if (n > 9 && (n % 2 != 0)) {
				break;
			}
			printf("조건에 맞지 않습니다.");
		}
		return n;
	}

	void generate_randoms_numbers (int *arr, int n) {
		for (int i = 0; i < n; i++) {
			arr[i] = (rand() % 199) - 99;
		}
	}

	void sort_descending(int* arr, int n) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1 - i; j++) {
				if (arr[j] < arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
	void print_results(int* arr, int n)
	{
		printf("\n--- [내림차순 정렬 결과]");
		for (int i = 0; i < n; i++)
		{
			printf("%d", arr[i]);
			if ((i + 1) % 10 == 0)printf("\n");
		}
		printf("\n\n");

		printf("최대값: %d\n", arr[0]);
		printf("최소값: %d\n", arr[n - 1]);
		printf("중앙값: %d\n", arr[n / 2]);
	}

	int main(void)
	{
		srand((unsigned int)time(NULL));

		int n = input_odd_number();

		int* array = (int*)malloc(n * sizeof(int));
		if (array == NULL)
		{
			printf("메모리 할당 실패\n");
			return 1;
		}

		generate_randoms_numbers(array, n);
		sort_descending(array, n);
		print_results(array, n);

		free(array);

		return 0;
	}
	*/