#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void fullDiamond(int n){
    pattern1(n);
    pattern2(n);
}

void halfDiamond(int n){
    for(int i=1; i<=2*n-1; i++){
        int star = i;
        if(i > n) star = 2*n - i;
        for(int j=1; j<=star; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void zeroOneTriangle(int n){
    for(int i=1; i<=n; i++){
        int start = (i % 2 == 0) ? 0 : 1;
        for(int j=1; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void numberPattern(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        
        cout << "\nFull Diamond Pattern:" << endl;
        fullDiamond(n);
        
        cout << "\nHalf Diamond Pattern:" << endl;
        halfDiamond(n);
        
        cout << "\nZero-One Triangle Pattern:" << endl;
        zeroOneTriangle(n);
        
        cout << "\nNumber Pattern:" << endl;
        numberPattern(n);
    }
    return 0;
}
