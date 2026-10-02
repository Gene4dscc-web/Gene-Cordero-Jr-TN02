/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long long amt;
    float KB;
    
    cout << "Enter byte: ";
    cin >> amt;
    
    float kb;
    float mb;
    float gb;
    
    KB = 1024.0;
    
    kb = amt/KB;
    
    mb = kb/KB;
    
    gb = kb/(pow(KB,2));
    
    cout <<fixed<<setprecision(2);
    cout <<"\n"<<"KB = "<<kb<<"\n";
    
    cout <<"MB = "<<mb<<"\n";
    
    cout <<"GB = "<<fixed<<setprecision(4)<<gb<<"\n";
    
    cout <<"Whole MB = "<<static_cast<int>(mb);

    return 0;
}

