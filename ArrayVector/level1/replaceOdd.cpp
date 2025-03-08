// Take an vector of 7 elements, replace all odd numbers with -1, and print the result. 
# include <bits/stdc++.h>
using namespace std;
int main()
{
vector <int> arr = {1,2,3,4,5,6,7,8,9};
for(auto &it:arr){
    if(it%2!=0){
        it=-1;
    }
}
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}