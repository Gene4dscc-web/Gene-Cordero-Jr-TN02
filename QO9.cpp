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
    double btui;
    double profee;
    double dp ;
    double instl;
    
    cout <<"Base Tuition: ";
    cin>> btui;
    
    cout <<"Processing-fee Percentage (Do not include %): ";
    cin>> profee;
    
    cout <<"Down-payment Amount (Do not include %): ";
    cin>> dp;
    
    cout <<"Number of Monthly Installments: ";
    cin>> instl;
    
    double procsfee;
    double Adjtui;
    double Bal;
    double monthly;
    
    procsfee= btui*(profee/100);
    
    Adjtui= btui + procsfee;
    
    Bal= Adjtui-dp;
    
    monthly= Bal/instl;
    
    cout <<fixed<<setprecision(2)<<"\n"<<"Processing fee = "<<procsfee<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Adjusteed tuitiom = "<<Adjtui<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Balance = "<<Bal<<"\n";
    
    cout <<fixed<<setprecision(2)<<"Monthly fee = "<<monthly<<"\n";

    return 0;
}