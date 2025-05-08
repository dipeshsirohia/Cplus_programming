# include <bits/stdc++.h>
using namespace std;
int main()
{
map<vector<string>,pair<int,int>> shop={
  {{"Electronics","cloths"},{100,50}},
  {{"bodylotion","facewash"},{10,5}},
  {{"shirt","jeans"},{120,500}},
  {{"jacket","mufler"},{12,59}},
  {{"shoes","shocks"},{178,520}},
};
for(auto it:shop){
    for(auto dt:it.first){
        cout<<dt<<"  ";
    }
    cout<<it.second.first<<"  ";
    cout<<it.second.second<<" ";
    cout<<endl;
}
return 0;
}