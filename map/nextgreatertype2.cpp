# include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr = {4,2,3,2,1,19,18,5,6,7};

    unordered_map<int,int> mymap;
   
   for(int i=0;i<arr.size();i++){
       int flag=0;
       for(int j=i+1;j<arr.size();j++){
           if(arr[i]<arr[j]){
               mymap[arr[i]]=j-i;
               flag=1;
               break;
           }
       }
       if(flag==0){
           mymap[arr[i]]=-1;
       }
   }
   
   for(auto it:mymap){
       cout<<it.first<<" : "<<it.second<<endl;
   }
return 0;
}