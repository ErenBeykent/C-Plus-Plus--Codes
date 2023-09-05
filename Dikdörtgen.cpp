#include <iostream>
#include <string>
using namespace std;
int main(){
	int uzunkenar,kisakenar,alan,cevre;
	cout <<"Dikdortgenin uzun kenarini giriniz " << endl;
	cin >> uzunkenar; 
	
	cout <<"Dikdortgenin kisa kenarini giriniz " << endl;
	cin >> kisakenar;
	
	alan=uzunkenar*kisakenar;
	cout << "Dikdortgenin alani= " << alan << endl;
	
	cevre=uzunkenar+uzunkenar+kisakenar+kisakenar;
	cout << "Dikdortgenin cevresi= " << cevre << endl;
        system("pause");
	
	
	
	
}
