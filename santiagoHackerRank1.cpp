#include <iostream>
#include <string>
using namespace std;

#define k 5
#define cantidadDeArgumentos 6
int main ()
{
    int ar[cantidadDeArgumentos]={1,2,3,4,5,6};
    int result=0;

    for(int i=0; i<cantidadDeArgumentos; )
    {
        for(int j=++i; j<cantidadDeArgumentos;++j)
        {
            if((ar[i]+ar[j])%5==0)
            {
                result++;
            }
        }
    }
    cout<<result; 
}