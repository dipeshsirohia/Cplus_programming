// Find the second largest number in an array {11, 7, 9, 5, 12}
# include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={11,7,9,5,12,45,2,34,67};
int max=-1;
int secondmax;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    if(max<arr[i]){
        secondmax=max;
        max=arr[i];
    }
    if(arr[i]>secondmax && arr[i]<max){
        secondmax=arr[i];
    }
}
cout<<secondmax;
return 0;
}