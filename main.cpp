#include <iostream>
#include <algorithm>
#include <string>
#include "Pangram.h"

int main(int argc, char * argv[]){
	int numOfEntries = atoi(argv[1]);
	for (int i = 0; i < numOfEntries; i++){
		std::cout << "Enter string: ";
		std::string entry;
		std::getline(std::cin, entry);
		Pangram p(entry);

		if (p.isPangram()){
			std::cout << "This is a pangram" << std::endl;
		}
		else{
			std::cout << "This is not a pangram" << std::endl;
		}
		p.printCount();
	}
	std::cin.get();
	return 0;
}