#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    cout << "Enter a range of 2 numbers (2 - 10): ";
    int a, b;
    cin >> a >> b;
    srand(time(0)); //we set the seed at 0.
    for (int i = 1; i <= 10; i++) //sets 10 iterations.
    {
        int randomOne = rand() % (b - a + 1) + a; // sets first output per iteration.
        int randomTwo = rand() % (b - a + 1) + a; // sets second output per iteration.
        cout << "Your first random number is " << 
        randomOne << " and your second random number is " << 
        randomTwo << "." << endl;
    }
    return 0;
}
