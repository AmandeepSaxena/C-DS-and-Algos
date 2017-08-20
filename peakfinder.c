#include<stdio.h>

int peakFind(int arr[], int low, int high, int n)
{
	int mid = (low+high)/2;
	if((mid==0 || arr[mid-1] <= arr[mid])&&(mid = n-1 || arr[mid+1] <= arr[mid]))
		return mid;
	else if(mid>0 && arr[mid-1]>arr[mid])
		return peakFind(arr, low, (mid-1), n);
	else
		return peakFind(arr, (mid+1),high, n);
}

int peak(int arr[], int n)
{
	return peakFind(arr,0,n-1,n);

}

int main()
{
	int arr[]={1,3,10,5,6};
	int n = sizeof(arr);
	printf("Index of peak is: %d", peak(arr,n));
	return 0;
}