class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>a;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!s.empty() and nums2[s.top()]<nums2[i]){
                s.pop();
            }
            if(!s.empty()){
                a[nums2[i]]=nums2[s.top()];
            }
            s.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=(a[nums1[i]]==0)?-1:a[nums1[i]];
        }
        return nums1;
    }
};
