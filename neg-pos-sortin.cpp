#include<bits/stdc++.h>
using namespace std;

// Input : 
// N = 8
// arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
// Output : 
// 1  3  2  11  6  -1  -7  -5
void segregate(int arr[],int n)
{
	vector<int>first,second;
	for(int i=0;i<n;i++)
	{
		if (arr[i]<0)
		{
			first.push_back(arr[i]);
		}
		else
			second.push_back(arr[i]);
	}
		vector<int>result;
		for(auto &x:second)
			result.push_back(x);
		for(auto &x:first)
			result.push_back(x);
		for(int i=0;i<n;i++)
		{
			arr[i]=result[i];
		}

	
}



int main()
{ int arr[]={1, -1, 3, 2, -7, -5, 11, 6};
int n=sizeof(arr)/sizeof(arr[0]);
 segregate(arr,n);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
	
	return 0;
}