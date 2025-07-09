# include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
int arr[]={1,2,3,4,5,6};
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
reverse(arr,6);
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
return 0;
}