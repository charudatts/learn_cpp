// Compile : clang++ -std=c++20 -o ../.output/static_global_scope  main.cpp extern.cpp 
// Run : ../.output/static_global_scope 

#include "extern.h"

void IncrementGlobalCounters()
{
        extern int globalVariable;
        ++globalVariable;

        // Error - will not compile as fileVariable is not global!
        //extern int fileVariable;
        //++fileVariable;
}
