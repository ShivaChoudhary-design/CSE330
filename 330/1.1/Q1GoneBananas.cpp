#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=2){
            cout << "No" << endl;
        }else if(isPrime(n)){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}