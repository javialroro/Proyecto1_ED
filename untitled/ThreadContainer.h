
#ifndef THREADCONTAINER_H
#define THREADCONTAINER_H

#include "QThreads.h" // Incluir los encabezados de los QThreads aquí

struct ThreadContainer {
    Balanceador* balanceadorThread;
    Fabrica* fabricaA;
    Fabrica* fabricaB;
    Fabrica* fabricaC;
    Fabrica* fabricaComodin;
    Alistador* alistador1;
    Alistador* alistador2;
    Alistador* alistador3;
    Alistador* alistador4;
    Alistador* alistador5;
    Alistador* alistador6;

    ThreadContainer(Balanceador* balanceador,
                    Fabrica* fabricaA,
                    Fabrica* fabricaB,
                    Fabrica* fabricaC,
                    Fabrica* fabricaComodin,
                    Alistador* alistador1,
                    Alistador* alistador2,
                    Alistador* alistador3,
                    Alistador* alistador4,
                    Alistador* alistador5,
                    Alistador* alistador6)
        : balanceadorThread(balanceador),
        fabricaA(fabricaA),
        fabricaB(fabricaB),
        fabricaC(fabricaC),
        fabricaComodin(fabricaComodin),
        alistador1(alistador1),
        alistador2(alistador2),
        alistador3(alistador3),
        alistador4(alistador4),
        alistador5(alistador5),
        alistador6(alistador6) {}

    void pausarBalanceador(){
        balanceadorThread->setPaused(!balanceadorThread->getPaused());
    }
};


#endif // THREADCONTAINER_H
