/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

	double Meal_Price;
	int Quantity;
	double service_charge;
	int number_of_students;

	double subtotal;
	double finalbill;
	double servicecharge;
	double Share;


	cout << "Price: ";
	cin >> Meal_Price;

	cout << "Quantity: ";
	cin >> Quantity;

	cout << "Service Charge (Please input only numbers eg. 5%->5): ";
	cin >> service_charge;

	cout << "Amount of Students Sharing: ";
	cin >> number_of_students;



	cout <<"\n"<<"You Entered..."<<"\n";

	cout <<fixed<<setprecision(2)<<"\n"<<"Price: "<<Meal_Price<<"\n";

	cout << "Quantity: "<<Quantity<<"\n";

	cout << "Service Charge: "<<service_charge<<"%"<<"\n";

	cout << "Amount of Students Sharing: "<<number_of_students<<"\n";




	subtotal = Quantity * Meal_Price;

	servicecharge = subtotal*(service_charge/ 100);

	finalbill = servicecharge + subtotal;

	Share = finalbill/number_of_students;

	cout << fixed<< setprecision(2);
	cout <<"\n"<< "Sub total: "<< subtotal<<"\n";
	cout << "Service Charge: "<< servicecharge<<"\n";
	cout << "Final Bill:"<< finalbill<<"\n";
	cout << "Share per student:"<< Share<<"\n";


	return 0;

}