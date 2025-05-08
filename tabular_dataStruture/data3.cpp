# include <bits/stdc++.h>
using namespace std;
int main()
{     
map<vector<string>,pair<vector<string>,int>>tour={
    {{"paris","rome"},{{"sightseeing","Museum Tour"},2000}},
    {{"Alwar","jaipur"},{{"siliserh","hawamahal"},3000}},
    {{"delhi","bombay"},{{"lalkila","marine drive"},4000}},
    {{"Mathura","vrindavan"},{{"janam bhomi","dwarkadhesse"},5000}},
    {{"gujrat","Agra"},{{"statue of unity","tajmahal"},6000}},
};

for(auto it:tour){
    for(auto at:it.first){
        cout<<at<<" ";
    }
   for(auto bt:it.second.first){
    cout<<bt<<" ";
   } 
   cout<<it.second.second;
   cout<<endl;
}
return 0;
}