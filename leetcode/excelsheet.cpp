# include <bits/stdc++.h>
using namespace std;
int titleToNumber(string columnTitle) {
    long long sum = 0;
    for(char ch : columnTitle) {
        sum = sum * 26 + (ch - 'A' + 1);
    }
    return sum;
}
int main()
{
cout<<titleToNumber("MAN");
return 0;
}