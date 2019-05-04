//Multiples of 3 and 5
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

int findMul(int num){
	int theSum = 0;
	for(int i = num; i < 1000; i+= num){
		theSum += i;
	}
	return theSum;
}

int mult35(){
	return findMul(3) + findMul(5) - findMul(15);
}

int main(){
	std::cout << "Answer to Multiple 3 5 is: " << mult35() << std::endl;
}