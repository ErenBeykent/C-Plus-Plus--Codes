#include <iostream>
using namespace std;
int main(){
	
	char tercih;
	cout << "e veya h giriniz" << endl;
	cin >> tercih;
	if(tercih == 'e' || tercih == 'E')
	   cout << "Evet girdiniz" << endl;
	else if(tercih =='h' || tercih == 'H')
	   cout << "Hayir girdiniz" << endl;
	else
	    cout << "Hatali harf girdiniz." << endl;
	
	
}
