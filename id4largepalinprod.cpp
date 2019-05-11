//id4largepalinprod
//Find the largest palindrome made from the product of two 3-digit numbers.
//Currently doing Naive way but most likely will be computationally intense

#include <string>
#include <algorithm>
#include <iostream>

bool checkPalindrome(unsigned int checkNum, unsigned int currMax){
	if(checkNum <= currMax) return false;
	std::string numString, reverString;
	numString = reverString = std::to_string(checkNum);
	std::reverse(reverString.begin(), reverString.end());
	if(numString == reverString) return true;
	return false;
}

unsigned int naivePaindromeFinder(){
	unsigned int maxPali = 0;
	for(unsigned int i = 100; i < 1000; i++){
		for(unsigned int j = i; j < 1000; j++){
			if(checkPalindrome(i * j, maxPali)){
				maxPali = i * j;
			}
		}
	}
	return maxPali;
}


int main(){

	std::cout << " Largest Palindrome made is: " << naivePaindromeFinder() << std::endl;

	return 1;
}