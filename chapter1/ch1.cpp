#include <iostream>
#include <string>


int main()
{
	const std::string hello = "Hello";
	const std::string messages = hello+", world"+"!";
	//works because the compiler sees (1+2)+3) => (string+char)+char => string +char

	std::cout << hello << std::endl;
	std::cout << messages << std::endl;

	const std::string exclam = "!";
	//won't work because the compiler sees ((char[]+char[])+string) and there is no addition for arrays or pointers. 
	//const std::string message = "Hello"+", world"+exclam;
	const std::string message = "Hello" ", world" + exclam;

	std::cout << exclam << std::endl;	
	std::cout << message << std::endl;
}
