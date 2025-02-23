#include<bits/stdc++.h>
using namespace std;
int main()
{
vector <int> arr;
cout<<"Enter the number of value you want to enter \n";
int n;
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter the digit"<<endl;
    int vl;
    cin>>vl;
    arr.push_back(vl);
}

for(int i=0;i<n;i++){
    
    cout<<arr[i]<<" ";
}

return 0;
}