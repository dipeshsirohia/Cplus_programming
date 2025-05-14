# include <bits/stdc++.h>
using namespace std;
map<string,vector<int>> frequency(vector<int> arr){
    map<string,vector<int>> category;

for(auto it:arr){
    if(it>=4){
        category["Good"].push_back(it);
    }else if(it==3){
         category["okay"].push_back(it);
    }else{
        category["bad"].push_back(it);
    }
}
return category;
}
int main()
{
vector<int> rating={5,3,4,1,2,5,4};    
map<string,vector<int>> ans=frequency(rating);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}