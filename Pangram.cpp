#include <algorithm>
#include "Pangram.h"
#pragma warning(disable:4351)

Pangram::Pangram() :
pangramCount(){
}

Pangram::Pangram(std::string str) :
pangramCount(){
	for (size_t i = 0; i < str.size(); i++){
		char c = tolower(str[i]);
		int letterCount = abs('a' - c);
		if (letterCount >= 0 && letterCount < 26){
			pangramCount[letterCount]++;
		}
	}
}

bool Pangram::isPangram(){
	for (int i = 0; i < 26; i++){
		if (pangramCount[i] == 0)
			return false;
	}
	return true;
}

void Pangram::printCount(){
	char c = 'a';
	for (int i = 0; i < 26; i++){
		std::cout << c << " : " << pangramCount[i] << " , ";
		c++;
	}
	std::cout << std::endl;
}