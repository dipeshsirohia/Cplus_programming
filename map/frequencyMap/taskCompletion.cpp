# include <bits/stdc++.h>
using namespace std;
map<string,vector<float>> frequency(vector<float> arr){
    map<string,vector<float>> category;

for(auto it:arr){
    if(it>5){
        category["quick"].push_back(it);
    }else if(it>=2){
         category["Average"].push_back(it);
    }else{
        category["Slow"].push_back(it);
    }
}
return category;
}
int main()
{
vector<float> timing={1, 5, 10, 3, 0.5, 7};    
map<string,vector<float>> ans=frequency(timing);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}