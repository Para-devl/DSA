#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closestSum = nums[0]+nums[1]+nums[2];
    for(int i=0; i<(int)nums.size()-2; i++){
        int left=i+1, right=nums.size()-1;
        while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            if(abs(sum-target)<abs(closestSum-target)){
                closestSum=sum;
            }
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else{
                return sum;
            }
        }
    }
    return closestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << threeSumClosest(nums, target) << endl;

    return 0;
}