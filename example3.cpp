#include <bits/stdc++.h>
using namespace std;
//can be done by the swap function but i didnt knew swap so i did this;
void moveZeroes(vector<int>& nums) {
    int slow=0;
    for(int i=0;i<nums.size();i++){
        if(slow==i){
            continue;
        }
        if(nums[slow]!=0){
            slow++;
        }
        if(nums[slow]==0 && nums[i]==0){
            continue;
        }
        if(nums[slow]==0 && nums[i]!=0){
            nums[slow]=nums[i];
            nums[i]=0;
            slow++;
        }
    }
}

int main() {
    vector<int> nums = {5,3,0,7,6};

    moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}