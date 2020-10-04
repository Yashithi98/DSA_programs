/* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping 
   the adjacent elements if they are in wrong order 
*/

#include<stdio.h>
void BubbleSort(int a[20], int n)
{
	int i,j,temp;
for(i = 0; i <n; i++)
{
	for(j = 0; j < n-1; j++)
	{
		if(a[j] > a[j+1])
		{
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
		}
	}
}
}
void main()
{
	int n,a[20],i,j;
	printf("Enter the number of terms you want to enter:");
	scanf("%d",&n);
	printf("Enter the datas:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	BubbleSort(a, n);
	printf("The datas after sorting is:\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}