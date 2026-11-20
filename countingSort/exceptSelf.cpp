#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int>answer(nums.size(),1);
            int prefix=1;
            for(int i=0;i<nums.size();i++){
                answer[i] *=prefix;
                prefix *=nums[i];
            }
            int suffix=1;
            for(int i=nums.size()-1;i>=0;i--){
                answer[i] *=suffix;
                suffix *=nums[i];
            }
            return answer;
    }
};

int main(){
    Solution sn;
    vector<int>nums={1,2,3,4};
    vector<int>result=sn.productExceptSelf(nums);
    for(int i:result){
        cout << i << " ";
    }
    return 0;
}