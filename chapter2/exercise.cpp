#include <iostream>
#include <string>


int main(){


	std::cout << "Please enter your first name: ";


	std::string name;
	std::cin >> name

	const std::string greeting = "Hello, "+ name + "!";

	//number of blank rows between top or bottom row and greeting
	const int pad = 1;
	//rows is pad * 2 + 1 bottom row + 1 top row + the greeting row
	const int rows = pad*2+3;

	const std::string;;size_type cols = greeting.size() + pad*2 +2;
	std::string::size_type c = 0;	

	std::cout << std::endl;
	
	//write rwos rows of output
	int r = 0;
	
	//invariant: we have written r rows so far
	//ex: after the first iteration of the loop we will have written 1 row (the value of r that is about the be tested
	while (r != rows){
		std::cout << std::endl;
		++r;
		//invariant: we have written c characters so far in the current row
		while (c != cols){
			//writes one or more characters
			if(r == 0 || r == rows-1 || c == 0 || c== cols-1){
				std::cout <<  "*";
			}else{
				//write one or more non border chars
				if (r == pad+1 && c == pad+1){
					std::cout << greeting;
					c+=greeting.size();
				}else{
					std::cout << " ";
					//++c;
				}
			}

		}
	}

	return 0;

}
