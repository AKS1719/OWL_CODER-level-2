#include<bits/stdc++.h>

using namespace std;


int  threeSum(vector<int>& nums) {
        vector<vector<int>> ans; 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i = 0 ; i < n ; i++)
        {
            int j = i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                int sum =  nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>0)
                {
                    k--;
                }
                else 
                {j++;}
            }
        }
        for(auto &x:s)
        {
            ans.push_back(x);
        }
        return ans.size();
    }

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0 ;  i < n ;i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout<<threeSum(nums);
}
