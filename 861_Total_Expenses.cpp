#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int quantity, price;
        cin >> quantity >> price;

        int total = quantity * price;
        double new_price;

        if(quantity > 1000)
        {
            new_price = total - (0.1 * total);
        }
        else
        {
            new_price = total;
        }

        cout << fixed << setprecision(6) << new_price << endl;
    }

    return 0;
}