#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool strToBool (string input) {
	bool output;

	if (input == "true") {
		output = true;
	}
	else if (input == "false") {
		output = false;
	}
	else {
		output = false;
	}

	return output;
}

int main() {
	string name;
	int age;
	char gender;
	string adress;
	string marriedIn;
	float height;

	cout << "What is your name?" << endl;
	getline(cin, name);

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "What is your gender? (m/f)" << endl;
	cin >> gender;

	cout << "What is your adress?" << endl;
	cin.ignore(1000, '\n');
	getline(cin, adress);
	
	cout << "Are you married? (true/false)" << endl;
	cin >> marriedIn;
	bool married = strToBool(marriedIn);

	cout << "How tall are you in meters?" << endl;
	cin >> height;

	cout << boolalpha;
	cout 
		<< "name: "    << name    << "\n" 
		<< "age: "     << age     << "\n" 
		<< "gender: "  << gender  << "\n" 
		<< "adress: "  << adress  << "\n"
		<< "married: " << married << "\n" 
		<< "height: "  << height  << " m"
		<< endl;

	return 0;
}

