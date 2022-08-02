#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include  "string.h"
#include "stdbool.h"

void traverse(int *arr, int count, int size);
void search(int *arr, int size, int count, int val_to_search);
void insertion(int *arr, int count, int  size, int val_to_add);
void deletion(int *arr, int count, int size, int index);
void update(int *arr, int count, int size, int index);

int main()
{
    int size = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    int op = -1, count = 0;
    do
    {
        int index = 0;
        printf("Enter\n1: Traverse\n2: Search\n3: Insertion\n4: Deletion\n5: Update\n0:To End Program!!!\n\n\n");
        scanf("%d", &op);

        switch(op)
        {
            case 1: 
                traverse(arr, count, size);
                
                break;

            case 2:
                int choice = 0;
                printf("Enter 1 to search by index and 2 to search by value: ");
                scanf("%d", &choice);

                if (choice == 1)
                {
                    printf("Enter index: ");
                    scanf("%d", &index);
                    if (index >= 0 && index < size)
                    {
                        printf("Number found: %d", arr[index]);
                    }
                    else
                    {
                        printf("Enter proper index!!!\n");
                    }
                }
                else
                {
                    int val_to_search = 0;
                    printf("Enter value to search: ");
                    scanf("%d", &val_to_search);
                    
                    search(arr, size, count, val_to_search);
                }
                break;
            
            case 3:
                if (count == size)
                {
                    printf("Array overflow!!!\n");
                    break;
                }

                printf("Enter number to add: ");
                int val_to_add = 0;
                scanf("%d", &val_to_add);
                
                insertion(arr, count, size, val_to_add);
                count++;
                
                break;
            
            case 4:
                if (count == 0)
                {
                    printf("Array empty!!!\n");
                    break;
                }
              
                printf("Enter index for deletion: ");
                scanf("%d", &index);
                
                deletion(arr, count, size, index);
                count--;
                break;
            
            case 5:
                printf("Enter index for updation: ");
                scanf("%d", &index);
                
                update(arr, count, size, index);
                
                break;
            
            default:
                printf("Enter correct option number!!!\n\n");
                break;
        }
        printf("\n\n\n");

    } while (op != 0);
    
    free(arr);
    return 0;
}

void traverse(int *arr, int count, int size)
{
    printf("Array elements:\n");
    for (int i = 0; i < count; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void search(int *arr, int size, int count, int val_to_search)
{
    int flag = -1;
    for (int i = 0; i < count; ++i)
    {
        if (arr[i] == val_to_search)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Given number found!\n");
        return;
    }
    else{
        printf("Number not found!\n");
    }
}

void insertion(int *arr, int count, int  size, int val_to_add)
{
    int temp = count;
    arr[temp] = val_to_add;
    count++;
}

void deletion(int *arr, int count, int size, int index)
{
    if ((index == size - 1) || (index == count - 1))
    {
        int temp = index;
        arr[temp] = 0;
        count--;
    }
    else
    {
        for (int i = index, ptr = count - 1; i < ptr; ++i)
        {
            arr[i] = arr[i + 1];
        }
        count--;
    }
}

void update(int *arr, int count, int size, int index)
{
    int temp = 0;
    printf("Enter number: ");
    scanf("%d", &temp);
    arr[index] = temp; 
}