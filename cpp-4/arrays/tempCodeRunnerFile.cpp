# include <bits/stdc++.h>
using namespace std;
void rotation(int arr[],int k,int n){
    int i=0;
    while(i<k){
        int temp=arr[n-1];
        for(int i=n-1;i<n;i--){
            if(i==0){
                arr[i]=temp;
            }else{
                 arr[i]=arr[i-1];
            }
           }
        i++;
    }
}
int main()
{
int arr[]={1,2,3,4,5};
rotation(arr,2,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}