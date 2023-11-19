#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << "Hello World!"<<endl;

    //// defines months as having 12 possible values
    //enum MONTH { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
    ////define bestMonth as a variable type MONTHS
    //MONTHS bestMonth;

    ////assign bestMonth one of the values of MONTHS
    //bestMonth = Jan;

    ////now we can check the value of bestMonths just 
    ////like any other variable
    /*if (bestMonth == Jan)
    {
        cout << "I'm not so sure January is the best month\n";
    } 
    */
    // text formatting, basically how to add more spaces
    cout << "Ints" << setw(10) << "Floats" << setw(10) << "Doubles" << endl;

    return 0;
}
