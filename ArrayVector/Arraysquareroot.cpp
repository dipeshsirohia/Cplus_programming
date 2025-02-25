# include <bits/stdc++.h>
using namespace std;
// Write a program to initialize a vector with {1, 4, 9, 16, 25}, then replace each element with 
// its square root. 
int main()
{
vector <int> vec = {1,4,9,16,25};
for(int &it:vec){
    it=sqrt(it);
}

for(int it:vec){
    cout<<it<<" ";
}
return 0;
}