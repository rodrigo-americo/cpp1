#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;
    
	std::cout << "Endereço de brain: " << &brain << std::endl;
	std::cout << "Endereço em stringPTR: " << stringPTR << std::endl;
	std::cout << "Endereço de stringREF: " << &stringREF << std::endl;
	std::cout << "Valor de brain: " << brain << std::endl;
	std::cout << "Valor apontado por stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valor de stringREF: " << stringREF << std::endl;
}
