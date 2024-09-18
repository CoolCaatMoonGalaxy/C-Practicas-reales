#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());  
    do {
        result.push_back(nums);  // Guardamos la permutación actual
    } while (next_permutation(nums.begin(), nums.end()));  // Genera la siguiente permutación
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3}; 
    vector<vector<int>> permutations = permute(nums);
    
    for (const auto& p : permutations) {
        for (int num : p) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
