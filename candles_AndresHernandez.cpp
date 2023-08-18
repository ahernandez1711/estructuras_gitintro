#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int NumeroCandelas = 4;
    int arrCandelas [NumeroCandelas] = {3, 2, 1, 3};
    int CandelasAltas= 0;


    sort (arrCandelas, arrCandelas+4); //Sort para organizar el arreglo de manera descendiente. 
    int max = arrCandelas[NumeroCandelas-1]; //El arreglo esta ordenado de manera ascendiente (menor a mayor.) Se lee de manera descendiente 
    for (int k= NumeroCandelas-1 ; k >=0; k--) //(int k= NumeroCandelas ; k >=0; k--) para leer de manera descendiente 
    {                                          //Se lee de la posicion ultima del arreglo hasta la posicion [0] para buscar el mayor elemento 
        cout<<arrCandelas[k] << '-';
        if (arrCandelas[k] == max)
        {   
            CandelasAltas++; 
        }        
    }
 
    cout << "\nHay " << CandelasAltas << " candelas grandes "<< endl;    
    return 0;
}