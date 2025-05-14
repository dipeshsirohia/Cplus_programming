# include <bits/stdc++.h>
using namespace std;
map<string,vector<int>> frequency(vector<int> arr){
    map<string,vector<int>> category;

for(auto it:arr){
    if(it>35){
        category["Hot"].push_back(it);
    }else if(it>20){
         category["Warm"].push_back(it);
    }else{
        category["Cold"].push_back(it);
    }
}
return category;
}
int main()
{
vector<int> temperatures={42, 35, 28, 18, 8, -2};    
map<string,vector<int>> ans=frequency(temperatures);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}