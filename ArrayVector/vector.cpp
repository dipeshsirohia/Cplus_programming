# include <bits/stdc++.h>
using namespace std;
int main()
{
vector <int> arr={1,2,3,4,5,6,7,8};

for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;

for(auto &it:arr){
    it=it*2;
}

for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}