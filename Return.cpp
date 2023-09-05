#include <iostream>
using namespace std;
int FuncRet1();
int FuncRet2(int z);
int main()
{
	int num=4;
	cout << "FuncRet1 den returnlu hali= " << FuncRet1() << endl;
	cout << "FuncRet2 den returnlu hali= " << FuncRet2(num) << endl;
	return 0;
}
int FuncRet1(){
	int x=45;
	return 23,x;
	}
int FuncRet2(int z){
	int a =2 ; int b=3;
	return 2 * a + b , z+b;
}
