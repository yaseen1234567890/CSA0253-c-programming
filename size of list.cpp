#include <stdio.h>

int main() 
{
    int n, i, j, temp, size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    int list[size];


    printf("Enter the elements of the list: ");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &list[i]);
    }

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (i = 0; i < size-1; i++) 
	{
        for (j = 0; j < size-i-1; j++)
		 {
            if (list[j] < list[j+1]) 
			{
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }

    
    printf("The %dth largest element is %d\n", n, list[n-1]);

}
