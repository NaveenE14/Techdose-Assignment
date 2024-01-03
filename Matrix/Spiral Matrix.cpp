class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
        int r=matrix.size();
        int c=matrix[0].size();
        int total=r*c;
        int count=0;

        int top=0,endrow=r-1;
        int startcol=0,endcol=c - 1;
        while(count<total) {
            for(int i=startcol;i<=endcol && count<total;i++) {
                spiral.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for(int i=top;i<=endrow && count<total;i++) {
                spiral.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            for(int i=endcol;i>=startcol && count<total;i--) {
                spiral.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            for(int i=endrow;i>=top && count<total;i--) {
                spiral.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return spiral;
    }
};
