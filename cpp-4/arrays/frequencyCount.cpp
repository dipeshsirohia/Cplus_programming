# include <bits/stdc++.h>
using namespace std;
int *frequency(int arr[],int n,int max){
   int* temp =new int[max];
    for(int i=0;i<max;i++){
        temp[i]=0;
    }
    for(int i=0;i<n;i++){
       temp[arr[i]]++;
    }
   return temp;
}
int main()
{
int arr[]={1,2,3,1,2,3,1,2,3,4,5,4,5,6,5,7,7,8,7,8};
int n=sizeof(arr)/sizeof(arr[0]);
 int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
      max=max+1;
int *newArr = frequency(arr,n,max);
for(int i=0;i<max;i++){
    cout<<newArr[i]<<" ";
}
return 0;
}