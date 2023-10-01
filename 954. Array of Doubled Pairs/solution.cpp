#include <bits/stdc++.h>
using namespace std;

bool canReorderDoubled(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    map<int,int> mp;
    for(auto e:arr) mp[e]++;
    for (int e:arr) {
        if(!mp[e]) continue;
        if (e<0 && e%2!=0) return false;
        int y=e>0?e*2:e/2;
        if (!mp[y]) return false;
        mp[e]--;
        mp[y]--;
    }
    return true;
}

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool canReoder=canReorderDoubled(v);
    cout<<(canReoder?"true":"false");
}