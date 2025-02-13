# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the word \n";
string a;
cin>>a;
for(int i=0;i<a.length();i++){
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
        cout<<"yes";
        break;
    }
}
return 0;
}