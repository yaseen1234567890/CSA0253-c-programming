#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x);

int main()
{
int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
int n = sizeof(arr)/sizeof(arr[0]);
int x = 10;
int result = binarySearch(arr, 0, n-1, x);
if(result == -1)
{
printf("Element is not present in the array");
}
else
{
printf("Element is present at index %d", result);
}
return 0;
}

int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
int mid = l + (r - l)/2;
if (arr[mid] == x)
{
return mid;
}
if (arr[mid] > x)
{
return binarySearch(arr, l, mid-1, x);
}
return binarySearch(arr, mid+1, r, x);
}
return -1;
}
