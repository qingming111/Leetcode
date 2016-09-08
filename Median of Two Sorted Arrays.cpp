/**
*There are two sorted arrays nums1 and nums2 of size m and n respectively.
*Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
*Example 1:
*nums1 = [1, 3]
*nums2 = [2]
*The median is 2.0
*/

int findKthsmallestNum(vector<int>& nums1, vector<int>& nums2, int k)
{
    if(nums1.size() > nums2.size())
        return findKthsmallestNum(nums2, nums1, k);
    if(nums1.size() == 0)
        return nums2[k - 1];
    if(k == 1)
        return std::min(nums1[0], nums2[0]);
    int pa = std::min(k / 2, nums1.size()), pb = k - pa;
    if(nums1[pa - 1] < nums2[pb - 1])
    { 
        vector<int> tmp(nums1.begin + pa, nums1.end());
        return findKthsmallestNum(tmp, nums2, k - pa);
    }
    else if(nums1[pa - 1] > nums2[pb - 1])
    {
        vector<int> tmp(nums2.begin + pb, nums2.end());
        return findKthsmallestNum(nums1, tmp, k - pb);
    }
    return 
        nums[pb - 1];
}

int medianOfTwoSortedArrays(vector<int>&nums1, vector<int>& nums2)
{
    int total = nums1.size() + nums2.size();
    if(total & 0x01)
        return findKthsmallestNum(nums1, nums2, total >> 1);
    return (findKthsmallestNum(nums1, nums2, total >> 1) + findKthsmallestNum(num1, nums2, (total >> 1) + 1)) * .5;
}