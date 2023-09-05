#include <iostream>
using namespace std;
int main(){
	
	int sayi=0;
	int rakam1,rakam2,rakam3,i;
	int toplam=0;
	for(i=100;i<1000;i++){
		sayi=i;
		rakam1=sayi%10;
		sayi=sayi/10;
		
		rakam2=sayi%10;
		sayi=sayi/10;
		
		rakam3=sayi%10;
		if(rakam1!=rakam2&&rakam1!=rakam3&&rakam2!=rakam3){
			cout<< i << endl;
		}
		
	}
	
	
}
