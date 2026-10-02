/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std; 

int main()
{
    string prd;
    double price;
    double qnty;
    double disct;
    double boxnshp;
    double unt;
    
    cout <<"Product name: ";
    getline (cin,prd);
    
    cout <<"Price: ";
    cin>> price;
    
    cout <<"Quantity: ";
    cin>> qnty;
    
    cout <<"Discount (Do not input %): ";
    cin>> disct;
    
    cout <<"Shihp/box: ";
    cin>> boxnshp;
    
    cout <<"Units/box: ";
    cin>> unt;
    
    double subtotal;
    double discount;
    double merchandise;
    float exctbx;
    double Exbox;
    double bxs;
    double shp;
    double amntdue;
    
    subtotal= price*qnty;
    
    discount= subtotal*(disct/100);
    
    merchandise= subtotal-discount;
    
    Exbox= qnty/unt;
    
    bxs= ceil(Exbox);
    
    shp= bxs*boxnshp;
    
    amntdue= merchandise+shp;
    
    cout <<"\n"<<"Product name = "<<prd<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Subtotal = "<<subtotal<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Discount = "<<discount<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Merchandise = "<<merchandise<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Exact Boxes = "<<Exbox<<"\n";
    
    cout <<"Boxes = "<<static_cast<int>(bxs)<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Shipping = "<<shp<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Amount Due = "<<amntdue<<"\n";

    return 0;
}