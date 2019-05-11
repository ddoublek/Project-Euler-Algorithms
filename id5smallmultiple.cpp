//id5smallmultiple
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//Number was bigger than I thought. Changed to unsigned int for possible bigger cases

#include <iostream>
#include <vector>

void diviseIncrease(int currMult, std::vector<unsigned int>& usedMultiple, unsigned int& diviseNum){
	unsigned int leftMultiple = currMult;
	for(unsigned int i = 0; i < usedMultiple.size(); i++){
		if(leftMultiple % usedMultiple[i] == 0){
			leftMultiple = leftMultiple / usedMultiple[i];
		}
	}
	usedMultiple.push_back(leftMultiple);
	diviseNum *= leftMultiple;
}


//Currently assumes divisible starting from 1
unsigned int findDivisible(unsigned int maxNum){
	std::vector<unsigned int> usedMultiple;
	unsigned int diviseNum = 1;
	for(unsigned int i = 2; i <= maxNum; i++){
		diviseIncrease(i, usedMultiple, diviseNum);
	}
	return diviseNum;
}

int main(){

	std::cout << "Smallest number divisible is: " << findDivisible(20) << std::endl;

	return 1;
}
