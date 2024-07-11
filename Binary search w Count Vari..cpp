#include<iostream>
using namespace std;
int count;

int binarysearch(int arr[],int size,int target)
{
	count++;
	int start=0;
	int end=size-1;
	
	while(start<=end)
	{
		count++;
		int mid=start+(end-start)/2;
		count++;
		
		if(arr[mid]==target)
		{
			count++;
			return mid;
			count++;
		}
		else if( arr[mid]>target)
		{
			count++;
			end = mid-1;
			count++;
		}
		else
		{
		  count++;
		  start= mid+1;
		  count++;	
		}
	}
	return -1;
	count++;	
}
int main()
{
	int size;
	cout<<"Enter the size of array :" ;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<size;i++)
	{
		count++;
		cin>>arr[i];
		count++;
	}
	
	int target;
	cout<<"Enter the target element: ";
	cin>>target;
	
	int result = binarysearch(arr,size,target);
	if (result==-1)
	{
	 count++;
	 cout<<"Target element not found.            "<<endl;
	 count++;	
	}
	else 
	{
		count++;
		cout<<"Target element found at position: "<<result+1<<endl;
		count++;
	}
	cout<<"Total count using Binary Search: "<<count<<endl;
	return 0;	
	
}
//testing a commit

