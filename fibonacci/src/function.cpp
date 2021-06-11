#include "function.h"


std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> sequence;

    if(n > 1){
        
        for (int i = 0; i < 2; i++)
        {
            sequence.push_back(1);
        }
        
        int lastValue = 1;
        int penultValue = 1;
        int aux = 0;

        while (true)
        {
            
            if (lastValue > n)
            {  
                sequence.erase(sequence.end()-1);
                return sequence;
            }
            else if (lastValue == n)
            {
                sequence.erase(sequence.end()-1);
                return sequence;
            }
            else{
                sequence.push_back(lastValue + penultValue);
                aux = lastValue;
                lastValue = lastValue + penultValue;
                penultValue = aux;
            }
            
        }
    }
}
