// Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.
// Note: If the array is increasing then just print the last element will be the maximum value.

// Example 1:

// Input: 
// n = 9
// arr[] = {1,15,25,45,42,21,17,12,11}
// Output: 45
// Explanation: Maximum element is 45.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//usin sort function.
	int n= 5;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<*max_element(arr,arr+n);
	
	return 0;
}