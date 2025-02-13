# include <iostream>
using namespace std;

int main(){
    cout<<"Enter the sentence \n";
    string a;
    getline(cin,a);

    int startIndex = 0;

    for(int i=0;i<a.length();i++){


        if( a[i] == ' ' || i == a.length() - 1){
            int length = (i == a.length() - 1) ? (i - startIndex + 1) : (i - startIndex);
            cout << a.substr(startIndex, length) << endl;
            startIndex = i + 1;
        }


    }

}