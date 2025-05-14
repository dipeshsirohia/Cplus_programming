# include <bits/stdc++.h>
using namespace std;
map<string,vector<int>> frequency(vector<int> arr){
    map<string,vector<int>> category;

for(auto it:arr){
    if(it>1000){
        category["expensive"].push_back(it);
    }else if(it>300){
         category["Moderate"].push_back(it);
    }else{
        category["cheap"].push_back(it);
    }
}
return category;
}
int main()
{
vector<int> pricing={150, 499, 999, 75, 2000, 330};    
map<string,vector<int>> ans=frequency(pricing);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}