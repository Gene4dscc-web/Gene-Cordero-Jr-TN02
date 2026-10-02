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
    int atd;
    int snt;
    
    cout << "Amount of Attendees: ";
    cin >> atd;
    
    cout << "Available Seats Per Table: ";
    cin >> snt;
    
    float exTables;
    int Trequired;
    int Tseats;
    int Useats;
    float Rtable;
    
    exTables = static_cast<double>(atd)/snt;
    
    Trequired = ceil(exTables);
    
    Tseats = Trequired*snt;
    
    Useats = Tseats - atd; 
    
    Rtable = round(exTables*100)/100;
    
    cout <<"\n"<<"Exact tables = "<<Rtable<<"\n";
    
    cout << "Table required = "<<Trequired<<"\n";
    
    cout << "Total seat = "<<Tseats<<"\n";
    
    cout << "Unused seats = "<<Useats;

    return 0;
}