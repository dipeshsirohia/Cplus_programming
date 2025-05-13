# include <bits/stdc++.h>
using namespace std;
int main()
{
map<vector<vector<string>>,pair<vector<int>,vector<vector<string>>>> Dieseases = {
{{{"Fever","cough"},{"sore","throat"}},{{101,202},{{"Medication","rest"}}}},
{{{"Headache","blur vision"},{"Dizziness"}},{{303,404},{{"MRI","consultaion"}}}},
{{{"Back Pain","Fatigue"},{"joint swelling"}},{{505,606},{{"physiotheripy","painkillers"}}}},
{{{"Nausea","vommiting"},{"stomach Ache"}},{{707,808},{{"diet change","Antaacids"}}}},
};

for(auto it:Dieseases){
    for(auto at:it.first){
        cout<<"[";
        for(auto bt:at){
            cout<<bt<<" ";
        }
        cout<<"]";
    }
    cout<<"[";
   for(auto ct:it.second.first){
       cout<<ct<<" ";
   }
   cout<<"]";
   cout<<"[";
   for(auto dt:it.second.second){
        for(auto et:dt){
            cout<<et<<" ";
        }
   }
   cout<<"]";
   cout<<endl;
}

return 0;
}