/*  15. Given a sorted array of positive integers. Write a C program to rearrange the array elements
        alternatively i.e first element should be max value, second should be min value, third should 
        be second max, fourth should be second min and so on. 
        (Examples: Input: arr[] = {1, 2, 3, 4, 5, 6, 7} Output: arr[] = {7, 1, 6, 2, 5, 3, 4})
*/

#include <stdio.h>
int main()  
{
    int size;
    printf("\n  Enter size of array: ");
	scanf("%d", &size);
    int a[size], arr[size];
    printf("\n  Enter %d sorted positive integers in array: \n", size);

    for(int i = 0; i<size; i++)	
    {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i<size; i++) 
    {
        a[i] = arr[i];
    }

    int j = 0;
    for(int i = 0; i<(size/2)+1; i++) 
    {
        arr[j] = a[size-i-1];
        j = j+2;
    }

    j = 1;
    for(int i = 0; i<(size/2)+1; i++) 
    {
        arr[j] = a[i];
        j = j+2;
    }

    printf("\n  Rearranged array: ");
    for(int i = 0; i<size; i++) 
    {
        printf("%d  ",arr[i]);
    }

	printf("\n");
	
    return 0;
}

