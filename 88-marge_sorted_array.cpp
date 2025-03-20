#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{

 vector<int>nums1={1,2,3,0,0,0};
 vector <int>nums2={2,5,6};
 int m=3,n=3;

 for(int i=0;i<m;i++){
    nums1.pop_back();
 }
 for(int val:nums2){
    nums1.push_back(val);

 }
 sort(nums1.begin(),nums1.end());
 for(int val:nums1){
    cout<<val;
 }
}
