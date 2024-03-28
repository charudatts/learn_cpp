#include <iostream>

using namespace std;

void StaticLocalVariable()
{ 
	static int x = 0;
	std::cout << x++ << std::endl;
}

int main()
{
	bool isTrue = true;
	int x = 0;

	while(isTrue)
	{
		x++;
		if(x==5)
		   isTrue = false;
		StaticLocalVariable();
	}
	return 0;
}
