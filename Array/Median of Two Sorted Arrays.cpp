class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums2.size(); 
        for(int i=0;i<m;i++)  nums1.push_back(nums2[i]); 
        sort(nums1.begin(),nums1.end()); 
        int len=nums1.size();
        if(len%2==0){
            return (nums1[len/2 -1]+nums1[len/2])/2.0;
        }
        else{
            return nums1[len/2];
        }
    }
};
