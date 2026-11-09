class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        stack<int> st;
        int a = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                st.push(1);
                count++;
            }
            else
            {
                a = max(a, count);

                while(!st.empty())
                {
                    st.pop();
                }

                count = 0;
            }
        }

        a = max(a, count); // handles ending 1s

        return a;
    }
};