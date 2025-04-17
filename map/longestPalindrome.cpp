#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s)
{
    map<char, int> mymap;
    for (int i = 0; i < s.size(); i++)
    {
        if (mymap.count(s[i]) == 0)
        {
            mymap[s[i]] = 1;
        }
        else
        {
            mymap[s[i]]++;
        }
    }
    int sum = 0;
    int maxOdd = 0;
    for (auto num : mymap)
    {
        if (num.second % 2 == 0)
        {
            sum += num.second;
        }
        else
        {
            if (num.second > maxOdd)
            {
                maxOdd = num.second;
                
            }
        }
    }
for(auto val:mymap){
    cout<<val.first<<" : "<<val.second<<endl;
}
sum+=maxOdd; 

    return sum;
}

int main()
{
cout<<longestPalindrome("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth");
    return 0;
}