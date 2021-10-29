#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

void fibonacci(ll n){
    ll a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for(ll i=0; i<n; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main(){
	ios_base::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
    ll n;
    cin >> n;
    fibonacci(n-2);
    return 0;
}
