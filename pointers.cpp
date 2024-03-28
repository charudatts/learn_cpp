#include <iostream>

using namespace std;

int main()
{
	int variable = 5;
	int* variablePointer = &variable;

	cout<<"Value of variable: "<<variable<<endl;
	
	cout<<"Address of variable: "<<&variable<<endl;

	cout<<"Value of variablePointer: "<<variablePointer<<endl;
	
	cout << "Value of variablePointer + 1: "
                << variablePointer + 1 << endl;
        cout << "Value of memory at dereferenced variablePointer: "
                << *variablePointer << endl;
        cout << "Value of memory at dereferenced variablePointer + 1: "
                << *variablePointer + 1 << endl;

	return 0;
}
