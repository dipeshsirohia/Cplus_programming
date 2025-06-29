// 1. Reverse a Number Using a Pointer :

// Task: Reverse the digits of a number using a pointer.
// Input: int num = 12345;
// Output: Reversed number: 54321 

# include <bits/stdc++.h>
using namespace std;
int reverse(int *ptr){
	int temp=*ptr;
   while(temp!=0)
}
int main()
{
int a=12345;
reverse(&a);
return 0;
}



// 2. Sum of Digits Using a Pointer :

// Task: Calculate the sum of digits of a number by passing the number to a function via a pointer.

// Input: int num = 456;
// Output: Sum of digits: 15


// 3. Square of a Number Using Pointers :

// Task: Write a function that calculates the square of a number using a pointer.

// Input: int num = 7;
// Output: Square: 49


// 4. Pointer Swap Without Using Temporary Variables :

// Task: Swap the values of two variables using pointers, but without using a third temporary variable.

// Input: int a = 5, b = 10;
// Output: a = 10, b = 5


// 5. Pointer and Bitwise Operations :

// Task: Perform bitwise AND, OR, and XOR operations on two variables using pointers.

// Input: int a = 5, b = 3;
// Output: Bitwise AND: 1  
// 	Bitwise OR: 7  
// 	Bitwise XOR: 6


// 6. Pointer to Functions :

// Task: Implement a pointer to a function that calculates the cube of a number and calls it through the pointer.

// Input: int num = 3;
// Output: Cube: 27


// 7. Find Maximum and Minimum Using Pointers :

// Task: Write a program to find the maximum and minimum of two numbers using pointers.

// Input: int a = 12, b = 25;
// Output: Maximum: 25, Minimum: 12


// 8. Dynamic Memory Management Challenge :

// Task: Dynamically allocate memory for an integer, modify its value multiple times, and print the memory content at each stage.

// Input/Output: Allocated memory: 100  
// 	      Modified value: 200  
//               Modified value: 300


// 9. Recursive Function with Pointers :

// Task: Use a pointer in a recursive function to calculate the factorial of a number.

// Input: int num = 5;
// Output: Factorial: 120


// 10. Pointer and Sizeof Operator :

// Task: Write a program to print the size of different data types using pointers and compare the sizes.

// Output:	Size of int: 4 bytes  
// 	Size of char: 1 byte  
// 	Size of float: 4 bytes  
// 	Size of double: 8 bytes