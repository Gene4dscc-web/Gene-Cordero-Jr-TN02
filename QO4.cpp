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
    double width;
    double height;
    double coats;
    double cov;
    
    cout << "Input Values (Do not include 'cm')...";
    
    cout <<"\n\n"<< "Width: ";
    cin >> width;
    
    cout << "Height: ";
    cin >> height;
    
    cout << "Coats: ";
    cin >> coats;
    
    cout << "Coverage: ";
    cin >> cov;
    
    float WArea;
    float TArea;
    float Ecans;
    int cans;
    
    WArea = width*height;
    
    TArea = WArea*coats;
    
    Ecans = TArea/cov;
    
    cans = ceil(Ecans);
    
    cout <<fixed<<setprecision(2);
    cout <<"\n"<<"Wall Area = "<<WArea<<"\n";
    
    cout <<"Total Paint Area = "<<TArea<<"\n";
    
    cout <<"Exact Cans = "<<Ecans<<"\n";
    
    cout <<"Cans to Buy = "<<cans;

    return 0;
}