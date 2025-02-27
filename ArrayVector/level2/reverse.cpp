// Reverse the elements of an array {1, 2, 3, 4, 5} without using an extra array.
# include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    } 
}
int main()
{
int arr[]={1,2,3,4,5};
int i=0;
int j=sizeof(arr)/sizeof(arr[0])-1;
cout<<"array before ";
printArray(arr,5);
while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
cout<<endl;

cout<<"array after ";
printArray(arr,5);
return 0;
}