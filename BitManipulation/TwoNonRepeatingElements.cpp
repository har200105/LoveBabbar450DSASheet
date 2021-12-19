class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int>ans;
        int n = nums.size();
        int xorr = nums[0];
        for(int i=1;i<n;i++){
            xorr=xorr^nums[i];
        }
        int right = xorr & ~(xorr-1);
        int x=0,y=0;
       
        for(int i=0;i<n;i++){
            if(nums[i]&right){
                x=x^nums[i];
            }else{
                y=y^nums[i];
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;
    }
};