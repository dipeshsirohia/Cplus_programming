# include <bits/stdc++.h>
using namespace std;
string generatePassword(int length) {
    string string_char = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string string_num = "0123456789";
    string string_special = "~!@#$%^&*()";
    string password;

    // Creating the first 6 characters of 'password' as a combination of alphabets
        string s="";
        srand(time(0));
        for(int i=0;i<6;i++){
            int j=rand() % 26;
            s+=string_char[j];
        }

    // The 7th character should be a number
         int num=rand()%10;
         string n= to_string(num);

    // The 8th character should be a special character
        int k = rand()%11;
        char ch=string_special[k];
        
      password=s+n+ch;


    return password;
}
int main()
{
//  string s = generatePassword(8);
//  cout<<s;
string s="dipesh";
   
   cout<<s;
return 0;
}