# include <bits/stdc++.h>
using namespace std;
int main()
{
map <string,int> mymap;

mymap["Blood test"]=120;
mymap["MRI scan"]=800;
mymap["x-ray"]=100;
mymap["Ultra - sound"]=150;
mymap["ECG"]=200;
mymap["CT scan"]=700;
mymap["COVID-19 test"]=50;
mymap["Urine Analysis"]=80;
mymap["Allergy test"]=300;
mymap["Biopsy"]=900;
cout<<"test category : Average Cost(USD) \n";
for(auto it:mymap){
    cout<<it.first <<" : "<<it.second<<endl;
}
cout<<mymap["Urine Analysis"]+mymap["Biopsy"];
return 0;
}