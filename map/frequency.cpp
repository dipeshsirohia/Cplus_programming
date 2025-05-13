# include <bits/stdc++.h>
using namespace std;
map<int,int> frequency(vector<int> arr){
    map<int,int> res;
    for(auto it:arr){
        res[it]++;
    }
    return res;
}
map<string,int> frequency(vector<string> arr){
    map<string,int> res;
    for(auto it:arr){
        res[it]++;
    }
    return res;
}
int main()
{
// vector <int> arr={1,1,1,2,3,4,1,2,4,5,3,4,6,7,8,6,7,9,9,8,6,9,0,7,5,3,2,1,2,3,4,7,5,3,2,5,7,8,9,7,6,5,4,3};
vector <string> arr={"apple","banana","apple","apple","banana","apple","mango","mango","pineapple"};
// map<int,int> ans=frequency(arr);
map<string,int> ans=frequency(arr);


for(auto it:ans){
    cout<<it.first<<" : "<<it.second<<endl;
}

return 0;
}