// find max cosecutive one
# include <bits/stdc++.h>
# include <algorithm>
int max(int a,int b){
    return a=a>b?a:b;
}
int maxConsecutiveOnes(int arr[],int n){
    int count=0;
    int maxCount=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }else{
            count=0;
        }
        maxCount=max(count,maxCount);
    }
    return maxCount;
}
using namespace std;
int main()
{
int arr[]={1,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<maxConsecutiveOnes(arr,n);
return 0;
}