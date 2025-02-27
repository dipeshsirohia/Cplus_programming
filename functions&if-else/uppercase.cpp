# include <iostream>
using namespace std;
void IsUppercase(){
    cout<<"Enter the character";
    char ch;
    cin>>ch;
    
    int ascii=(int)ch;
    if(ch>=65 && ch<=90){
        cout<<"Yes this is Uppercase";
    }else{
        cout<<"It is not the upper case";
    }
   
}
int main()
{
IsUppercase();
return 0;
}