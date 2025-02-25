# include <bits/stdc++.h>
using namespace std;
// Given an integer array {2, 3, 4, 5}, store the cube of each element in the same array. 
int main()
{
int arr[]={2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    arr[i]=arr[i]*arr[i]*arr[i];
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}