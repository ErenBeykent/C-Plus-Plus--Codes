#include <iostream>
using namespace std;
int main(){
for(;;){
	char tercih;
	cout << "Evet icin \"e\" hayir icin \"h\" tusuna basiniz " << endl;
	cin >> tercih;
	switch(tercih){
		
		case 'e': case 'E':
			cout << "Evet girdiniz";
			break;
		case 'h': case 'H':
			cout << "Hayir girdiniz";
			break;
		default:
			cout << "Hatali tusa bastiniz";
		
	}
	
}
}
