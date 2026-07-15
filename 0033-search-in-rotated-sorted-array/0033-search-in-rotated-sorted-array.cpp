class Solution {
public:

    int findPivot(vector<int>& nums){
        int s=0;
        int e= nums.size()-1;
        while(s<=e){
            int mid= s+(e-s)/2;
            if(s==e){
                return s;
            }
            if(mid<=e && nums[mid] >nums[mid+1]){
                return mid;
            }
            if(mid-1>=s && nums[mid-1]>nums[mid]){
                return mid-1;
            }
            if(nums[s]>nums[mid]){
                e= mid-1;
            }else{
                s= mid+1;
            }
        }
        return -1;
    }
    int binarySearch(vector<int>& nums,int s, int e, int target){
         while(s<=e){
            int mid= s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e= mid-1;
            }else{
                s= mid+1;
            }

        }
       
     return -1;
    }
    int search(vector<int>& nums, int target) {
       int pivotSearch= findPivot(nums);
       int ans=0;
       if(target >= nums[0] && target <= nums[pivotSearch]){
        ans= binarySearch(nums, 0, pivotSearch, target);
       }else{
        ans= binarySearch(nums,pivotSearch+1,nums.size()-1, target);
       }
       return ans;
    }
};