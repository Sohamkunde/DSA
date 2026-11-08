class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=0;
        int x=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(count!=nums[i])
            {
               return count;
               
            }
            count++;
        }
        if(x!=-1)
        {
            return x;
        }  
        else
        {
            return (nums[nums.size()-1])+1;
        }
    }
};