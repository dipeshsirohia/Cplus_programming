// Ek function likho jo students ke marks ka array le aur:
// Passing students count kare (jo 40+ marks wale hain).
// Class topper find kare (max marks).
// Average marks calculate kare.

# include <bits/stdc++.h>
using namespace std;
void students(vector <int> &std){
    int count=0;
    for(int i=0;i<std.size();i++){
        if(std[i]>40){
            count++;
        }
    }
int maxNum=std[0];
    for(int i=0;i<std.size();i++){
       if(maxNum<std[i]){
        maxNum=std[i];
       }
    }

    float sum=0;
    for(auto it:std){
        sum+=it;
    }
    float average=sum/std.size();

    cout<<"Number of passing students are "<<count<<endl;
    cout<<"Topper of class get ==> "<<maxNum<<endl;
    cout<<"The Average of the number is ==>"<<average<<endl;
}
int main()
{
vector <int> std={45,40};
students(std);
return 0;
}