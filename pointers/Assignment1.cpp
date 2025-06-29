// 1. Find the address of a variable
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a=10;
// cout<<&a;
// return 0;
// }

// Task: Use the address-of operator to print the address of a variable.
// Input: int num = 10;
// Output: Address of num: <memory_address>
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int num=10;
// cout<<&num;
// return 0;
// }

// 2. Pointer initialization with address-of operator

// Task: Initialize a pointer with the address of a variable and print the value it points to.
// Input: int num = 10; int* ptr = &num;
// Output: Value pointed to by ptr: 10
//   # include <bits/stdc++.h>
//   using namespace std;
//   int main()
//   {
//     int num = 10;
//     int* ptr = &num;
//     cout<<*ptr;
//   return 0;
//   }

// 3. Access value of variable using pointer

// Task: Use a pointer to access and print the value of a variable
// Input: int num = 15; int* ptr = &num;
// Output: Value pointed to by ptr: 15
// # include <bits/stdc++.h>
//   using namespace std;
//   int main()
//   {
//     int num = 15;
//     int* ptr = &num;
//     cout<<*ptr;
//   return 0;
//   }

// 4. Use address-of operator to print address

// Task: Print the address of a variable using the address-of operator.
// Input: int num = 25;
// Output: Address of num: <memory_address>

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int num=25;
// cout<<&num;
// return 0;
// }
// 5. Print the address of a variable and its value

// Task: Print both the address and value of a variable using a pointer.
// Input: int a = 5; int* ptr = &a;
// Output: Address: <memory_address>, Value: 5
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a=5;
// int* ptr = &a;
// cout<<"Address :"<<ptr<<", Value :"<<a<<endl;

// return 0;
// }

// 6. Change the value of a variable using a pointer

// Task: Modify the value of a variable using a pointer.
// Input: int a = 10; int* ptr = &a;
// Output: New value of a: 20

// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a = 10; 
// int* ptr = &a;
// *ptr=20;
// cout<<"New value of a: "<<a; 
// return 0;
// }

// 7. Basic Pointer Increment :

// Declare an integer variable x and a pointer ptr pointing to x. Increment the pointer and print the values of ptr and x. What is the result?
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a = 10; 
// int* ptr = &a;
// cout<<ptr<<endl;
// ptr++;
// cout<<"Address: "<<ptr<<" value: "<<a; 
// return 0;
// }

// 8. Pointer Arithmetic with Simple Variables :

// Declare two integer variables a and b. Declare a pointer that points to a. Use pointer arithmetic to set the value of b to be the sum of a and b using ptr.
// # include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int a=10;
// int b=12;
// int *ptra=&a;
// int *ptrba=&b;
// b=ptra+ptrba;
// cout<<b;
// return 0;
// }

// 9.  Pointer Subtraction :

// Create two integer variables, x and y. Declare two pointers, ptr1 and ptr2, pointing to x and y respectively. Use pointer arithmetic to calculate the difference between the two pointers.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int x=10;
int y=20;
int *ptr1=&x;
int *ptr2=&y;
int res = ptr1-ptr2;
cout<<res;

return 0;
}

// 10.  Pointer Decrement :

// Declare an integer variable x and a pointer ptr pointing to it. Perform a decrement on the pointer and then print the pointer's value and the variable's value.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int x=100;
int *ptrx=&x;
cout<<"before increment "<<ptrx<<endl;
ptrx++;
cout<<"after increament "<<ptrx<<endl; 
return 0;
}

// 11. Pointer Arithmetic with Multiple Variables :

// Create three integer variables a, b, and c. Declare a pointer ptr and use pointer arithmetic to set it first to point to a, then to b, and finally to c. Print the values pointed to by the pointer. 
// doubt
# include <bits/stdc++.h>
using namespace std;
int main()
{
int a = 10;
int b = 20;
int c = 30;
cout<<&a<<endl;
cout<<&b<<endl;
cout<<&c<<endl;
int *ptr = &a;

cout<<*ptr<<endl;
--ptr;
cout<<*ptr<<endl;
--ptr;
cout<<*ptr<<endl;
--ptr;
return 0;
}



// 12. Pointer Arithmetic with Characters :

// Declare a character variable ch and a pointer ptr pointing to it. Increment the pointer by 1 and print the address and value of ch.
# include <bits/stdc++.h>
using namespace std;
int main()
{
char ch='u';
char *ptr=&ch;
cout<<(void *)ptr<<endl;
ptr++;
cout<<(void *)ptr<<" value :"<<ch;
return 0;
}

// 13.  Manipulating Pointer Value : 

// Declare a pointer ptr that points to an integer variable num. Set num to 10, then use pointer arithmetic to change num to 20 by incrementing the pointer and modifying the value it points to.
//  doubt


// 14.  Pointer Comparison :

// Declare two integer variables a and b. Create pointers ptr1 and ptr2 pointing to these variables. Compare the two pointers and print whether they are equal or not.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int a=10;
int b=20;
int *ptr1=&a;
int *ptr2=&b;
cout<<(ptr1==ptr2);
return 0;
}

// 15. Add and subtract using pointer arithmetic : 

// Write a program to demonstrate addition and subtraction on pointers.
// doubt