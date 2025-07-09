# include <bits/stdc++.h>
using namespace std;
void KadanesAlgorithm(int arr[],int n){
    int maxSum=0;
    int currSum=0;
    for(int i=0;i<n;i++){
       currSum+=arr[i];

       if(maxSum<currSum){
          maxSum=currSum;
       }
       if(currSum<0){
        currSum=0;
       }
    }
    cout<<maxSum;
}
int main()
{
int arr[]={3,-4,-5,16};
KadanesAlgorithm(arr,4);
return 0;
}