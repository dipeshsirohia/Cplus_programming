# include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={10, 10, 10, 10};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    int max=arr[i];
    int idx=i;
    for(int j=i+1;j<n;j++){
       if(max<arr[j]){
        max=arr[j];
        idx=j;
       }
       
    }
    int temp=arr[i];
       arr[i]=arr[idx];
       arr[idx]=temp;
    
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}