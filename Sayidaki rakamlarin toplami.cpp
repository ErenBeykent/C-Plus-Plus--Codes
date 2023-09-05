#include <iostream>
using namespace std;
int main(){
	
	int sayi=0;
	int rakam=0;
	int toplam=0;
	for(;;){
		
		cout << "Bir sayi giriniz.." << endl;
		cin >> sayi;
		while(sayi>0){
			
			rakam=sayi%10;
			cout <<rakam;
			toplam=toplam+rakam;
			sayi=sayi/10;
		}
		cout<<endl;
			cout << "Sayidaki rakamlarin toplami= " << toplam << endl;
	}
	
	
	
}
