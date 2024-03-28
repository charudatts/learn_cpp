#include <iostream>

using namespace std;

struct SumParams
{
    int valueA;
    int valueB;
    int Result;
};

enum class Colors {
    Red,
    Green,
    Blue
};

// Define a structure called 'Person' to represent a person's information
struct Person {
    string name;
    int age;
    double height;

    // Constructor using member initialization
    Person(string n, int a, double h) : name{n}, age{a}, height{h} {}
     Person(string n, int a, double h) : name(n), age(a), height(h) {}
};

void PrintSum(int a, int b, int &sum)
{
    sum = a + b;
}

void PrintSum(SumParams &val)
{
    val.Result = val.valueA + val.valueB;
}

class Player
{
private:
    std::string m_name;

public:
    Player(const std::string &name)
        : m_name(name)
    {
    }
    void SetName(const std::string &name)
    {
        m_name = name;
    }

    bool SetName(const std::string &name, bool t)
    {
        std::string output(m_name);
        m_name = name;
    }

    const std::string &GetName() const
    {
        return m_name;
    }
};

int main()
{
    int sum = 0;
    PrintSum(10, 20, sum);
    cout << sum << endl;
    
    Colors color = Colors::Red; // Accessing enumeration constant Red

     // Declare a variable of type 'Person' using uniform initialization
    Person person1{"John", 30, 6.0};


    SumParams sumParasms;
    sumParasms.valueA = 1;
    sumParasms.valueB = 2;
    sumParasms.Result = 0;
    PrintSum(sumParasms);
    cout << sumParasms.Result << endl;

    return 0;
}