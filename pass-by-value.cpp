#include <iostream>
using namespace std;

int changeX(int x){
	x = 2*x;
	cout<<"x = " << x << endl;
return x;
}

int main(){
	int x =5;
	changeX(x);
	cout<< x<<endl;
	return 0;
	
}
