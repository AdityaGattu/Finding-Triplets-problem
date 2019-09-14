#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool findTriplets(int arr[], int n);
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
        if(findTriplets(arr, n))
        cout<<"1"<<endl;
        else 
        cout<<"0"<<endl;
	}
    return 0;
}

bool findTriplets(int arr[], int n)
{ 
    /*for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }*/
      sort(arr,arr+n);    
 
    for(int i=0;i<n-2;i++){
       int l=i+1;
    int r=n-1;
    int x=arr[i];
    while(l<r){
    if(x+arr[l]+arr[r]==0)
    {
        return true;
    }
    
    else if(x+arr[l]+arr[r]<0)
    l++;
    else
    r--;
    }
    }
    return false;
}