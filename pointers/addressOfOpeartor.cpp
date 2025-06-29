# include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr = &a;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Address of a using address of "<<&a<<endl;
    cout<<"Address of a using pointer:"<<ptr<<endl;
    cout<<"Address of ptr:"<<&ptr<<endl;
    
}