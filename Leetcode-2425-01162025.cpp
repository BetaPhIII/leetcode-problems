class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x = 0;
        int y = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        for(const auto& i: nums1)
            x^=i;
        for(const auto& j: nums2)
            y^=j;
        if(size1%2==0 && size2%2==0)
            return 0;
        else if(size1%2==1 && size2%2==0)
            return y;
        else if(size1%2==0 && size2%2==1)
            return x;
        else
            return x^y;
    }
};