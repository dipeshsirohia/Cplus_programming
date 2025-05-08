# include <bits/stdc++.h>
using namespace std;
int main()
{
map<string,int> hospital={
    {"Blood Test",120},{"MRI Scan",800},{"X ray",100},{"ultra sound",150},{"ECG",200}
};

for(auto it:hospital){
    cout<<it.first<<" "<<it.second<<endl;
}

return 0;
}