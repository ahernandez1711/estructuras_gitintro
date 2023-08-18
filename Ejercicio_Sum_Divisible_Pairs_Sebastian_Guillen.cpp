//Ejercicio Divisible Sum Pairs Hackerrank

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[]={1,2,3,4,5,6};
    int k=5;
    int res=0;

    for (int iArray = 0; iArray < 6; iArray++)
    {
        for (int jArray = iArray+1; jArray<6; jArray++)
        {
            cout <<"[" <<ar[iArray] << "+" << ar[jArray] << "] = " << ar[iArray]+ar[jArray] << endl;

            if ((ar[iArray]+ar[jArray])%5==0)
            {
                res++;
            }
        }
    }
    cout << "En total hay " << res << " casos donde la suma de i y j es divisible por k" << endl;

}