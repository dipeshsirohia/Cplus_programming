# include <iostream>
using namespace std;
void inputArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter the array value";
        cin>>arr[i];
    }      
}
void printArr(int arr[], int n){
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
}
void squareEach(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
      }        
}
int main()
{
cout<<"Enter the number";
int n;
cin>>n;
int arr[n];
inputArr(arr,n);
squareEach(arr,n);
printArr(arr,n);
return 0;
}