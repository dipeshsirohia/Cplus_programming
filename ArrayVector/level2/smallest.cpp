//  Find the smallest element in an array {12, 4, 9, 3, 15}
# include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={12,4,9,3,15,98,67,34,-1};
int min=INT32_MAX;
for(int i=0;i<9;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
cout<<"The minimum element is "<<min<<endl;
return 0;
}