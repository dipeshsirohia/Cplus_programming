# include <bits/stdc++.h>
using namespace std;
// Input 5 elements in an array, replace all negative numbers with zero, and print the 
// modified array. 
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main()
{
int arr[]={-1,2,-3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
printArray(arr,n);
cout<<endl;
for(int i=0;i<n;i++){
    if(arr[i]<0){
        arr[i]=0;
    }

}
printArray(arr,n);
return 0;
}