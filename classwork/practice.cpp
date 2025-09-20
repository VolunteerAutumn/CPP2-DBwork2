#include <iostream>
using namespace std;

// PART 1
// TASK I
int main()
{	
	int number;
	cout << "Enter an integer >>> ";
	cin >> number;
	(number % 2 == 0) ? cout << number << " is even.\n" : cout << number << " is odd.\n";
}

// TASK II
int main()
{	
	int a, b;
	cout << "Enter two integers >>> ";
	cin >> a >> b;
	int min = (a < b) ? a : b;
	cout << "The smaller integer is " << min << endl;
}

// TASK III
int main()
{	
	int a;
	cout << "Enter a number >>> ";
	cin >> a;
	if (a > 0) {
		cout << "The number is larger than 0" << endl;
	}
	else if (a < 0) {
		cout << "The number is smaller than 0" << endl;
	}
	else {
		cout << "The number is equal to 0" << endl;
	}
}

// TASK IV
int main()
{	
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	if (a == b) {
		cout << "The numbers are equal." << endl;
	}
	else {
		int max = (a > b) ? a : b;
		int min = (a < b) ? a : b;
		cout << min << max << endl;
	}
}

// PART 2
// TASK I
int main()
{	
	int a, b, c, d, e;
	cout << "Enter 5 grades >>> ";
	cin >> a >> b >> c >> d >> e;
	if ((a + b + c + d + e) / 5 >= 4)
	{
		cout << "Student is allowed to take the exam." << endl;
	}
	else
	{
		cout << "Student is not allowed to take the exam." << endl;
	}
}


// TASK II
int main()
{	
	int n;
	cout << "Enter a number >>> ";
	cin >> n;
	int res{ 0 };
	if (n % 2 == 0) 
	{
		res = n * 3;
	}
	else {
		res = n / 2;
	}
	cout << "Result: " << res << endl;
}

//TASK III
int main()
{	
	int a, b;
	cout << "Enter two integers >>> ";
	cin >> a >> b;

	char op;
	cout << "Enter an operator (+, -, *, /) >>> ";
	cin >> op;
	switch (op) {
	case '+':
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	case '-':
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	case '*':
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	case '/':
		if (b != 0) {
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else {
			cout << "Error: Division by zero!" << endl;
		}
		break;
	default:
		cout << "Error: Invalid operator!" << endl;
		break;
	}
}
