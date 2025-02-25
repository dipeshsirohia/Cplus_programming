// Given two arrays of size n, copy all even numbers from the first array to the second array.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int cparr[9];
for(int i=0;i<9;i++){
    if(arr[i]%2==0){
        cparr[i]=arr[i];
    }
    else{
        cparr[i]=0;
    }
}

for(int i=0;i<9;i++){
    cout<<cparr[i]<<" ";
}
return 0;
}