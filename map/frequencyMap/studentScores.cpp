# include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> scores={92, 45, 78, 88, 60, 33, 100};

map<string,vector<int>> category;

for(auto it:scores){
    if(it>=90){
        category["Excellent"].push_back(it);
    }else if(it>50){
         category["Average"].push_back(it);
    }else{
        category["poor"].push_back(it);
    }


}

for(auto it:category){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}