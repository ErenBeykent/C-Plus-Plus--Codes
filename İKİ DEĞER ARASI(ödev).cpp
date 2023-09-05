#include <iostream>
using namespace std;
int main(){
	
	int a,b,toplam=0;
	cout << "Once kucuk sonra buyuk sayiyi giriniz" << endl;
	cin >> a >> b;
	if(a%2==0){
	    while(a<b){
		toplam=toplam+a;
		cout << a << " " << endl;
		a=a+2;
		}
			}
	else{
		a=a+1;
		while(a<b){
			toplam=toplam+a;
		   a=a+2;
		
		
	}	
	cout << "Sayilarin toplami= " << toplam << endl;
}
	
	
}
