// 1.  Basic Pointer to Pointer :
 
// Declare an integer variable x, a pointer ptr1 pointing to x, and a pointer ptr2 pointing to ptr1. Modify the value of x using ptr2 and print the result.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int x=10;
int *ptr1 = &x;
int **ptr2 = &ptr1;
cout<<**ptr2<<endl;
**ptr2=20;
cout<<x<<endl;
return 0;
}

// 2. Pointer to Pointer to Pointer :

// Declare an integer variable a, a pointer ptr1 pointing to a, a pointer-to-pointer ptr2 pointing to ptr1, and a pointer-to-pointer-to-pointer ptr3 pointing to ptr2. Use ptr3 to modify the value of a and print the value of a.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int a=10;
int *ptr1=&a;
int **ptr2 = &ptr1;
int ***ptr3 = &ptr2;
***ptr3=100;
cout<<a;
return 0;
}

// 3. What is new and delete operator? Explain with Example.
// The new operator in C++ is used for dynamic memory allocation. It requests memory from the free store (also known as the heap) at runtime for a variable or an object. 
// The delete operator in C++ is used to deallocate memory that was previously allocated dynamically using the new operator. Its primary purpose is to release memory back to the system, preventing memory leaks and ensuring efficient memory usage. 
// 4. Memory Leak, NULL and nullptr with Example.
// memory leak is a situation where the memory allocated for a particular task remains allocated even after it is no longer needed. This leads to the wastage of memory because it is unavailable for other tasks till the end of the program.
// Null : null make s value 0 as well ptr 0 but nullPtr only makes ptr 0
// 5. Pass by Value :

// Definition: In pass by value, a copy of the argument's value is passed to the function. Any changes made to the parameter inside the function do not affect the original variable.

// Explain With Example.

# include <bits/stdc++.h>
using namespace std;
void func(int num){
    num=12;
    
}
int main()
{
int a=10;
func(a);
cout<<a;
return 0;
}


// 6. Pass by Reference :

// Definition: In pass by reference, a reference to the original variable is passed to the function. Any changes made to the parameter inside the function will directly affect the original variable.

// Explain With Example.
# include <bits/stdc++.h>
using namespace std;
void func(int &num){
    num=12;
    
}
int main()
{
int a=10;
func(a);
cout<<a;
return 0;
}

// 7. Pass by Address (Using Pointer) : 

// Definition: In pass by address, the address (or pointer) of the variable is passed to the function. The function can use this pointer to modify the original value of the variable. This approach allows functions to modify the original variable even though the function parameter is not a reference.

// Explain With Example.
# include <bits/stdc++.h>
using namespace std;
void func(int *ptr){
    *ptr=12;
    
}
int main()
{
int a=10;
func(&a);
cout<<a;
return 0;
}
// 8. Swapping with Pass by Reference :

// In pass by reference, we pass the reference of the variables to the function, so any changes made to the parameters inside the function will affect the original variables.
# include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
int a=10;
int b=12;
swap(a,b);
cout<<a<<" "<<b;
return 0;
}

// 9. Swapping with Pass by Address (Pointer) :
// In pass by address, we pass the address (pointer) of the variables to the function. Using the dereference operator (*), the function can modify the actual values at those addresses.

# include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
int a=10;
int b=12;
swap(&a,&b);
cout<<a<<" "<<b;
return 0;
}
// 10. Compare Pass by Value, Reference, and Address :

// Task: Compare the behavior of pass by value, reference, and address with a simple modification of an integer. Show how each method changes or doesn’t change the original value.

// Input: int a = 5, b = 10;
// Output: "Pass by Value: a = 5, b = 10", "Pass by Reference: a = 15, b = 10", "Pass by Address: a = 25, b = 10"
// pass by value
# include <bits/stdc++.h>
using namespace std;
void passByValue(int a,int b){
    a=a*10;
    b=b*10;
}
void passByReference(int &a,int &b){
    a=a*10;
    b=b*10;
}
void passByAddress(int *a,int *b){
    *a=*a*10;
    *b=*b*10;
}
int main()
{
int a=5;
int b=10;
// passByValue(a,b);
// passByReference(a,b);
passByAddress(&a,&b);
cout<<a<<"  "<<b;

return 0;
}