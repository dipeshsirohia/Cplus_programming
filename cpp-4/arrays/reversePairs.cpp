# include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={10,20,30,40,50,60,70};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i+=2){
   swap(arr[i],arr[i+1]);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}