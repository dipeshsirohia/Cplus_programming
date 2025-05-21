# include <bits/stdc++.h>
using namespace std;
map<string,vector<string>> frequency(vector <string> arr){
    map<string,int> temp;
     map<string,vector<string>> res;

    for(auto it:arr){
        temp[it]++;
    }
    
    for(auto it:temp){
        if(it.second>=3){
            res["Top category"].push_back(it.first);
        }
        else if(it.second==2){
            res["Mid Category"].push_back(it.first);
        }
        else{
            res["rare Category"].push_back(it.first);
        }
    }
    return res;
}
int main()
{
vector <string> categories={"mobile", "laptop", "mobile", "tablet", "laptop", "tv", "mobile"};
map<string,vector<string>> ans=frequency(categories);

for(auto it:ans){
    cout<<it.first<<" : ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}

return 0;
}