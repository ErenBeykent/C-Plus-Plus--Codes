#include <iostream>
using namespace std;
int main () {
    int sayi,temp;
	cout << "Lutfen bir sayi giriniz." << endl;
	cin >> sayi;
	cout << endl;
	
	temp=sayi;
	if(sayi<0)
	   sayi=-sayi;
	cout << "sayinin mutlak degeri " << sayi  << " sayi " << temp << endl;              
	
}
