#include <iostream>

using namespace std;

int reqNum();
void printNums();

int num;

int main()
{
    reqNum();
    printNums();

    return 0;
}

int reqNum()
{
    cout << "Enter a number: ";
    cin >> num;

    return num;
}

void printNums()
{
    if (num == 0)
    {
        cout<<num<< " es un numero neutro"<<endl;
    } else
    {
        for (int i = 0; i <= num; i++)
        {
            if (i % 2 == 0)
            {
                cout << "\nPair number: \n";
                cout << i << endl;
            }
            
            if (i % 2 != 0)
            {
                cout<<"\nUnpair number: \n";
                cout<<i<<endl;
            }
        }
    }
}