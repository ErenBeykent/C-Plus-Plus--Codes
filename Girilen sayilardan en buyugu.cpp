#include <iostream>
using namespace std;
int main(){
	
	double num,max;
	int i;
	cout << "10 adet sayi giriniz" << endl;
	cin >> num;
	max=num;
	for(i=0;i<10;i++){
		cin >> num;
		if(num>max) max=num;
	}
	cout << "Girilen sayilarin icerisinde en buyuk olan= " << max << endl;
	
	
}
