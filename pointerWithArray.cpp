#include <iostream>

using namespace std;

int main()
{
	int intArray[5] ={0,1,2,3,4};
	cout<<"Value : "<<*intArray<<endl;	

	cout<<"Value : "<<(*intArray+1)<<endl;
	
	cout<<"Value : "<<(*intArray+2)<<endl;

	cout<<"Value : "<<(*intArray+3)<<endl;

	cout<<"Value : "<<(*intArray+4)<<endl;

	char* cStyleString = "CStyleString";
	cout << cStyleString << endl;	

	cout << *cStyleString << endl;
	
	cout << &cStyleString << endl;
	
	return 0;
}
