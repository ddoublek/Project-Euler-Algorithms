//id3largeprimefac
//What is the largest prime factor of the number 600851475143 

#include <iostream>
#include <cmath>

int primCheck (long long int currNum, int highPrime){
	long long int currChange = currNum;
	long long int currHigh = highPrime;
	long long int currLimit = (long long int)sqrt(currChange);

	//No need to update i cause highest Prime only get bigger
	//The highest prime for a number is always less than or equal to its square root
	for(long long int i = 2; i <= currLimit; i++){
		if(currChange % i == 0){
			currChange = currChange / i;
			currHigh = std::max(currHigh, i);
			currLimit = (long long int)sqrt(currChange);

		}
	}
	// Remember that currChange is also a prime number
	return std::max(currHigh, currChange); 
}

int main(){

	long long int maxPrime = primCheck(600851475143, 1);

	std::cout<< "Max prime is " << maxPrime << std::endl;

	return 1;
}