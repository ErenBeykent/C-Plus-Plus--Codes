#include <iostream>
using namespace std;
int main()
{
	
	int x,i=0,y=0,t=0,j=0;
	cout<<"20 adet sayi giriniz (pozitif, negatif veya 0 olabilir: )"<<endl;
	while (i<20)
	{
	i++;	
	cin >>x;
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
