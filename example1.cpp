#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());

    for(int i=0;i<arr.size()-2;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int l=i+1,r=arr.size()-1;
        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum<0){
                l++;
            }
            else if(sum>0){
                r--;
            }
            else{
                result.push_back({arr[i],arr[l],arr[r]});
                l++;
                r--;
                while(l<r && arr[l]==arr[l-1]){
                    l++;
                }
                while(l<r && arr[r]==arr[r+1]){
                    r--;
                }
            }
        }
    }
    return result;
}

int main() {
    vector<int> arr = {-4, -1, -1, 0, 1, 2};

    vector<vector<int>> ans = threeSum(arr);

    for (auto &triplet : ans) {
        cout << "{ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}