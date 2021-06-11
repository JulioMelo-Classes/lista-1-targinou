/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n;
    
    while((cin >> std::ws >> m) && (cin >> std::ws >> n)) {
        int result = 0;

        if(n > 0)
        {
        
            for (int i = 0; i < n; i++)
            {
                result = result + m;
                m++;
            }
        }
        else if(n < 0)
        {
            for (int i = 0; i > n; i--)
            {
                result = result + m;
                m--;
            }
        }
        else
        {
            result = m;
        }

        cout << result << "\n";
    }

    return 0;
}
