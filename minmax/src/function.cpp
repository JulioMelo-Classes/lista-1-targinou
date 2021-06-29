#include "function.h"
#include <stdlib.h>
/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
ok
*/
std::pair<int,int> min_max( int V[], size_t n )
{
    int maior = V[0]; 
    int menor = V[0];
    int indexMaior = 0;
    int indexMenor = 0;

    if(n == 0)
    {
        indexMenor = -1;
        indexMaior = -1;
    }

    for (int i = 0; i < n; i++){
        if (V[i] >= maior){
            maior = V[i];
            indexMaior = i;
        } 
        if (V[i] < menor){
            menor = V[i];
            indexMenor = i;
        } 
    }
    
    return { indexMenor, indexMaior };
}
