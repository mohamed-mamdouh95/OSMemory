#ifndef ALLOCATION_H
#define ALLOCATION_H

#include<QList>
#include "memory.h"
#include "entity.h"

class Allocation
{
public:
    static void FirstFit(Memory &m,Entity x);
   static  void BestFit(Memory &m,Entity x );
    static void WorstFit(Memory &m,Entity x);
};
#endif // ALLOCATION_H
