//id6sumsqarediff
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <math.h>
/*
	Takes sigma sum from 1 ~ last num
	Uses formula SigmaSum(1~n) = n(n+ 1)/2
*/
unsigned int sumTil(int lastNum){
	return (lastNum * (lastNum + 1))/2;
}

/*
	Takes sigma square sum from 1 ~ lastNum (1^2 + ... + lastNum^2)
	Uses formula n(n+1)(2n + 1)/6
*/
unsigned int squareSumTil(int lastNum){
	return (lastNum * (lastNum + 1) * (2 * lastNum + 1))/6;
}

unsigned int sumSquareDiff(int lastNum){
	return pow(sumTil(lastNum), 2) - squareSumTil(lastNum);
}

int main(){

	std::cout << "Sum Square difference of first ten natural numbers is : " << sumSquareDiff(10) << std::endl;

	std::cout << "Sum Square difference of first 100 natural numbers is : " << sumSquareDiff(100) << std::endl;

	return 0;
}