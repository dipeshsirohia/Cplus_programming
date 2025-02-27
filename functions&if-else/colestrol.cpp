# include <bits/stdc++.h>
using namespace std;
// Create a C++ function that takes a person’s cholesterol level as input and uses nested 
// if-else statements to determine if it is normal, borderline, or high. 
int main()
{
cout<<"Enter the cholesterol level between between range 100 - 300\n";
int level;
cin>>level;
if(level>=100 && level<=300){
   if(level>=100 && level<=200){
     cout<<"normal";
   }
   else if(level>=200 && level<=250){
     cout<<"border line";
   }
   else{
       cout<<"high";
   }
}else{
    cout<<"Ivalid input";
}

return 0;
}