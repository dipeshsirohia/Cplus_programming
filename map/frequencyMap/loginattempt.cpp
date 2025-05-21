# include <bits/stdc++.h>
using namespace std;
map<string,vector<int>> frequency(vector<int> arr){
    map<string,vector<int>> category;

for(auto it:arr){
    if(it>4){
        category["Blocked"].push_back(it);
    }else if(it>=3){
         category["suspicious"].push_back(it);
    }else{
        category["safe"].push_back(it);
    }
}
return category;
}
int main()
{
vector<int> timing={1, 3, 5, 2, 4};    
map<string,vector<int>> ans=frequency(timing);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}