#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            swap(nums[k],nums[i]);
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> nums = {4, 5, 4, 6, 4};
    int val = 4;

    int newLength = removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}