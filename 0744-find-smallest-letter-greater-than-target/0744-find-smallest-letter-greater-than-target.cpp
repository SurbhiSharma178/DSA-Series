class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e= letters.size()-1;
        char ans=0;
        while(s<=e){
            int mid= s+(e-s)/2;
            if(letters[mid]>target){
                e=mid-1;
                ans= letters[mid];
            }else{
                s= mid+1;
            }
        }
        if(ans==0){
            return letters[0];
        }
        return ans;
    }
};