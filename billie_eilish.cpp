//taking inpute
#include <iostream>
using namespace std;
void add(int& a,int& b){
    a += b;
    cout << "a is now a + b " << endl << a << endl;
}
int main(){
    cout << "enter two numbers" << endl;
    int c, d;
    cin >> c; cin >> d;
    add(c, d);
    cout << c << endl;
    return 0;
}