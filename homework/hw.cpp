#include <iostream>
using namespace std;

//PART I
//task 1
int main()
{
	int n;
	cout << "Enter the 6-digit number >>> ";
	cin >> n;

	int ftd{ 0 };
	int ltd{ 0 };
	int currint = 0;
	// last three
	currint = n % 10;
	ltd = ltd + currint;
	currint = n / 10 % 10;
	ltd = ltd + currint;\
	currint = n / 100 % 10;
	ltd = ltd + currint;
	// first three
	currint = n / 1000 % 10;
	ftd = ftd + currint;
	currint = n / 10000 % 10;
	ftd = ftd + currint;
	currint = n / 100000 % 10;
	ftd = ftd + currint;
	if (ftd == ltd) {
		cout << "Number " << n << " is lucky";
	}
	else {
		cout << "Number " << n << " Isn't lucky.";
	}
}

//task 2
int main()
{
	int n;
	cout << "Enter the 4-digit number >>> ";
	cin >> n;
	if (1000 < n < 9999) {
		int a, b, c, d;
		a = n / 1000;
		b = n / 100 % 10;
		c = n / 10 % 10;
		d = n % 10;

		int res = (b * 1000) + (a * 100) + (d * 10) + c;
		cout << "Result: " << res << endl;
	}
	else {
		cout << "Error: not a 4-digit number!" << endl;
	}
}

//task 3
int main()
{
	int a, b, c, d, e, f, g;
	cout << "Enter the 7 integers >>> ";
	cin >> a >> b >> c >> d >> e >> f >> g;
	int maxnum = max({ a, b, c, d, e, f, g });
	cout << "The biggest of the seven is " << maxnum << "!" << endl;
}

//task 4
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	// initializing variables
	int AB;
	int BC;
	int weight;
	int loss;
	int limit{ 300 };
	// asking for data
	cout << "Hello! I will help you out with calculating whether you can make out the flight." << endl;
	cout << "First, what is the distance between point A and B (in km)? >>> ";
	cin >> AB;
	cout << "Second, what is the distance between point B and point C (in km)? >>> ";
	cin >> BC;
	cout << "And how much does the baggage weight (kg, max 2000) ? >>> ";
	cin >> weight;
	// weightcheck
	if (weight > 2000) {
		cout << "The plane can't carry that much weight. The flight is impossible." << endl;
		exit(EXIT_SUCCESS);
	}
	// calculating loss
	if (weight < 500) {
		loss = 1;
	}
	else if (500 < weight < 1000) {
		loss = 4;
	}
	else if (1000 < weight < 1500) {
		loss = 7;
	}
	else if (weight > 1500) {
		loss = 9;
	}
	
}
