#include <bits/stdc++.h>
using namespace std;

bool isMatch(string s, string p)
{
    int i = 0;
    int j = 0;
    int n=p.size();
    cout<<"the size is "<<n<<endl;
    while (i < s.size() && j < p.size())
    {
        if (p[j] == '?')
        {
        }
       else if (p[j] == '*' && j == n - 1)
        {
            return true;
        }
        else if (p[j] == '*')
        {
              
        }
        else if (s[i] == p[j])
        {
        }
        else
        {
            return false;
        }
        i++;
        j++;
    }

    if (i == s.size())
    {
        return true;
    }
    return false;
}

int main()
{
    cout << isMatch("aa", "*");
    cout << "hello";
    return 0;
}