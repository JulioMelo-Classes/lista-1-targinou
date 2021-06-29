/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.
/*boa!*/
int main(void)
{
    
    Ponto vertOne, vertTwo, p;

    while( cin >> std::ws >> vertOne.x) {
        cin >> vertOne.y >> vertTwo.x >> vertTwo.y >> p.x >> p.y;

        if ((vertOne.x == vertTwo.x) && (vertOne.y == vertTwo.y))
        {
            cout << "invalid" << std::endl;
        }
        else{
            pt_in_rect(vertOne, vertTwo, p);
        }


    }   


    return 0;
}
