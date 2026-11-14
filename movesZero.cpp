#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void moveZeroes(vector<int>& nums) {
            int left=0;
            int right=0;
            while(right < nums.size()){
                if(nums[right] !=0){
                    swap(nums[left],nums[right]);
                    left++;
                }
                right++;
            }
    }
};
int main(){
    Solution sn;
    vector<int>nums={0,1,0,3,12};
    sn.moveZeroes(nums);
    for(int i:nums){
        cout << i <<" ";
    }
    cout << endl;
    return 0;
}