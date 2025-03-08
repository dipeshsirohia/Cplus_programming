# include <bits/stdc++.h>
using namespace std;
// Swap the first and last elements of an array {11, 22, 33, 44, 55}. 
int main()
{
int arr[]={11,22,33,44,55};
int lastindex=sizeof(arr)/sizeof(arr[0])-1;

int temp=arr[0];
arr[0]=arr[lastindex];
arr[lastindex]=temp;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
}
return 0;
}