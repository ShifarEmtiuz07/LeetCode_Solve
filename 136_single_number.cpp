#include<iostream>
#include<vector>
using namespace std;


int main(){

vector <int>vec;
int sz,val=1,n;
cin>>sz;
while(val<=sz){
        cin>>n;
          vec.push_back(n);
            val++;
}



int ans=0;
for(int val:vec){
    ans=ans^val;
}
cout<<"ans:"<<ans<<endl;




}
