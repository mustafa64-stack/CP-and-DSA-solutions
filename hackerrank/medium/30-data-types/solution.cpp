#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num,i=4;
    double dou,d=4.0;
    string s,se="HackerRank ";
    cin>>num>>dou;
    cin.ignore();
    getline(cin,s);
    cout<<num+i<<'\n'<<fixed<<setprecision(1)<<dou+d<<"\n"<<se+s;
    return 0;
}
