/*
    time complexity: O(n^3) 
*/
#include <iostream>
using namespace std;

int main()
{
    int elementNumber;
    cout << "Enter number of element in array: ";
    cin >> elementNumber;

    int array[elementNumber];

    for (int i; i < elementNumber; i++)
    {
        cout << "Enter value of each element in array: ";
        cin >> array[i];
    }
    int best = 0;
    for (int a = 0; a < elementNumber; a++)
    {
        int sum = 0;
        for (int b = a; b < elementNumber; b++)
        {
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
}