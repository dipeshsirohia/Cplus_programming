# include <iostream>
using namespace std;
void category(int temp){
    if(temp>=60){
    cout<<"HOT";
    }
    else if(temp >=37){
        cout<<"WARM";
    }
    else if(temp<=36){
        cout<<"cold";
    }
    else{
        cout<<"Invalid Input \n";
    }
}
int main()
{
cout<<"Enter the temperature \n";
int temp;
cin>>temp;
category(temp);
return 0;
}