# include <bits/stdc++.h>
using namespace std;
void Sort(int arr[],int n){
   for(int i=1;i<n;i++){
    for(int j=i-1;j>=0;j--){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }
}
void input(int *arr,int n){
   for(int i=0;i<n;i++){
    cout<<"enter value"<<endl;
       cin>>arr[i];
   }
}
void print(int *arr,int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int *arr,int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
cout<<"Enter the size of array"<<endl;
int n;
cin>>n;
int* arr=new int[n];
input(arr,n);
Sort(arr,n);
print(arr,n);
int key;
cout<<"Enter Key to search"<<endl;
cin>>key;
int index=binarySearch(arr,n,key);
if(index==-1){
    cout<<"Key not found";
}else{
    cout<<"Key found at index "<<index;
}
return 0;
}