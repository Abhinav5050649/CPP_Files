#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

//First Program related to arrays
/*
Programmer: Abhinav Sharma
Roll No: 21BCP134
*/

void indexFunction(int *arr, int size);
void delFirstIndex(int *arr, int size);
void revTraverse(int *arr, int size);

int main()
{
    int sizeOfArray = 0;
    printf("Enter size of array: ");
    scanf("%d", &sizeOfArray);

    int *arrNow = malloc(sizeof(int) * sizeOfArray);
    for (int i = 0; i < sizeOfArray; ++i)
    {
        printf("Enter element %d of array: ", (i + 1));
        scanf("%d", &arrNow[i]);
    } 

    int op = -1;
    do
    {
        printf("Enter\n1:Insert at Index\n2:Delete first index\n3:Traverse in reverse order\n0:To exit\n");
        scanf("%d", &op);

        switch(op)
        {
            case 0:
                break;
            
            case 1:
                indexFunction(arrNow, sizeOfArray);
                break;
            
            case 2:
                delFirstIndex(arrNow, sizeOfArray);
                break;

            case 3: 
                revTraverse(arrNow, sizeOfArray);
                break;

            default:
                printf("Enter proper option number!\n");
                break;
        }
        printf("\n");
    } while (op != 0);
    free(arrNow);

    return 0;
}

void indexFunction(int *arr, int size)
{
    
    int index = 0;
    printf("Enter INDEX at which you wish to insert new number: ");
    scanf("%d", &index);

    if (index < 0 || index > size)
    {
        printf("Please enter proper INDEX number!\n");
        return;
    }
    else
    {
        int numberToInsertAtIndex = 0;
        printf("Enter number you wish to add to index %d of the array: ", index);
        scanf("%d", &numberToInsertAtIndex);

        arr[index] = numberToInsertAtIndex;
        printf("Operation performed successfully!\n");
        return;
    }
}

void delFirstIndex(int *arr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }
    //for deletion purposes
    arr[size - 1] = INT_MAX;
    printf("Operation successful!\n");
}

void revTraverse(int *arr, int size)
{
    printf("Array elements are: ");
    for (int i = size - 1; i >= 0; --i)
    {
        if (arr[i] == INT_MAX)
        {
            continue;
        }
        else{
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Operation successful!\n");
}