// Miles are getting converted to kilometers

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std; // With this we dont have the use it like std ::cout

const double m_to_k = 1.609;

inline double convert(long long mi) { return mi * m_to_k; } //Inline means this is a small function

int main() 
{
    long long miles = 1; //just wanted to be able to input 9 quintillion
    int count = 0;

    cout << fixed << setprecision(3);

    while (true) 
    {
        cout << "Input distance in miles or 0 to terminate the program: ";
        if (!(cin >> miles))// If the input is numeric 
        {
            cout << "\nNon-numeric input detected. Exiting.\n";
            break;
        }
        if (miles == 0) break;
        cout << "\nDistance is " << convert(miles) << " km.\n";
        count++;
    }

    cout << "\nYou entered " << count << " valid distance(s).\n";
    return 0;
}
