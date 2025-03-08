# include <bits/stdc++.h>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int factorial(int n){
  int arr[]={1,1,2,6,24,120,720,5040,40320,362880};
  return arr[n];
}

int sumDigit(int val){
    int sum=0;
    while(val>0){
        int temp=val%10;
        sum=sum+factorial(temp);
        val=val/10;
    }
    return sum;
}

void factSumArr(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        int val=arr[i];
        sum=sumDigit(val);
        arr[i]=sum;
    }
}
int main()
{
int arr[]={23,345,12,34,87};
int n=sizeof(arr)/sizeof(arr[0]);
printArr(arr,n);
cout<<endl;
factSumArr(arr,n);
printArr(arr,n);


return 0;
}