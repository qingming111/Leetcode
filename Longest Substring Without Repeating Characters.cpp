/**
*Given a string, find the length of the longest substring without repeating characters.
*Examples:
*Given "abcabcbb", the answer is "abc", which the length is 3.
*Given "bbbbb", the answer is "b", with the length of 1.
*Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
		string substring;
		for(int i = 0; i < s.size(); ++i)
		{
			int pos = substring.find_first_of(s[i]);
			if(pos == string::npos)
			{
				substring.push_back(s[i]);
			}
			else
			{
				if(substring.size() > max)
					max = substring.size();
				int len = substring.size() - (pos + 1) ? substrin.size() - pos - 1 : 1;
				substring = substring.substr(pos + 1, len);
				substring.push_back(s[i]);
			}
		}
		return substring.size() > max ? substring : max;
	}
};