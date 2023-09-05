#include <iostream>
using namespace std;
int main(){
	int toplam=0,num;
    cout << "Bu program pozitif sayilarin toplamini bulur" << endl;
	cout << "toplam icin pozitif bir sayi giriniz,cikmak icin negatif bir sayi giriniz" << endl;
	cin >> num;
	while(cin){
		if(num<0){
			cout << "Negatif bir sayi girdiniz" << endl;
			cout << "Toplam= " << toplam << endl;
			cout << "toplam icin pozitif bir sayi giriniz,cikmak icin negatif bir sayi giriniz" << endl;
        	cin >> num;
			continue;
			}
		else{
			toplam=toplam+num;
			cout << "toplam icin pozitif bir sayi giriniz,cikmak icin negatif bir sayi giriniz" << endl;
	        cin >> num;
		}	
	}
	cout << "Toplam= " << toplam << endl;
	
	
}
