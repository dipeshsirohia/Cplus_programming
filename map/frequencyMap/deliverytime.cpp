# include <bits/stdc++.h>
using namespace std;
map<string,vector<int>> frequency(vector<int> arr){
    map<string,vector<int>> category;

for(auto it:arr){
    if(it>=60){
        category["slow"].push_back(it);
    }else if(it>30){
         category["Average"].push_back(it);
    }else{
        category["fast"].push_back(it);
    }
}
return category;
}
int main()
{
vector<int> timing={15, 45, 30, 10, 90, 120};    
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