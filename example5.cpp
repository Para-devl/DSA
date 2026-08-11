#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while(left<right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }
        if(!isalnum(s[right])){
            right--;
            continue;
        }
        if(tolower(s[left])!=tolower(s[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    cout << (isPalindrome(s) ? "true" : "false") << endl;

    return 0;
}