# include <bits/stdc++.h>
using namespace std;
// Shift all elements of an array {2, 3, 4, 5, 6} one position to the left.
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    } 
} 
int main()
{
int arr[]={2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
int temp=arr[0];
for(int i=0;i<n;i++){
    if(i==n-1){
        arr[i]=temp;
    }else{
        arr[i]=arr[i+1];
    }
}
printArray(arr,n);
return 0;
}