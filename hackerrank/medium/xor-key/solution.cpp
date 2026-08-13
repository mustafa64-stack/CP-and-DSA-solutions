#include <bits/stdc++.h>
using namespace std;
int main(){
    double mealcost;
    int tippercent,taxpercent;
    cin>>mealcost>>tippercent>>taxpercent;
    cout<<round((mealcost+(((tippercent)/100.0)*mealcost)+(((taxpercent)/100.0)*mealcost)));
}
