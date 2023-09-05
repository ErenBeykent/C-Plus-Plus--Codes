#include <iostream>
using namespace std;
int main()
{
	cout<<"20 adet tam sayi giriniz(pozitif,negatif veya 0 olabilir)"<<endl;
	int x,i,j=0,t=0,y=0;
	for(i=1; i<=20; i++){
	cin>>x;
	if (x%2==0)
	j++;
	if(x%2==1)
	t++;
	if(x==0)
	y++;}
	cout<<"Su kadar adet cift sayi vardir: "<<j<<endl;
	cout<<"Su kadar adet tek sayi vardir: "<<t<<endl;
	cout<<"Su kadar adet sifir sayisi vardir: "<<y<<endl;
	
	system("pause");
	return 0;
	
	
	
	
	
	
	
	
	
	
}
