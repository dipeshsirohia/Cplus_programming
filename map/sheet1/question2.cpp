# include <bits/stdc++.h>
using namespace std;

int main()
{
map <string,int> medicine;

medicine.insert({"Antibiotic",500});
medicine.insert({"painkiller",250});
medicine.insert({"Antacid",150});
medicine.insert({"Anthistamine",150});
medicine.insert({"Antidepressed",300});

for(auto it:medicine){
     cout<<it.first <<" "<<it.second<<endl;
}
return 0;
}