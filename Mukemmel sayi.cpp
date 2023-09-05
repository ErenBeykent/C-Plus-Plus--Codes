#include <iostream>
using namespace std;
int main(){
	
	int sayi,i,toplam=0;
	cout << "Bir sayi giriniz.." << endl;
	cin >> sayi;
	for(i=1; i<sayi;i++){
		if(sayi%i==0){
		        cout << "Carpanlarindan biri= " << i << endl;
				toplam +=i;}
			}
			if(toplam==sayi) cout << "Mukemmel sayidir.." << endl;
			else{
				cout << "Yukardaki carpanlarin toplami goruldugu gibi= " << toplam << " 'dir " << endl;
				cout << "Bu yuzden mukemmel sayi degildir" << endl;
	}
}
