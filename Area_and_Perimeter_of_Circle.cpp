#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float r,a,p;
    cin>>r;
    a=3.14*r*r;
    p=2*3.14*r;
    cout<<std::fixed<<setprecision(2)<<(float)a;
    cout<<("
")<<(float)p;
}