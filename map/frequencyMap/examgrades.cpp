# include <bits/stdc++.h>
using namespace std;
map<string,vector<char>> frequency(vector<char> arr){
    map<string,vector<char>> category;

for(auto it:arr){
    if(it=='A' || it=='B' || it=='C'){
        category["Pass"].push_back(it);
    }else{
         category["fail"].push_back(it);
    }
}
return category;
}
int main()
{
vector<char> grades={'A', 'C', 'F', 'B', 'D'};    
map<string,vector<char>> ans=frequency(grades);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}