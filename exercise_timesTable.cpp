#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y, start, end, product;

    cout << "Enter start value. ";
    cin >> start;

    cout << "Enter end value. ";
    cin >> end;

    cout << " " << endl;
    cout << " \t " << "  Multiplication Table" << endl;
    cout << "  | ";

    for (x = 1; x <= 12; x++)
    {
        cout << setw(4) << x;
    }

    cout << endl;
    cout << "--------------------------------------------------------\n";

   for (x = start; x <= end; x++)
    {
        cout << x << " | ";
        for (y = 1; y <= 12; y++)
        {
            cout << setw(4) << x*y;
        }

        cout << endl;

    }

    return 0;
}
