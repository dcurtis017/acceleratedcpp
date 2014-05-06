#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{

	cout << "Please enter your first name: ";

	string name,sTopPad,sSidePad;
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	int pad = 1;
	const int topPad = 4;
	const int sidePad = 8;
	bool greetingRow = false;

	const int rows = topPad*2 + 3;
	int cols = greeting.size() + sidePad * 2 + 2;

	cout << endl;

	for (int r = 0; r != rows; ++r){
		greetingRow = (r == topPad+1);
		for(int c = 0; c != cols; ++ c){
			if(greetingRow && (c == sidePad+1)){
				cout << greeting;
				c+=greeting.size();
			}
			if((r == 0 || r == rows-1) || (c == 0 || c == cols-1)){
				cout << "*";
			}else{
				cout << " ";
			}
		}		
		cout << endl;
	}


	return 0;

}
