#include <iostream>
using namespace::std;

int main() {
	int maxRows = 10;
	int currentRow = 0;

	cout << "How tall is the christmas Tree ? : ";
	cin >> maxRows; // save the value

	// print line numbers 
	
	while (currentRow < maxRows){
		//cout << currentRow << endl;
		cout <<endl;	
		//spaces
		int spaces = maxRows - currentRow; // Displacement of spaces are relational to the increments 
		while (spaces > 0){
			cout << " ";
			spaces--;
		}
		// stars
		for(int stars = currentRow * 2 + 1; stars > 0; stars --){ //  Rule
			cout << "*";
		}
		currentRow++;
	}
	cout << endl; // line break prior to termination
	return 0; // end of program
}
