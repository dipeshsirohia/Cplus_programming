// 6. Student Names
// const names = ['Amit', 'Zoya', 'Priya', 'Bob', 'Sam', 'Yash'];

// Label as:
// "Starts with Vowel"


// "Starts with Consonant"

# include <bits/stdc++.h>
using namespace std;
map<string,vector<string>> frequency(vector<string> arr){
    map<string,vector<string>> category;

for(auto it:arr){
    if(it[0]=='A'||it[0]=='E'||it[0]=='I'||it[0]=='O'||it[0]=='U'){
        category["starts with vowel"].push_back(it);
    }else {
         category["Starts with Consonant"].push_back(it);
    }
}
return category;
}
int main()
{
vector<string> names={"Amit", "Zoya", "Priya", "Bob", "Sam", "Yash"};    
map<string,vector<string>> ans=frequency(names);
for(auto it:ans){
    cout<<it.first<<" ";
    for(auto at:it.second){
        cout<<at<<" ";
    }
    cout<<endl;
}
return 0;
}
