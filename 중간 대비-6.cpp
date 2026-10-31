#include <stdio.h>
#include <stdlib.h>

#define SIZE 9

void separate_number(long long n, int arr[])
{
    int i;

    for (i = SIZE - 1; i >= 0; i--)
    {
        arr[i] = n % 10;
        n = n / 10;
    }
}

void sort_number(int arr[])
{
    int i, j, max_index, temp;

    for (i = 0; i < SIZE - 1; i++)
    {
        max_index = i;

        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[max_index] < arr[j])
                max_index = j;
        }

        if (i != max_index)
        {
            temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        }
    }
}

void print_array(int arr[])
{
    int i;

    printf("출력 : ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", arr[i]);

        if (i != SIZE - 1)
            printf(" - ");
    }

    printf("\n");
}

int main(void)
{
    long long n;
    int* data;

    data = (int*)malloc(SIZE * sizeof(int));

    if (data == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    while (1)
    {
        printf("정수 입력 : ");

        if (scanf_s("%lld", &n) != 1)
        {
            printf("입력 오류! 숫자를 입력하세요.\n");

            free(data);
            return 1;
        }

        if (n >= 1 && n <= 999999999)
            break;

        printf("입력 오류! 다시 입력하세요.\n");
    }

    separate_number(n, data);

    sort_number(data);

    print_array(data);

    free(data);

    return 0;
}