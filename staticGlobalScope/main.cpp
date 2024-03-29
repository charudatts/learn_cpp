#include <iostream>
#include "extern.h"

int globalVariable = 0;
static int fileVariable = 0;

int main(int argc, char* argv[])
{
        IncrementGlobalCounters();
        std::cout << globalVariable << std::endl;
	
	return 0;
}
