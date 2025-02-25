# include <bits/stdc++.h>
using namespace std;
// Declare an array of size n (user input) and initialize it with numbers from 1 to n. Multiply 
// all even-indexed elements by 2. 
int main()
{
int arr[]={1,2,3,4,5,6,7,8,7,6,5,4,3,2};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n;i++){
    if(i%2==0){
        arr[i]=arr[i]*2;
    }
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}