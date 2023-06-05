#include <iostream>

using namespace std;

int reqNum();
int calcFactorial(int num);
void showFactorial(int num);

int num;

int main()
{   
    reqNum();
    calcFactorial(num);
    showFactorial(num);

    return 0;
}

int reqNum()
{
    cout << "Enter a number: ";
    cin >> num;

    return num;
}

int calcFactorial(int num)
{
    int factorial = 1;

    if (num > 0)
    {
        for (int i = num; i >= 1; i--)
        {
            factorial *= i;
        }
    }

    else if (num < 0)
    {   
        factorial = -1;
        
        for (int i = num; i <= -1; i++)
        {
            factorial *= i;
        }
    }
    
    return factorial;
}

void showFactorial(int num)
{
    int ans = calcFactorial(num);

    cout << "Factorial of " << num << " is: " << ans << endl;
}