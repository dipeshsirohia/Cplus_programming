# include <bits/stdc++.h>
using namespace std;
void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion(int arr[],int key,int pos,int &n){
     for(int i=n-1;i>=pos;i--){
          arr[i+1]=arr[i];
     } 
     arr[pos]=key;
     n++;
}

void deletion(int arr[],int pos,int &n){
  for(int i=pos;i<n;i++){
          arr[i]=arr[i+1];
     } 
     
     n--;
}
int main()
{
cout<<"Enter the Size of array"<<endl;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"Enter values \n";
    cin>>arr[i];
}
cout<<"Enter key"<<endl;
int key;
cin>>key;
cout<<"Enter position"<<endl;
int pos;
cin>>pos;
Print(arr,n);
insertion(arr,key,pos,n);
Print(arr,n);
deletion(arr,1,n);
Print(arr,n);
}