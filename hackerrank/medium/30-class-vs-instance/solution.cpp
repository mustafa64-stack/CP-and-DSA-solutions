#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    int age;
    public:
    Person(int initialage){
        if(initialage>=0)
        age=initialage;
        else {
        age=0;
        cout<<"Age is not valid, setting age to 0.\n";
    }}
    void yearPasses(){
        age+=3;
    }
    void amIOld(){
        if (age<13) cout<<"You are young.\n";
        else if(age>=13 && age<18) cout<<"You are a teenager.\n";
        else cout<<"You are old.\n";
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Person p(n);
        p.amIOld();
        p.yearPasses();
        p.amIOld();
        cout<<"\n";
    }
    return 0;
}
