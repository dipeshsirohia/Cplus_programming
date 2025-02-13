#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the numbers \n";
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int min=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    if(min>d){
        min=d;
    }
    if(min>e){
        min=e;
    }

    cout<<"The smallest number is "<<min<<endl;
   
    
}
