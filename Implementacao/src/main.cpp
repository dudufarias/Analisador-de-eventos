#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <cstring>
#include <sstream>
#include "maxCrossSub.hpp"
#include "maxRegSub.hpp"
#include "msgassert.h"

using namespace std;

int main()
{

  int nAmigos = 0, nShows = 0;

  // Leitura primeira linha da rodada
  cin >> nAmigos >> nShows;

  while (nAmigos != 0 && nShows != 0)
  {
    erroAssert((nAmigos >= 1) && (nAmigos <= 50), "Entrada fora dos padroes estipulados");
    erroAssert((nShows >= 1) && (nShows <= 100000), "Entrada fora dos padroes estipulados");
    
    double aux; //Auxiliar de armaz. das variaveis
    double notaFinalShow[nShows+1]; //Vetor para armazenar notas

    // Zera a nota final de cada show
    for (int i = 1; i <= nShows; i++)
    {
      notaFinalShow[i] = 0;
    }

    // Laço para armazenamento das notas
    for (int i = 1; i <= nAmigos; i++)
    {
      for (int j = 1; j <= nShows; j++)
      {
        cin >> aux;
        erroAssert((aux >= -5) && (aux <= 5), "Entrada fora dos padroes estipulados");
        notaFinalShow[j] += aux;
      }
    }

    //Variavel auxiliar para armazenar o result
    Somas resultado; 

    resultado = findMaxSubarray(notaFinalShow, 1, nShows);

    //Impressao dos resultados
    cout << resultado.maxEsq  << " " << resultado.maxDir  << endl;

    cin >> nAmigos >> nShows;
  }
}
