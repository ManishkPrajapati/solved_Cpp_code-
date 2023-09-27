#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    float PI = 3.14;
    int num = 100;
    cout << "Entering a new line." << endl;
    cout << setw(15) << "Output" << endl;
    cout << setprecision(10) << PI << endl;
}
