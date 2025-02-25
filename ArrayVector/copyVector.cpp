# include <bits/stdc++.h>
using namespace std;
// Write a program to copy elements of one vector into another using a loop. 
int main()
{
vector <int> vec={1,2,3,4,5,6};
vector <int> arr;
arr=vec; //you can copy like that
for(int i:arr){
    cout<<i<<" ";
}

return 0;
}