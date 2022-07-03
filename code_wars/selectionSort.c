// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int i, j, temp, position;
    int arr[5] = {3, 34, 55, 67, 7};

    for (i = 0; i < 5; i++)
    {
        position = i;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[position] > arr[j])
            {
                position = j;
            }

            if (position != i)
            {
                temp = arr[i];
                arr[i] = arr[position];
                arr[position] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}