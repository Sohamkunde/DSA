class Solution {
public:
    bool check(vector<int>& nums) {
        // case 1 
        bool output=true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] > nums[i+1])
            {
                output=false;
                break;
            }
        }
        if(output==true)
        {
            return true;
        }

        // case 2
        int size=nums.size();
        // reset for every rotation
        while(size)
        {
            
             
            int temp=nums[nums.size()-1];
            for(int i=nums.size()-2;i>=0;i--)
            {
                nums[i+1]=nums[i];
            }
            nums[0]=temp;
            bool no=true;

            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i] > nums[i+1])
                {
                    no=false;
                    break;
                }
            }

            if(no==true)
            {
                return true;
            }

            size--;
        }

        return false;
    }
};