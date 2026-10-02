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
    double basef;
    double dist;
    double rate;
    double fee;
    double toll;
    int pasngr;
    
    float DistCharge;
    float Prefee;
    float Bookfee;
    float Total;
    float Share;
    
    cout << "Base fee: ";
    cin >> basef;
    
    cout << "Distance: ";
    cin >> dist;
    
    cout << "Rate per Kilometer(km): ";
    cin >> rate; 
    
    cout << "Toll: ";
    cin >> toll;
    
    cout << "Fee (Do not inlcude %): ";
    cin >> fee;
    
    cout << "Quantity of Passengers: ";
    cin >> pasngr;
    
    DistCharge = dist * rate;
    
    Prefee = basef + DistCharge + toll;
    
    Bookfee = Prefee*(fee/100);
    
    Total = Prefee + Bookfee;
    
    Share = Total/pasngr;
    
    float trunc_DistCharge;
    float trunc_Prefee;
    float trunc_Bookfee;
    float trunc_Total;
    float trunc_Share;
    
    trunc_DistCharge = trunc(DistCharge * 100.0) / 100.0;
    trunc_Prefee = trunc(Prefee * 100.0) / 100.0;
    trunc_Bookfee = trunc(Bookfee * 100.0) / 100.0;
    trunc_Total = trunc(Total * 100.0) / 100.0;
    trunc_Share = trunc(Share * 100.0) / 100.0;
    
    cout <<fixed<<setprecision(2);
    cout <<"\n"<< "Distance Charge = "<<trunc_DistCharge<<"\n";
    
    cout <<"Pre-fee = "<<trunc_Prefee<<"\n";
    
    cout <<"Booking fee = "<<trunc_Bookfee<<"\n";
    
    cout <<"Total = "<<trunc_Total<<"\n";
    
    cout <<"Share per passenger = "<<trunc_Share<<"\n";

    return 0;
}