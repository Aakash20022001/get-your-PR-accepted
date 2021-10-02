// Searching

// Searching is the process of finding some particular element in the list. If the element is present in the list, then the process is called successful and the process returns the location of that element, otherwise the search is called unsuccessful.

// Linear Search

// Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.

// Linear Search Code in C++

// #include<iostream>
// using namespace std;

// int linear(int[],int,int);//Function Declaration
// int main()
// {
// int ar[50],size,item,i,pos;
// cout<<"Enter number of elements=";
// cin>>size;
// cout<<"Enter Array's Elements=";
// for(i=0;i<size;i++)
// cin>>ar[i];
// cout<<"Enter element which to be searched=";
// cin>>item;
// pos=linear(ar,size,item);
// if(pos==-1)
// cout<<"Element not Found";
// else
// cout<<"Element Found at="<<(pos+1);

// return 0;
// }
// int linear(int ar[],int size,int item)//Function to perform linear search
// {
// int i;
// for(i=0;i<size;i++)
// {
//     if(ar[i]==item)
//     return i;
// }    

// return -1;

// }

// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
