#include <iostream>
using namespace std;
int main(){
	int x;
	cout << "Lutfen sayi giriniz." << endl;
	cin >> x;
	switch(x%2) // Bu de�ere kar��l�k gelen de�erler case in hemen yan�nda yer al�r.
	{
		case 0:
		cout << "cift sayi girdiniz \n";
		break; // Her Case de braeak olmal� yoksa switch yap�s�ndan ��kart�r.
		default:
		cout << "tek sayi girdiniz";	
	}
	
	
	
}
