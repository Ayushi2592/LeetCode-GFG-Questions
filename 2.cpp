//maximum subarray
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
          int sum=0;
          int maxi = nums[0];
          for(int i=0;i<nums.size();i++){
            sum= sum+nums[i];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
          }
               
            }
          
};
int main(){
    Solution s ;
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= s.twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}