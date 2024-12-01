#include <iostream>

using namespace std;

int main(){
    int a = 5, b = 10;
    cout << "Before Swap: " << "a=" << a << ", b=" << b << endl;
    //std::swap(a, b);
    swap(a, b);
    
    // Outputs: a=10, b=5
    cout << "After Swap: " << "a=" << a << ", b=" << b << endl;

    // Outputs: after reswap a=5, b=10
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "After ReSwap: " << "a=" << a << ", b=" << b << endl;

    return 0;

}
