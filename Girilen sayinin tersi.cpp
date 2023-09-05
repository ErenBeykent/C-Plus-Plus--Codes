#include <iostream>
using namespace std;
int main(){
	
	int sayi;
	cout << "Bir sayi giriniz.." << endl;
	cin >> sayi;
	while(sayi > 0 ) {
		
		cout << sayi%10;
		sayi=sayi / 10;
	}
	
}
