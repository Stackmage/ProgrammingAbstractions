#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
	return (9.0/5*celsius)+32;
}

int main() {
	double celsius;

	cout << "Enter temperature in Celsius: ";
	cin >> celsius;

	double fahrenheit = celsiusToFahrenheit(celsius);
	cout << celsius << "°C is equal to " << fahrenheit << "°F" << endl;

	return 0;
}
