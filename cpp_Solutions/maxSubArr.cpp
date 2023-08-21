#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
        int sum =0;
        int temp = nums[0];
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];

                temp = max(temp,sum);
            if(sum<0){
                sum=0;
            }
        }
        return temp;
    }
};

int main(){
    Solution solution;

    vector<int> nums = {-6,3,-1,-2,3};
    int maxSum = solution.maxSubArray(nums);
    cout << maxSum << endl;
    return 0;
}

