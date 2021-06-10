#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int value;
    int count = 0;

    for(int n = 0; n < SIZE; n++){
        cin >> value;
        if(value < 0)
        {
            count++;
        }
    }        
    
    cout << count << "\n";
    return 0;
}
