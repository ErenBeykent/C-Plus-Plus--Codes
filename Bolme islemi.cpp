#include <iostream>
using namespace std;
int main(){
	
	int x,y,kalan,i,sonuc=0;
	cout << "Bolme icin sayilari girin once bolunen sonra bolen\n";
	cin>>x>>y;
	kalan=x;
	for(i=kalan;i>=y;i=i-y){
		sonuc=sonuc+1;
		
	}
	cout <<x<< " / " << y << " = " << sonuc << endl;
}
