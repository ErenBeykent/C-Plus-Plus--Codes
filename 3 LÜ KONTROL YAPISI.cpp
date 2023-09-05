#include <iostream>
using namespace std;
int main(){
	int age;
	cout << "Lutfen yasi giriniz." << endl;
	cin>>age;
	age > 18 ? cout << "Oy kullanabilir" << endl: cout << "Oy kullanamaz.";
}
