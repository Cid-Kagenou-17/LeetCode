class Solution
{
    public:
        int firstMissingPositive(vector<int> &nums)
        {
            int m = 1;
            int n = nums.size();

            for (int i = 0; i < n; i++)
            {

                while (nums[i] != i + 1)
                {
                    if (nums[i] <= 0)
                    {
                        break;
                    }
                    else if (nums[i] > n)
                        break;
                    else if (nums[i] == nums[nums[i] - 1])
                    {
                        break;
                    }
                    swap(nums[i], nums[nums[i] - 1]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == m)
                {
                    m++;
                }
            }
            return m;
        }
};