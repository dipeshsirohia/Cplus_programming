# include <bits/stdc++.h>
using namespace std;
// Write a program to create a vector {1, 2, 3, 4, 5} and store the square of each element in 
// the same vector. 
int main()
{
vector <int> arr={1,2,3,4,5};
for(auto &it:arr){
     it=it*it;
}

for(auto it:arr){
    cout<<it<<" ";
}


return 0;
}