class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int b[129]={0};
        int len=0,maxlen=0;
        for(int i=0;i<n;i++){
          b[s[i]]++;
          if(b[s[i]]>1){
              if(len>maxlen){
                  maxlen=len;
              }
              i-=len;
                  len=0;
                  for(int i=0;i<129;i++){
                      b[i]=0;
                  }
              }
          else
          {
              len++;
              if(len>maxlen){
                  maxlen=len;
              }
          }

            
        }
        return maxlen;
    }
};
