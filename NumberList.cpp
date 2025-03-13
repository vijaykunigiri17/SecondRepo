// 
#include<bits/stdc++.h>
using namespace std;
int func(int i,int j,vector<int>&wt,vector<int>&cp,vector<vector<int>>&dp){
  if(j==0) return 0;
  if(i==0){
    if(cp[i]<=j) return wt[i];
    return 0;
  }

  int pick=0;
  if(cp[i]<=j){
    pick=wt[i]+func(i-1,j-cp[i],wt,cp,dp);
  }
  int np=func(i+1,j,wt,cp,dp);
  return max(pick,np);
  
}
int main (){
      vector<int>wt={10,40,30,50};
      vector<int>cp={5,4,2,3};
      int w=5;
      vector<vector<int>>dp(cp.size(),vector<int>(w+1,-1));
      
      cout<<func(cp.size()-1,w,wt,cp,dp);

    return 0;
}