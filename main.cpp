/************************************************************
* programa : exercicio5
*
* autor : Luciano H Barroqueiro  dt 31/05/2016
*
* objetivo : decodificar o enunciado e assim apresentar todos os primos de 1 a 100
*
*
*************************************************************/


#include <iostream>
#include <stdio.h>

using namespace std;
bool verPrimo(int n) {
    int i, flag = 0;
    for(i=2;i<=n/2;++i)
          {
              if(n%i==0)
              {
                  flag=1;
                  break;
              }
          }
    if (flag==0)
       return true;
    else
       return false;
}

int main()
{
    char bytes[] = { 112, 114, 111, 118, 97, 58, 32, 116, 114, 97, 122, 101, 114, 32,
                        97, 108, 103, 111, 114, 105, 116, 109, 111, 32, 113, 117, 101, 32,
                        105, 109, 112, 114, 105, 109, 105, 32, 116, 111, 100, 111, 115, 32,
                        111, 115, 32, 110, 117, 109, 101, 114, 111, 115, 32, 112, 114, 105,
                        109, 111, 115, 32, 101, 110, 116, 114, 101, 32, 48, 32, 101, 32, 49, 48, 48, 46};

/*

(F)  Full duplex communication is only possible due to the using of packet buffers.
(F)  Collisions are the consequence of long packets travelling from transmitter to receiver.
(V) The use of full-duplex switch instead of a half-duplex one prevents collisions.
(V) The packets move from the half-duplex link to the full-duplex link through the Rx and Tx buffers.
(V) In this system there are full-duplex switched communication links where transmitted and received data travel and are buffered by means of exclusive physical media (twisted wire pairs) and buffering devices.

*/

    printf("%s\n", bytes);

    int n =1;

    while(n<=100)
    {
     if(n > 1 ) {
        if(verPrimo(n))
           printf("\n%d", n);
     }
     n++;
    }

    return 0;
}
