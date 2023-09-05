#include <iostream>
using namespace std;
int main(){
	
	double toplam=0;
	int i,x,y,j=0;
	cout << "Lutfen iki adet tam sayi giriniz,once kucuk sonra buyuk" << endl;
	cin >> x >> y;
	i=x;
	while(i<=y){
		
		if(i%2==0){
			toplam=toplam+i;
		j++;
		} 
			i=i+1;	
		
	}
	cout << x << " ve " <<y<<" araligindaki cift sayilarin ortalamasi= " <<(float)toplam/j<<endl; 
	
}
