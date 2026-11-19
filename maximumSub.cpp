#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxSubArray(vector<int>& nums){
            int sum_arr=nums[0];
            int first_element=nums[0];
            for(int i=1;i<nums.size();i++){
                sum_arr=max(nums[i],sum_arr+nums[i]);
                first_element=max(sum_arr,first_element);
            }
            return first_element;
        }
};
int main(){
    Solution sn;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout << sn.maxSubArray(nums) << endl;
    return 0;
}