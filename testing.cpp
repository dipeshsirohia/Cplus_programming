// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// vector<vector<int>> arr={{1,2},{3,9},{10,5},{2,3},};


//     sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
//         return a[1] > b[1];  // Sort by 2nd element (index 1)
//     });
// for(auto it:arr){
//     cout<<it[0]<<" "<<it[1]<<" "; 
// }
// return 0;
// }
# include <bits/stdc++.h>
using namespace std;
vector <int> checkindex(string str1,string str2){
    vector <int> ans;
     for(int i=0;i<str1.size();i++){
        int t=0;
        for(int j=0;j<str2.size();j++){
            
            if(j==i){
               t++;
            }
            if(str1[t]!=str2[j]){
                break;
            }
            t++;
            if(j==str2.size()-1){
                ans.push_back(i);
            }
        }
     }
     if(ans.size()==0){
        return {-1};
     }
     return ans;
}
int main()
{
string str1="abggcds";
string str2="abggcds";
vector <int> res = checkindex(str1,str2);
for(auto it:res){
    cout<<it<<" ";
}


return 0;
}