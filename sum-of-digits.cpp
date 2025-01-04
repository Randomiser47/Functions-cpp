#include <iostream>
using namespace std;

int sumOfDigits (int num){

int digit_sum=0;
	while( num > 0){
		int rem=num%10;
		digit_sum +=rem;
		num /=10;
		
	}
	return digit_sum;
}

int main(){

	cout<< "sum = "<<sumOfDigits(123)<<endl;
	return 0;
}
