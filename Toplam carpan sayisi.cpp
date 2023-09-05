#include <iostream>
using namespace std;
int main(){
	
	int n,sayac=0;
	cout << "Lutfen bir sayi giriniz.." << endl;
	cin >>n;
	for(int i=1 ; i<=n ; i++)
		   if(n%i==0){
		   	sayac++;
		   	cout << i << "*" << endl;
		   	}
	cout << endl;
	cout << "Toplam carpan sayisi= " << sayac << endl;
}
