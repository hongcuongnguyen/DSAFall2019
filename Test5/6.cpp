#include<bits/stdc++.h>
using namespace std;
int f[1005][1005];
void Solve(){
    string s;   cin>>s;
    int n=s.size(),kq=INT_MIN;
    for(int i=0;i<n;i++)    f[i][i]=1;
    for(int k=1;k<n;k++){
        for(int i=0;i<n-k;i++){
            int j=k+i;
            if(s[i]==s[j] && k>1)
                f[i][j]=f[i-1][j-1];
            else if(s[i]==s[j] && k==1)
                f[i][j]=1;
            else
                f[i][j]=0;
            if(f[i][j]) kq=max(kq,j-i+1);
        }
    }
    cout<<kq<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
