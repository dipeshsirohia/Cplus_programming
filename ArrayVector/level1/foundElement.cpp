// Check if the number 8 exists in an array {3, 7, 9, 1, 5} and print "Found" or 
// "Not Found".
# include <bits/stdc++.h>
using namespace std;

int main()
{
vector <int> vec = {3, 7, 9, 1, 5};
int count=0;
for(auto it:vec){
    if(it==8){
        cout<<"found";
        count++;
        break;
    }

}
if(count==0){
    cout<<"Not found";
}

return 0;
}