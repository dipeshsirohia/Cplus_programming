# include <bits/stdc++.h>
using namespace std;
int main()
{
char ch='t';
char *cp = &ch;
cout<<(void *) cp;
cout<<endl;

int b=97;
void * ptr=&b;
cout<<ptr<<endl;

int c=97;
void * ptr1=&c;
cout<<ptr1<<endl;

int d=98;
void * ptr12=&d;
cout<<ptr12<<endl;

float e=98;
float *ptr123=&e;
cout<<ptr123;

}