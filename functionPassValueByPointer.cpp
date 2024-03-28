#include <iostream>

using namespace std;

void PrintSum(int a, int b, int* sum)
{
    *sum = a+b;
}

int main()
{
    int sum = 0;
    PrintSum(10,20, &sum);
    cout<<sum<<endl;

    return 0;
}