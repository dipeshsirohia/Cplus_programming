# include <bits/stdc++.h>
using namespace std;

int main(){
    // push_back
    // pop back
    // append
    // reverse
    // to string
     
    cout<<"Enter the random string";
    string s;
    getline(cin,s);
    cout<<"before \n";
    cout<<s<<endl;

    s.push_back('q');
    cout<<s<<endl;

    s.pop_back();
    cout<<s<<endl;

    s.append(" sirohia");
    cout<<s<<endl;

    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
}