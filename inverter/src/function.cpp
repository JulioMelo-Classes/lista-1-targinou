#include <array>
#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 70% tive que corrigir alguns erros de compilação, por exemplo o uso de "last" ao invés de "end", vou tirar pontos por isso
 */
template <size_t SIZE>
void reverse ( std::array <std::string, SIZE> &arr )
{
    auto first = arr.begin();
    auto last = arr.end();

    while( first != last and first != --last )
        std::iter_swap( first++, last );
}
