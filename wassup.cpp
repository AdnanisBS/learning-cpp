#include <iostream>
#include <iomanip>
#define PI 3.14
using namespace std;
int main(){
    cout << setw(20) << "Calculator" << endl;
    cout << setbase(16) << PI << endl;
    cout << setprecision(1) << PI;
    return 0; 
}