#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1, 2, 3};
    for (int d : arr) cout << d;
    int n = 5;
    vector<int> v(5);
    cout << "enter 5 numbers chat" << endl;
    for(int i = 0; i < 5; i++) cin >> v[i];
    for(int j : v) cout << j;
    return 0;
}  
