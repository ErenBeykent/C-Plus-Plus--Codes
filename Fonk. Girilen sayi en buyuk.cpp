#include <iostream>
using namespace std;
double larger(double x , double y);
int main(){
	
	double num,max;
	int i;
	cout << "10 adet sayi giriniz.." << endl;
	cin >> num;
	max=num;
	for(i=1;i<10;i++){
		cin >> num;
		max=larger(max,num);
	}
	cout << "Girilen degerlerin en buyugu= " << max << endl;
	}
	double larger(double x , double y){
		if(x>=y) return x;
		else return y;
		
	}
