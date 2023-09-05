#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string firstname,lastname;
	int age;
	double weight;
	cout << "Ismi,soyismi,yasi gir" << " ve kiloyu bosluk birakarak gir."  << endl;
	cin >> firstname >> lastname;
	cin >> age >> weight;
	cout << "name: " << firstname << " "
		 << lastname <<endl;
	cout << "age: " << age <<endl;
	cout << "weight: " << weight << endl;
	return 0;
		 
	
	
	
}
