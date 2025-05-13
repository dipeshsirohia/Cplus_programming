# include <bits/stdc++.h>
using namespace std;
int main()
{
map<vector<vector<string>>,pair<vector<int>,int>> syllabus = {
    {{{"Math","Algebra"},{"Science","chemistry"}},{{85,90,78},2}},
    {{{"History","geography"},{"Art","Music"}},{{80,98,48},8}},
    {{{"programming","datastructure"},{"AI","ML"}},{{80,98,98},3}},
    {{{"Physics","Electronics"},{"chemistry","biology"}},{{95,90,38},1}},
    {{{"Math","Algebra"},{"Science","chemistry"}},{{95,60,48},8}},
};

for(auto it:syllabus){
  for(auto at:it.first){
      for(auto bt:at){
          cout<<bt<<" ";
      }
  }
 for(auto ct:it.second.first){
    cout<<ct<<" ";
 }
 cout<<it.second.second;
 cout<<endl;
}

return 0;
}