#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	cout << "Please enter your first name: ";
	string user_name;
	cin >> user_name;
	cout << '\n'
		<< "Hello, "
		<< user_name
		<< " ... and  goodbye!\n";

	getchar();
	return 0; 
}