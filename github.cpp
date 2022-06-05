#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

const double container = 2.76, cost = 4.12, profit = 1.45;//State numbers with the const to show numbers that won't change 
double NumOfCont, TotalProfit, CostOfPro;//These are the variables being defined in the output
int kg;//The input number which the user will be putting in 
char a = '*';//This would be the asterisk that we would be repeating in our code without hardocding 
char b = ' ';//This allows the spacing so the numbers are aligned at the end of output

int main()
{
	cout << setw(75) << setfill(a) << a << endl;//These allow 75 asterisks to be placed 
	cout << setw(14) << setfill(a) << a << " I Love Cheese " << setw(14) << setfill(a) << a << endl;//14 astersiks are places in the beginning with the text and finishing off with the asterisks.
	cout << setw(75) << setfill(a) << a << endl;

	cout << "Please enter the number of kilograms of cheese produced: ";
	cin >> kg; //Print statement and use cin for user input.

	NumOfCont = round(kg / container);//These are the variables that need to be calculated. Also, round is used to round to the nearest integer.
	CostOfPro= NumOfCont * cost;
	TotalProfit = (profit * NumOfCont);

	cout << "The number of containers to hold cheese is: " << setw(29) << setfill(b) << round(NumOfCont) << endl;//With the calculated variables, these allow the statements to be printed with the numbers.
	cout << "The cost of producing " + to_string(lround(NumOfCont)) + " container(s) of cheese is: $" << setw(19) << setfill(b) << CostOfPro << endl;
	cout << "The profit from producing " + to_string(lround(NumOfCont)) + " container(s) of cheese is: $" << setw(15) << setfill(b) << TotalProfit << endl;


}
