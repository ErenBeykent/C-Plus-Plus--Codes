#include <iostream>
using namespace std;
int main()
{
	double toplam=0;
	cout<<"Iki adet sayi giriniz (once kucuk sonra buyuk giriniz): ";
	int i,x,y,t,temp;
	cin>>x>>y;
	if(x>y)
			 	{ temp=x; // bu kontrol yapýsý sartli olan degiskenlerin yerlerini degistirir.
			 	x=y;
			 	y=temp;}
	for (i=x; i<=y; i++) {
		
		if (i%2==0)
		toplam=toplam+i;}
	
	
		cout<<x<< " ve " <<y<< " araligindaki cift sayilarin toplami= "<<toplam<<endl;
		
		system("pause");
		return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
