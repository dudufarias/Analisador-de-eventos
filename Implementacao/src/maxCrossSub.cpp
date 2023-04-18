#include "maxCrossSub.hpp"

Somas findMaxCrossingSubarray(double nShows[], int low, int mid, int high)
{

  double somaEsq = NEG_INF, soma = 0;
  int maxEsq = 0, maxDir = 0;

  //Loop para verificacao da parte esquerda do vetor
  for (int i = mid; i >= low; i--)
  {
    soma = soma + nShows[i];

    if (soma > somaEsq)
    {
      somaEsq = soma;
      maxEsq = i;
    }
  }

  double somaDir = NEG_INF;
  soma = 0;

  //Loop para verificacao da parte direita do vetor
  for (int j = mid + 1; j <= high; j++)
  {
    soma = soma + nShows[j];

    if (soma > somaDir)
    {
      somaDir = soma;
      maxDir = j;
    }
  }

  return {maxEsq, maxDir, (somaEsq + somaDir)};
}