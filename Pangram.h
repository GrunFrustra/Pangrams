#include <iostream>
class Pangram {
public:
	Pangram();
	Pangram(std::string);

	bool isPangram();
	void printCount();

private:
	int pangramCount[26];

};