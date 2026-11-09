class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // code here
        int count=0;
        int a=0;
      for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else
            {
                a=max(count,a);
                while(count!=0)
                {
                    count--;
                }
            }
        }
        a=max(count,a);
        return a;

        
    }
};