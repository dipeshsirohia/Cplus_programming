// Count how many times the number 5 appears in {5, 1, 5, 3, 5, 7, 5}.
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
vector <int> vec={5, 1, 5, 3, 5, 7, 5};
for(auto it:vec){
    if(it==5){
        count++;
    }
}
cout<<"The 5 is present "<<count<<" times";    
return 0;
}