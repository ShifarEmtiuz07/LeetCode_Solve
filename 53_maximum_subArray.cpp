
//Kadane's Algorithm//

#include <iostream>
using namespace std;
int main(){

int n=9;
int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
int curr_sum=0,max_sum=INT_MIN;
for(int i=0;i<n;i++){
    curr_sum+=arr[i];
    max_sum=max(curr_sum,max_sum);
    if(curr_sum<0){
        curr_sum=0;
    }
}
cout<<max_sum<<endl;



}
