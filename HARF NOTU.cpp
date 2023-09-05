#include <iostream>
using namespace std;
int main(){
	
	int a;
	cout << "Lutfen notu giriniz. " << endl;
	cin >> a;
	if(a>=90)
	   cout << "Notun A'dir." << endl;
	else if(a>=80)   
	   cout << "Notun B'dir." << endl;
	else if(a>=70)   
	   cout << "Notun C'dir." << endl;  
	else if(a>=60)   
	   cout << "Notun D'dir." << endl;
	else
	   cout << "Notun F'dir." << endl;   
}
