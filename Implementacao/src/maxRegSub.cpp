#include "somas.hpp"
#include "maxCrossSub.hpp"

Somas findMaxSubarray(double nShows[], int low, int high)
{

  Somas esquerda, direita, mid;

  int aux = (low + high) / 2; // meio do vetor

  //Caso o vetor tenha apenas um elemento
  if (low == high)
  {

    esquerda = {low, high, nShows[low]};
    return esquerda;
  }
  else
  {

    esquerda = findMaxSubarray(nShows, low, aux);
    direita = findMaxSubarray(nShows, aux + 1, high);
    mid = findMaxCrossingSubarray(nShows, low, aux, high);

    if (esquerda.somaDirEsq >= direita.somaDirEsq && esquerda.somaDirEsq >= mid.somaDirEsq)
      return esquerda;

    if (direita.somaDirEsq >= esquerda.somaDirEsq && direita.somaDirEsq >= mid.somaDirEsq)
      return direita;

    else
      return mid;
  }
}
