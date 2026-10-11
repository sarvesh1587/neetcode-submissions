class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>arr;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            // arr.push(i);
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                arr.push_back(mpp[rem]);
                arr.push_back(i);
            }
                // return arr;
            else{
            mpp[nums[i]]=i;
            }
        }
        return arr;
    }
};
