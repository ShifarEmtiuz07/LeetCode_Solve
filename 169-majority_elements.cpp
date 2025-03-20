

//MOORE'S ALGORITHM for Majority Element


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> nums={1,2,2,3,2};
int n= nums.size();

int freq=0,ans=0;

for(int i=0;i<n;i++){
    if(freq==0){
        ans=nums[i];

    }
    if(ans==nums[i]){
        freq++;
    }else{
    freq--;
    }

}
//cout<<ans;

//if no majority element exist then

int count=0;
for(int val:nums){
    if(val==ans){
            count++;}
}
//cout<<count<<endl;
  if(count>n/2)
    {
        cout<<ans<<endl;
  }

    else {cout<<-1<<endl;}



}
