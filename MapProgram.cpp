#include<bits/stdc++.h>
using namespace std;
int main (){
      vector<int>nums={1,1,2,2,3,4,5,5,6};
      map<int,int>m;
      for(auto it:nums) m[it]++;
      for(auto it:m) cout<<it.first<<" "<<it.second<<endl;
    return 0;
}