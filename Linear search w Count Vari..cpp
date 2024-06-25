#include<iostream>
using namespace std;
int count;
int Linearsearch(int arr[],int target,int size)
{
	count++;
	for(int i=0;i<=size;i++)
	{
	count++;
	if(arr[i]==target)
	{
		count++;
		return i;
		count++;
	}
   } 
   return -1;
   count++;
}
int main(){
	int size;
	cout<<"Enter  the size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<size;i++){
		count++;
		cin>>arr[i];
		count++;
	}
	int target;
	cout<<"Enter the target: ";
	cin>>target;

	int result = Linearsearch(arr,target,size);
	if(result == -1){
		count++;
		cout<<"Target element not found."<<endl;
		count++;
	}
	else{
		count++;
		cout<<"Target element found at position: "<<result+1<<endl;
		count++;
	}
	cout<<"Total Count using Linear Search: "<<count<<endl;
	return 0;
}

