//taking inpute
#include <iostream>
using namespace std;
void add(int& a,int& b){
    a += b;
    cout << "a is now a + b";
}
int main(){
    cout << "enter two numbers";
    int c, d;
    cin >> c; cin >> d;
    add(c, d);
    return 0;
}