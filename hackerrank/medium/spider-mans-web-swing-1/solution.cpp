#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    vector<int> h;
    while(cin>>n){
        h.push_back(n);
    }
    n=h.size() ;
    int lowest=INT_MAX;
    int bd=0;
    for(int i=0;i<n;i++){
        lowest=min(h[i],lowest);
        bd=max(h[i]-lowest,bd);

    }  
            cout<<bd;
            
    return 0;
}
