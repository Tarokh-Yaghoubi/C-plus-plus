// reading an unknown number of inputs in C++ programming 

/*

	Author : Tarokh Yaghoubi
	Date : 6/16/2023

*/

#include <iostream>

int main()
{
	int sum = 0;
	int value = 0;

	// Read until the <	EOF >

	while (std::cin >> value)
		sum += value;
	
	std::cout << "The sum is : " << sum << std::endl;

	return 0;
}
