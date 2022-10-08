#include <stdio.h>

int main()
{
    int arr[100];
    int N, i;
    int * ptr = arr;    

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &ptr[i]);   
    }

    printf("Array elements:\n ");
    for (i = 0; i < N; i++)
    {
        printf("%d, ", i[ptr]);
    }

    return 0;
}
