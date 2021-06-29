/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().
/*ok*/
int main(void)
{
    // TODO: Adicione aqui a sua solução.
    int x;

    int totalNumbers = 0;
    double intervals[5] = {0,0,0,0,0};

    while( cin >> std::ws >> x) {

        totalNumbers++;

        if((0 <= x) && (x < 25)){
            intervals[0]++;
        }
        else if((25 <= x) && (x < 50)){
            intervals[1]++;
        }
        else if((50 <= x) && (x < 75)){
            intervals[2]++;
        }
        else if((75 <= x) && (x < 100)){
            intervals[3]++;
        }
        else{
            intervals[4]++;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        double result = (intervals[i]*100)/totalNumbers;  
        cout << std::setprecision(4) << result << "\n";
    }


    return 0;
}
