// Create a vector {10, 20, 30, 40} and replace each element with element^element (e.g., 
//     10^10, 20^20). 

# include <bits/stdc++.h>
using namespace std;
int main()
{
vector <long> arr={1,2,3,4};
for(auto &it : arr){
   it=pow(it,it);
}
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}