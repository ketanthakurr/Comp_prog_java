// // Leetcode solutions

// class Solution {
// public:
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
// };