#ifndef MEMORY_H
#define MEMORY_H

#include<QString>
#include<QList>
#include "entity.h"

class Memory
{
private:
    QList<Entity> mem;
public:
    Memory(QList<Entity> holes);
    void remove_entity(QString s);
   //-------


};

#endif // MEMORY_H
