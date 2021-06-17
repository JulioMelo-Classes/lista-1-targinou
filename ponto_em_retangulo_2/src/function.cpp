#include "function.h"
#include <iostream>
using std::cout;

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if(((P.x == IE.x) || (P.x == SD.x)) && ((P.y >= IE.y) && (P.y <= SD.y))){
        cout << "border" << std::endl;
        return location_t::BORDER;
    }
    else if(((P.y == IE.y) || (P.y == SD.y)) && ((P.x <= SD.x) && (P.x >= IE.x))){
        cout << "border" << std::endl;
        return location_t::BORDER;
    }
    else if((P.x > SD.x) || (P.x < IE.x) || (P.y > SD.y) || (P.y < IE.y)){
        cout << "outside" << std::endl;
        return location_t::OUTSIDE;
    }
    else{
        cout << "inside" << std::endl;
        return location_t::INSIDE;
    }

}
