#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	string name;
	cout<<"What is my name?"<<endl;
	cin>>name;
	cout<< "You said your name is: "<<name<<endl;

	char charNum = 1;
	int intNum =charNum;
	float floatNum = intNum;
	cout<<charNum<<","<<intNum<<","<<floatNum<<endl;	
	
	int largeNum=64;
	char smallNum = largeNum;
	char smallNum1= static_cast<char>(largeNum);
	cout<<smallNum<<","<<smallNum1<<endl;
 	
	return 0;
}

enum class color
{
Red,
Green,
Blue
};
