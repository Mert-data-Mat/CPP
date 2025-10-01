//Converting to given code from C to C++
#include <iostream>

using namespace std; // With this we dont have the use it like std :: cout

const int N = 40;

inline void sum(int& p, int n, const vector<int>& d){for (int i = 0; i < n; ++i)  p += d[i]; } //i shortened the sum function turns out you can use the for loop like this !

int main()
{
    int i;
    int accum = 0;
    vector<int> data(N); // We are using vector instead of array

    for (i = 0; i < N; ++i)
    {
            data[i] = i; // Assigning the values to vector:
//            cout << data[i] << " is added. \n"; !Used this line for debugging. 
    }
    sum(accum, N, data); //Initalizing the function.
    cout << "Sum is " << accum << "\n" ;

    return 0;
}
