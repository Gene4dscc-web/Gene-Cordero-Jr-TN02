/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double T1;
    double T2;
    double T3;
    
    cout << "Enter value for T1:";
    cin >> T1;
    
    cout << "Enter value for T2:";
    cin >> T2;
    
    cout << "Enter value for T3:";
    cin >> T3;
    
    double ave;
    double t1t3;
    double flr;
    double cl;
    double trn;
    double rnd;
    
    ave = (T1+T2+T3)/3;
    
    t1t3 = T1-T3;
    
    flr = floor(ave);
    
    cl = ceil(ave);
    
    trn = trunc(ave);
    
    rnd = round(ave);
    
    cout <<fixed<<setprecision(3)<<"\n"<<"Average = "<<ave<<"\n";
    
    cout <<fixed<<setprecision(3)<<"|T1-T3| = "<<abs(t1t3)<<"\n";
    
    cout <<"Floor = "<<static_cast<int>(flr)<<"\n";
    
    cout <<"Ceil = "<<static_cast<int>(cl)<<"\n";
    
    cout <<"Trunc = "<<static_cast<int>(trn)<<"\n";
    
    cout <<"Round = "<<static_cast<int>(rnd)<<"\n";
    
    



    return 0;
}