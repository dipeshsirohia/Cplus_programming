# include <bits/stdc++.h>
using namespace std;
int numToBinary(int num){
    int sum=0;
    while(num!=0){
        int temp=num%2;
        sum=sum*10+temp;
        num=num/2;
    }
    return sum;
}
int main()
{
cout<<numToBinary(5);
return 0;
}