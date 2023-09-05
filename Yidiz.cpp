#include <iostream>
using namespace std;
int main(){
	
	int x;
	cout << "Yildizlar kaca kadar gitsin" << endl;
	cin >> x;
	for(int i=x;i>=0;i--){
		for(int j=1;j<=i;j++)
		cout<<"*";
		cout << endl;
	}
}
