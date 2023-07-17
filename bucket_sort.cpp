#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void bucketsort(vector<float>&ans, int n){
    //  int n=ans.size();
vector<vector<float>>bucket(n,vector<float>());
     for(int i=0;i<n;i++){
        //  cout<<"no"<<ans[i]<<endl;
         int index=ans[i]*n;
        //  cout<<"floor value"<<ans[i]*n<<" ";
         bucket[index].push_back(ans[i]);
     }
     for(int i=0;i<n;i++){
         if(!bucket[i].empty()){
        // cout<<"bucket_Ele"<<bucket[i]<" "<<endl;
         sort(bucket[i].begin(),bucket[i].end());
        }
     }
     int k=0;
     for(int i=0;i<n;i++){
         cout<<"no_"<<bucket[i][0]<<" "<<endl;
         for(int j=0;j<bucket[i].size();j++){
             cout<<"no"<<bucket[i][j]<<endl;
             ans[k++]=bucket[i][j];
         }
     }
     
}
int main(){
    int n;
    cin>>n;
    float a;
    vector<float>ans;
    for(int i=0;i<n;i++){
        cin>>a;
        ans.push_back(a);
    }
   
    bucketsort(ans,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
