class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        backtrace(res,nums,0,nums.size());
        return res;
    }

    void backtrace(vector<vector<int>>& res,vector<int>& nums,int index,int len)
    {   
        if(index == len)
        {
            res.push_back(nums);
            return;
        }
            
        for(int i=index;i<len;i++)
        {
            if(nums[i] == nums[index]&& index != i)
            {
                printf("continue %d %d\n",i,index);
                //if(i == )
                continue;

            }
                

            printf("swap %d %d.\n",i,index);
            swap(nums[i],nums[index]);
            backtrace(res,nums,index+1,len);
            
            swap(nums[i],nums[index]);

            
            //printf("swap %d %d.\n",index,i);
        }

    }
};
