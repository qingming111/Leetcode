#include<iostream>

class Solution
{
public:
	vector<int> twoSum(vector<int>&nums, int target)
	{
		map<int,int> mp;
		int index = 0;
		vector<int> res;
		for(auto num : nums)
		{
			mp[num] = index++;
		}

		for(int i = 0; i < nums.size(); ++i)
		{
			if(mp.count(target - nums[i]) && mp[target - nums[i]] != i)
			{
				res.push_back(i);
				res.push_back(mp[target - nums[i]);
				break;
			}
		}
		return res;
	}
};
