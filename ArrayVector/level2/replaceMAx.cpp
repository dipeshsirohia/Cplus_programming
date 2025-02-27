# include <bits/stdc++.h>
using namespace std;
// Replace the maximum element of an array {5, 12, 8, 20, 3} with -1. 
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    } 
}
int main()
 {
int arr[]={5,12,8,20,3};
int max=-1;
int ind=0;
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
        ind=i;
    }
}
arr[ind]=-1;
printArray(arr,5);
return 0;
}