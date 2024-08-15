#include <string>
#include <iostream>

int main()
{
	int x = 342;
	int y = 828;
	std::string myString = std::to_string(x);
	std::string myString2 = std::to_string(y);
	std::cout << "myString is: " << myString << std::endl; //Returns "myString is: 342
	std::cout << "myString2 is: " << myString2 << std::endl; //Returns "myString2 is: 828
	
	myString = "This is how you ";
	myString2 = " concatenate strings!";

	std::cout << myString + myString2 << std::endl;
	
	return 0;
}