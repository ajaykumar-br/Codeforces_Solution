#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,c=0;
    string a;
    cin >> a;
    n=a.length();
    for(int i=1;i<n-1;i++){
        c++;
    }
    if(c>8){
        cout << a[0] << c << a[n-1] << endl;
    }
    else{
        cout << a << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}