# include <bits/stdc++.h>
using namespace std;
map<string,vector<string>> frequency(vector <string> arr){
    map<string,int> temp;
     map<string,vector<string>> res;

    for(auto it:arr){
        temp[it]++;
    }
    int max=0;
    for(auto it:temp){
        if(it.second>max){
            max=it.second;
        }
    }
    
    return res;
}
int main()
{
vector <string> categories={"Developer", "Designer", "Tester", "Developer", "Tester"};
map<string,vector<string>> ans=frequency(categories);

for(auto it:ans){
    cout<<it.first<<" : ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}

return 0;
}