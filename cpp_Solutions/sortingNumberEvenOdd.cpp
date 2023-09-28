// // Leetcode solutions

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         int i = 0;
//         int j = 0;

//         while ( j < nums.size()){
//             if(nums[j]%2 == 0){
//                 int temp = nums[i];
//                 nums[i] = nums[j];
//                 nums[j] = temp;
//                 i++;
//                 j++;
//             }
//             else{
//             j++;
//             }
//         };
//         return nums;
//     };
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    int i = 0;
    int j = 0;

    while (j < nums.size()) {
        if (nums[j] % 2 == 0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j++;
        } else {
            j++;
        }
    }

    return nums;
}

int main() {
    // Example usage
    vector<int> nums = {3, 1, 2, 4};
    vector<int> sorted = sortArrayByParity(nums);

    cout << "Sorted array by parity: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
