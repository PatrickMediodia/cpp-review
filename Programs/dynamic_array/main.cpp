#include <iostream>
#include <vector>

#include "DynamicArray.h"

int main() {
	Evaluation::DynamicArray da(1);

	std::vector<int>& vecRef = da.getDynamicArray(); 		

	std::cout << vecRef[0];
			
	return 0;
}
