#include<bits/stdc++.h>
using namespace std;
int subarraysum(int arr[],int n,int sum)
{
	int currentsum=arr[0], start=0, i;	
	for(int i=1;i<=n;i++)
	{
		while(currentsum>sum && start< i-1){
			currentsum=currentsum-arr[start];
			start++;
		}
		if(currentsum==sum){
			cout<<"sum found between indexes "<<start<<" and "<<i-1;
		
	    return 1;
        }
        if(i<n)
        		currentsum=currentsum+arr[i];
        
	}
	cout<<"no subarrayfound"<<endl;
	return 0;

}

int main()
{int arr[]={15, 2, 4, 8, 9, 5, 10, 23 };
int n=sizeof(arr)/sizeof(arr[0]);
int sum=23;
subarraysum(arr,n,sum);
	
	return 0;
}