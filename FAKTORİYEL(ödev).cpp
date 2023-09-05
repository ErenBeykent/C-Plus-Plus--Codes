#include <iostream>
using namespace std;
int main(){
	int sayi;
	int faktoriyel=1;
	cout << "Sayiyi giriniz" << endl;
	cin >> sayi;
	while(sayi>=1){
		
		faktoriyel=faktoriyel*sayi;
		sayi--;
		
	}
	 cout << "Faktoriyel= " << faktoriyel << endl;
	 
	
	
	
	
}
