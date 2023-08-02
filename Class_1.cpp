// C++ - a programming language

// Compilers
// Computers understand only 0101010…. (machine or binary code)
// We write code in a programming language
// So, we need to use a compiler to translate our programming language code to the 010101.. (binary or machine code) form
// Compiler also checks for errors and tells you, if there is any error, along with the line number, in which the error is present

// Which compiler can we use?
// Geany IDE or CodeBlocks
// or Online IDEs
// https://csacademy.com/workspace/
// https://ideone.com/
// or Mobile App (Search on Playstore for C++ compiler)
// (Prefer mobile app, only when you can’t access a laptop or PC)
// For setting up compiler, view instructions at this link:
// Android App CxxDroid

// Structure of code in C++

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // You write your code here
//     return 0;
// }

// Meaning of these lines :
// (It’s completely okay, if you can’t understand the meaning much, you will understand those, after learning some basics concepts of the language)

// #include <bits/stdc++.h>
// // This line imports all the standard
// // necessary libraries

// using namespace std;
// // Just, an indication to the compiler, that we // will use the standard functions

// int main()
// // main() function is the entry point function of our program
// // Our program will start running from the main() function always
// // main() is a compulsory function() and required in every C++ program
// return 0;
// // We return 0 from main() function to indicate that our program ended error-free

// In C++, every statement should end with a semicolon (;)
// [Similar to full-stop (.) in English language or | in Hindi]
// In C++, capital letters (A,B,C) are different from small letters (a,b,c). (So, C++ is a case sensitive language)
// Output
// Output means to display something on the screen, in our program
// We use cout with << operator (Output operator or insertion operator)
// Eg. cout<<88;

// We use the term string for english sentences or words
// Suppose I want to print a string
// cout<<"Hello CodeISM";

// You can also combine multiple outputs using << (Output operator)
// Eg.     cout<<"Hello CodeISM "<<2024;

// You can also write something on the next line using '\n' (Newline character)
// Eg.
// cout<<'\n'<<"Welcome";

// We use {} (curly brackets or braces) for enclosing similar things in one group

// Caution: You can also use cout<<endl; to print on the next line but it is slow compared to ‘\n’ (It is slow because it flushes the buffer everytime it is used)
// Difference between ‘a’ and “a”
// Single inverted comma is always used for 1 single character. Eg. cout<<’a’;
// Double inverted comma is used for strings
// Eg. cout<<”Hello world”;
//    Variables

// Consider variables as a box, where some value is stored.
// Value of variable can be changed

// Syntax for declaring a variable:
//  <data-type> <name-of-variable> ;

// Eg. int temp;
// // Computer will give some memory to a box       // named “temp”

// For naming a variable, follow these rules:
// Variable name shouldn’t start with a number
// Variables should not contain space. Instead use underscore.
// int abc def; // error : Incorrect name of //variable
// Variables should not use any reserved name . Like int
// You can also give a value to a variable using =
// Eg.
// 1. int temp=8;
// 2. int temp;
// temp=8;
// // Computer will give some memory to a box      // named “temp” and give it a value 8.

// Program to add 2 numbers
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a=4;
//     int b=10;
//     int c=a+b;
//     cout<<c;
//     return 0;
// }

// Input

// For input, use cin and >> (Input operator or extraction operator)
// 	Eg. int num;
// 		cin >> num;
// Program using user-input to multiply 2 numbers

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int a,b,result;
// 	cout<<"Enter first number:";
// 	cin>>a;
// 	cout<<"Enter second number:";
// 	cin>>b;
// 	result=a*b;
// 	cout<<"Answer is: "<<result<<'\n';
//     return 0;
//  }

// Program to use multiple inputs in same line

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int a,b,result;
// 	cout<<"Enter 2 numbers:";
// 	cin>>a>>b;
// 	result=a*b;
// 	cout<<"Answer is: "<<'\n'<<result;
//     return 0;
// }

// Data Types

// int // integer
// Range of integer in C++ is -2^31 to +2^31
// (-2,147,483,648 to 2,147,483,647)
// long int // long integer
// Range increases
// long long int // long long integer
// Range is -10^(18) to +10^(18)

// Exact range of long long int
// (No need to remember this. Just remember approx range from above)
// -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

// float // for fractional / decimal values
// Eg. float pi=3.14159;
// // Float has less precision

// double // Also used for fractional/decimal values,has greater precision than ‘float’
// long double // Also used for fractional/decimal values, highest precision for decimal values
// string // for english words or sentences
// string str = “Hello everyone”;
// cout<<str;
// char // for single character
// Eg. char ch=’p’;
// cout<<ch;

// Program to print double of a decimal (fractional) number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	float abc;
// 	cin>>abc;
// 	cout<<abc*2;
//     return 0;
// }

// Program to print double of a decimal (fractional) number without user input
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	long double abc=23.2929;
// 	cout<<abc*2;
//     return 0;
// }

// Program to print a word taken from user

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string str;
// 	cin>>str;
// 	cout<<"str="<<str<<'\n';
//     return 0;
// }

// // Try giving “Hello world” as input in your screen with above program

//   Input Operator (>>) will stop at spaces (or any invisible character like Enter key)
// Program to print 2 words taken from user

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string str,str2;
// 	cin>>str>>str2;
// 	cout<<"words are "<<str<<" "<<str2<<'\n';
//     return 0;
// }

// Program to take 1 full line as input

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string str;
// 	getline(cin,str);
// 	cout<<"Full sentence is "<<str;
//     return 0;
// }

// Constants

// Just has a constant value. You will get an error if you try to change the value of a constant.
// Use const for declaring a constant
// Eg.
//    const int abc=0;
//    const float pi=3.14;

// #Functions in C++ -
// A function is a group of statements that together perform a task.
// A function may take some inputs (or arguments) and may or may not return a value.
// Like a sin(x) function may return a float value but a function which just prints something, may not return a value

// Syntax of function definition
// (Used when you need to create your own function)

// [return type] [function name] (inputs)
// {
// 	.
// .
// All the tasks you wanna perform;
// .
// .

// 	Finally return the value( If any );
// }
// Examples:-

// Function to return the sum of 2 integers
// 		int Add(int firstNum, int secondNum) {

// 			int sum = firstNum + secondNum;
// 			return sum;
// 		}

// Function to print the info of a student.

// void PrintInfo(string name,int age,double height)
// {
//     cout<<"My name is:"<<name<<endl;
//     cout<<"My age is:"<<age<<endl;
//     cout<<"My height is:"<<height<<"\n";
// }
// // Why return type of this function is void ?
// // Because this function doesn’t return anything. Simple

// When to use a void function?
// When your function performs a task but it doesn’t need to return a value (or when it doesn’t need a value to be used somewhere else)
// Like, you went to a cinema hall, watched a movie, but after returning, you didn’t bring anything from there. i.e. You performed a task but didn’t need to remember a value for later use
// Similarly, in C++, you may want to print something but not return a value, so you will use a void function in that case.
// Calling a function
// Once a function is defined (or created) as above, you can call the function inside any other function like the main() function, to execute it.
// While calling a function, you can simply pass the inputs (or arguments) to it using () (round brackets or parentheses).
// Examples:-

// 1. Calling the above Add() function to add 3 and 8 to print the answer on the screen

// int ans = Add(3,8);
// cout<<ans;

// 2. Calling the above PrintInfo() function to print some information

//  PrintInfo("Chirag", 18, 6.0);
// Complete code to print the info. using function

// #include <bits/stdc++.h>
// using namespace std;

// void PrintInfo(string name,int age,double height)
// {
// 	cout<<"My name is :"<<name<<endl;
// 	cout<<"My age is: "<<age<<endl;
// 	cout<<"My height is: "<<height<< "\n";
// }

// int main()
// {
// 	string name;
// 	int age;
// 	double height;
// 	cin>>name;
// 	cin>>age;
// 	cin>>height;

// 	PrintInfo(name,age,height); //Function Call

//     PrintInfo(“Chirag”, 18, 6.0);
//     //You may also call the function like this, It is hard-coded.

// 	return 0;
// }

// Homework Questions :
// Write a program to print the cube of a number (take user input)
// Write a program to take a temperature in degree Celsius and print the equivalent temperature in degree Fahrenheit.
// Write a program to take the radius of a circle as input and print the area and perimeter of the circle in different lines
// Write a program to take a First Name and Last Name of a user and print the full name. Also take college name (with spaces) as input and print it.
//     5. Implement your own subtraction, multiplication, and division functions which take two numbers as an input and return the answer after performing the given task.
//     6.  Write a program to swap the value of 2 variables.
// 	[ Hint: Maybe, using a third variable helps? ]
//     7. Write a program to swap the value of 2 variables without using any 3rd variable
//    8. Write a program using a function to swap the values of 2 variables using a function. The values swapped inside the function, should also be swapped outside that function.
// 9. Write a program to return the remainder when a number is divided by another (Take both numbers as input)

// Solution of Q.4
// #include <bits/stdc++.h>
// using namespace std;

// /*
// Write a program to take a First Name and Last Name of a user and print the full name.
// Also take college name (with spaces) as input and print it.
// */

// int main()
// {
// 	string fname;
// 	string lname;
// 	cout<<" Enter first name: ";
// 	cin>> fname;
// 	cout<<" Enter last name: ";
// 	cin>>lname;
// 	cout<<"Full name is : "<<fname<<" "<<lname<<'\n';
// 	string college;
// 	cout<<" Enter college name: ";
// 	getline(cin, college);
// 	getline(cin, college);	 // getline stops reading input when "Enter key" is pressed
// 	cout<<"College name is :"<<college;
// 	return 0;
// }

// 6.

// #include <bits/stdc++.h>
// using namespace std;

// /*
// Swap 2 variables.
// */

// int main()
// {
// 	// = operator moves RHS value to LHS
// 	int a=3;
// 	int b=5;
// 	int t;
// 	cout<<"Earlier values \n";
// 	cout<< a<< " "<< b;
// 	t = b;
// 	b = a;
// 	a = t;
// 	cout<<"Values now \n";
// 	cout<<a<<" "<<b;
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// /*
// Swap 2 variables without a third new variable.
// */

// int main()
// {
// 	// = operator moves RHS value to LHS
// 	int a=3;
// 	int b=5;
// 	cout<<a<<" "<<b<<'\n';
// 	a = a + b;
// 	b = a - b;
// 	a = a - b;
// 	cout<<a<<" "<<b<<'\n';

// 	return 0;
// }
