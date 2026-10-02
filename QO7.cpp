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
    double x1;
    double x2;
    double y1;
    double y2;
    
    cout <<"\n"<< "Enter value for x1:";
    cin >> x1;
    
    cout <<"\n"<< "Enter value for y1:";
    cin >> y1;
    
    cout <<"\n"<< "Enter value for x2:";
    cin >> x2;
    
    cout <<"\n"<< "Enter value for y2:";
    cin >> y2;
    
    cout <<"\n"<<"You Entered..."<<"\n";
    
    cout <<"\n"<<"Start = ("<<x1<<","<<y1<<")"<<"\n";
    cout <<"\n"<<"Target = ("<<x2<<","<<y2<<")"<<"\n";
    float dx;
    float dy;
    float dist;

    
    dx = x2+(-x1);
    
    dy = y2+(-y1);
    
    dist = sqrt(pow(dx,2) + pow(dy,2));
    
   cout <<fixed<<setprecision(3)<<"dx = "<<dx<<"\n";
   
   cout <<fixed<<setprecision(3)<<"dy = "<<dy<<"\n";
   
   cout <<fixed<<setprecision(3)<<"Distance = "<<dist<<"\n";
   
   cout <<"Rounded Distance = "<<static_cast<int>(dist)<<"\n";
    
    
    return 0;
    
    
    
}