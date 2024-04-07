#include <iostream>

using namespace std;

int main()
{
    std::cout<<"Hello World\n";
    
    int age {25};         // Since C++11
    std::cout << age << endl;
    
    int a = 5, b = 10;
    cout << "Before Swap: " << "a=" << a << ", b=" << b << endl;
    //std::swap(a, b);
    swap(a, b);
    
    // Outputs: a=10, b=5
    cout << "After Swap: " << "a=" << a << ", b=" << b;

    return 0;
}
