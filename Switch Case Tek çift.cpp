#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "Lutfen sayi giriniz." << endl;
	cin >> x;
	switch(x%2) // Bu deðere karþýlýk gelen deðerler case in hemen yanýnda yer alýr.
	{
		case 0:
		cout << "cift sayi girdiniz \n";
		break; // Her Case de braeak olmalý yoksa switch yapýsýndan çýkartýr.
		default:
		cout << "tek sayi girdiniz";	
	}
	
	
	
}
