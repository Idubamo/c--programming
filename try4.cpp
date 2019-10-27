/*  program for best fit algorithm in c++ */
#include <iostream>
using namespace std;

int main()
{
    int fragment[20], b[20], p[20], i, j, nb;
    int np, temp, lowest = 9999;
    static int barray[20], parray[20];
    cout << "\n\t\t\tMemory management scheme-Best Fit";
    cout << "\n Enter the number of blocks:";
    cin >> nb;
    cout << "\nEnter the number of blocks:";
    cin >> np;

    cout << "\nEnter the size of blocks:-\n";
    for (i = 1; i <= nb; i++)
    {
        cout << "Block No." << i << ":";
        cin >> b[i];
    }
    cout << "\nEnter the number of processes:-\n";
    for (j = 1; j <= np; j++)
    {
        cout << "process no." << j << ":";
        cin >> p[i];
    }
    for (i = 1; i <= np; i++)
    {
        for (j = 1; j <= nb; j++)
        {
            if (barray[j] != 1)
            {
                temp = b[j] - p[i];
                if (temp >= 0)
                    if (lowest > temp)
                    {
                        parray[i] = j;
                        lowest = temp;
                    }
            }
        }
        fragment[i] = lowest;
        barray[parray[i]] = 1;
        lowest = 10000;
    }
    cout << "\nProcess_no\tProcess_size\tBlock_ no\tBlock_size\tFragment";
    cout << "\n"
         << i << "\t\t" << p[i] << "\t\t" << parray[i] << "\t\t" << b[parray[i]] << "\t\t" << fragment[i];

    return 0;
}