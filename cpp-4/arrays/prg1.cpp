// 2,4,25,3,1
# include <bits/stdc++.h>
using namespace std;
int maxElemnt(int arr[],int n){
   int max=INT_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>max){
        max=arr[i];
       }
    }
    

    for(int i=0;i<n;i++){
        if((arr[i]*arr[i])>max && arr[i]!=max){
            return -1;
        }
    }
    return max;
}
int main()
{
int arr[] = {2,4,25,3,1};
int n=5;
cout<<maxElemnt(arr,n);
return 0;
}
