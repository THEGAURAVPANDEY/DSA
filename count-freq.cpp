#include<bits/stdc++.h>
using namespace std;
int ocuurencefunction(int arr[],int n,int x)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			res++;
	}
	return res;
}




int main()
{int arr[]={5,4,3,2,27,8,9,5,44,33,33,33,4};
  int x=33;
  int n=sizeof(arr)/sizeof(arr[0]);
  int frequency = ocuurencefunction(arr,n,x);
  cout<<"occurence of the element"<<x<<"   "<<frequency;
	return 0;
}