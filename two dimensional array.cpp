#include<stdio.h>
int main()
{
	int i,j;
	int arr[2][3]={10,20,30,40,50};
	for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("value of arr[%d %d],%d/n",i,j,arr[i][j]);
	}
}
}
