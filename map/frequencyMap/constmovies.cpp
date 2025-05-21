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
            res["Block Baster"].push_back(it.first);
        }
        else if(it.second==2){
            res["Hit"].push_back(it.first);
        }
        else{
            res["Underrated"].push_back(it.first);
        }
    }
    return res;
}
int main()
{
vector <string> categories={"Avatar", "Titanic", "Inception", "Avatar", "Titanic", "Avatar"};
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