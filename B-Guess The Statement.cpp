#include <iostream>
#include <vector>
#define ll long long 
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        ll i, n , m ,sum = 0 , a , b, c, val_stor , val_stor1 , val_stro2 , val_stor3 , count_kor = 0 , k, val_max = 0 , z;
  cin>>n ;
 vector<ll> v(n)  ;
for (ll i = 1; i <=n-1; i++){
   cin >> v[i] ;
   a  = v[n-1] ; ;
   cout << v[i] << " " ;
 }
string s ; cin >> s;

 if(a%2==0)
 {
   b = a/2;
   cout << b << '\n' ;
 }

 else {
 c = a*3+1;
 cout << c << '\n' ;
 }
    }

    return 0;
}
