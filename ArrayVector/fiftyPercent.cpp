# include <bits/stdc++.h>
// A company records daily electricity consumption {20, 40, 60, 80, 100} in 
// kilowatt-hours. Write a program to increase each value by 50% and store the results 
// in the same array. 
using namespace std;
int main()
{
int arr[]={20,40,60,80,100};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    arr[i]=arr[i]*0.5+arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}