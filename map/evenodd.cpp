# include <bits/stdc++.h>
using namespace std;
map<string,vector<int>> evenOdd(vector<int> arr){
   
    map<string,vector<int>> res;
    for(auto it:arr){
        if(it%2==0){
        res["even"].push_back(it);
    }else{
       res["odd"].push_back(it); 
    }
    }
    return res;
}
int main()
{
vector<int> arr={12,45,89,67,34,1,3,90,76,53,63,19};
map<string,vector<int>> ans =evenOdd(arr);

for(auto it:ans){
    cout<<it.first<<" : ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}