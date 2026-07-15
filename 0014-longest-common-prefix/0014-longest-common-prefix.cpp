class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        // For finding shortest length string
        int shortestLen= strs[0].size();

        for(auto &str:strs){
            shortestLen= std::min(shortestLen, (int)str.size());
        }
        while(i<shortestLen){
            char curr_char=0;
            for(auto &str: strs){
               
                if(curr_char==0){
                    curr_char=str[i];
                }else if( curr_char != str[i]){
                  return ans;
                }
              
            }
                ans.push_back(curr_char);
                i++;
        }
        return ans;
    }

};