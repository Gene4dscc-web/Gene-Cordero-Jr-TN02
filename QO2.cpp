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
    
    double Qz;
    double Lb;
    double Prj;
    double Exm;
    
    float Weight;
    
    cout <<"Quiz Score: ";
    cin >> Qz;
    
    cout <<"Lab Score: ";
    cin >> Lb;
    
    cout <<"Project Score: ";
    cin >> Prj;
    
    cout <<"Exam Score: ";
    cin >> Exm;
    
    Weight = ((Qz*0.2)+(Lb*0.25)+(Prj*0.25)+(Exm*0.3));
    
    cout <<fixed<< setprecision(2)<<"\n"<< "Weighted Grade = "<<Weight<<"\n";
    
    cout <<fixed<<setprecision(0)<< "Rounded = "<<round(Weight)<<"\n";
    
    cout << "Cast to Int = "<<static_cast<int>(Weight)<<"\n";
    
return 0;

}