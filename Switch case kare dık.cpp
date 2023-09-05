#include <iostream>
using namespace std;
int main(){
	char tercih;
	int a,b;
	
	cout << "Lutfen dikdortgen icin \"d\" kare icin \"k\" tusuna basiniz " << endl;
	cin >> tercih;
	switch(tercih){
		
		case 'd':
			
			cout << "Dikdortgenin alanini hesaplamak icin iki deger giriniz." << endl;
			cin >> a>> b;
			cout << "Dikdortgenin alani= " << a*b << endl;
			break;
		case 'k': 
			cout << "Karenin alanini hesaplamak icin  deger giriniz." << endl;
			cin >>a;
			cout << "Karenin alani= " << a*a << endl;
			break;	
		
		
	}
	
}
