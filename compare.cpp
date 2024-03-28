#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char *argv[])
{
    char *cStyleString1 = "CStyleString";
    char *cStyleString2 = "CStyleString";
    cout << strcmp(cStyleString1, cStyleString1) << endl;
    return 0;
}
