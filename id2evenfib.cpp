//id2evenfib.cpp
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
//find the sum of the even-valued terms.

#include <iostream>

int main(){

	int fibSum =2;
	int fib1 = 1;
	int fib2 = 2;
	int tempStore;

	while(fib2 < 4000000){
		tempStore = fib2;
		fib2 = fib1 + fib2;
		fib1 = tempStore;
		if(fib2 % 2 == 0) fibSum += fib2;
	}

	std::cout << "Even Fib sum is " << fibSum << std::endl;

	return 1;
}