# include <bits/stdc++.h>
using namespace std;
// 1. Increment each element of an array {2, 4, 6, 8} by 1 and print the modified 
// array. 
int main()
{
int array[]={2,4,6,8};
int n=sizeof(array)/sizeof(array[0]);
for(int i=0;i<n;i++){
    array[i]=array[i]+1;
}
for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
}

return 0;
}