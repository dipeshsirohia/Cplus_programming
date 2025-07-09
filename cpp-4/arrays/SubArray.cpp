# include <bits/stdc++.h>
using namespace std;
void PrintSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
void SumPrintSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            cout<<" = " <<sum;
            cout<<endl;
        }
    }
}
void MaxSumPrintSubarray(int arr[],int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;

            for(int k=i;k<=j;k++){
                
                sum+=arr[k];
            }
            cout<<sum;
            maxSum=max(sum,maxSum);
            cout<<endl;
        }

    }
    cout<<"Max sum is "<< maxSum;
}
int main()
{
int arr[]={2,4,6,1,5};
int n=sizeof(arr)/sizeof(arr[0]);
// SumPrintSubarray(arr,n);
MaxSumPrintSubarray(arr,n);
return 0;
}