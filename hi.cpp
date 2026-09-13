#include <iostream>       // Replaces stdio.h for printing 
#include <vector>         // Replaces raw arrays [cite: 34]
#include <numeric>        // Gives us cool math tools like accumulation

using namespace std;      // Saves you from typing "std::" before everything!

// --- PASTE YOUR LEETCODE CLASS HERE ---
class Solution { // 
public: // [cite: 32]
    int missingNumber(vector<int>& nums) { // Pass-by-reference with & 
        int n = nums.size(); // Instantly get size without a separate variable
        int expectedSum = n * (n + 1) / 2;
        
        int actualSum = 0;
        // Modern C++ Range-Based For Loop!
        for (int num : nums) {
            actualSum += num;
        }
        return expectedSum - actualSum;
    }
};

// --- YOUR LOCAL TESTING GROUND ---
int main() {
    Solution solver; // 1. Instantiate LeetCode's class object
    
    // 2. Create a test case vector (no malloc needed!)
    vector<int> myTestCase = {3, 0, 1}; 
    
    // 3. Call the function
    int result = solver.missingNumber(myTestCase);
    
    // 4. Print the output 
    cout << "The missing number is: " << result << "\n"; // 
    
    return 0;
}