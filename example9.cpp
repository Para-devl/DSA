#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    char temp;
    int l=0,r=s.size()-1;
    while(l<r){
        temp=s[l];
        s[l]=s[r];
        s[r]=temp;
        l++;
        r--;
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'};

    reverseString(s);

    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}