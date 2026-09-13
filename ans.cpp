#include <iostream> // The new header for Input/Output streams
#include <string>   // For using std::string

int main() {
    int ans = 42;
    std::string dynamic_str = "The answer is";

    // C++ style printing using the Insertion Operator (<<)
    std::cout << dynamic_str << " " << ans << "\n"; 
}