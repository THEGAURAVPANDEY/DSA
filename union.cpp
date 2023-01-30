#include<bits/stdc++.h>
using namespace std;
// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3
// Output: 
// 5
int dounion(int arr1[],int arr2[],int m,int n){
	vector<int>v;
	int ans=0;
	for(int i=0;i<n;i++)
		v.push_back(arr2[i]);
	for(int j=0;j<m;j++)
		v.push_back(arr1[j]);
	sort(v.begin(),v.end());
	for(int k=0;k<v.size();k++)
	{
		if(v[k]==v[k+1])
			continue;
		ans++;
	}
	return ans;


}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={1,2};
	int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);
	int count=dounion(arr1,arr2,m,n);
	cout<<count;

	return 0;
}