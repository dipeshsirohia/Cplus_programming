// Remove a Particular Digit from Each Element: Remove all occurrences of a 
// specific digit from numbers in an array
# include <bits/stdc++.h>
using namespace std;
void RemoveDigit(vector <int> &Vec){
    cout<<"Enter the Number you want to remove";
    int num;
    cin>>num;
    int count=0;
    for(int i=0;i<Vec.size();i++){
        if(Vec[i]==num){
            Vec.erase(Vec.begin()+i);
            i=0;
           }
        
        }
    
}
int main()
{
vector <int> Vec = {12,34,5,6,12,12,3,12,89,12,12,34,23,12,23};
RemoveDigit(Vec);
for(auto it:Vec){
    cout<<it<<" ";
}
return 0;
}
