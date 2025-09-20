#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int textColor, backgroundColor;
	cout << "Enter text color (0-9) >>> ";
	cin >> textColor;
	cout << "Enter background color (0-9) >>> ";
	cin >> backgroundColor;
	system(("color " + to_string(backgroundColor) + to_string(textColor)).c_str());
}

// ________

int main()
{	
	int going_on = 1;
	int num;
	cout << "Enter a number >>> ";
	cin >> num;
	while (going_on == 1) {
		cout << "I can raise the number you enterinto a power from 0 to 7 included!" << endl;
		int power;
		cout << "Enter the power (0-7) >>> ";
		cin >> power;
		if (power < 0 || power > 7) {
			cout << "Power must be between 0 and 7!" << endl;
		}
		else {
			int result = 1;
			for (int i = 0; i < power; i++) {
				result *= num;
			}
			cout << num << " raised to the power of " << power << " is " << result << endl;
		}
		cout << "Do you want to go again? (1 for yes, 0 for no) >>> ";
		cin >> going_on;
		if (going_on == 0) {
			cout << "Farewell!" << endl;
		}
	}
}
