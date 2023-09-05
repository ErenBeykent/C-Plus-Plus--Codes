#include <iostream>
using namespace std;
int main(){
	
	double us,taban;
	cout << "Sayinin ussunu giriniz= " << endl;
	cin >> us;
	cout << "Tabani giriniz= " << endl;
	cin >> taban;
	int b=taban;
	int a=1;
	while(a<us){
		
		b= taban*b;
		a++;
	}
	cout << "Sonuc: " << b << endl;
}
