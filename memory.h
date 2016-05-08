#ifndef MEMORY_H
#define MEMORY_H

#include<QString>
#include<QList>
#include "entity.h"


bool less_address(Entity a,Entity b);
bool max_size(Entity a,Entity b);
bool less_size(Entity a,Entity b);

class Memory
{

private:
   QList<Entity> mem;
public:
    void push_element(Entity x);
   // Memory(QList<Entity> holes);
    void remove_entity(QString s);
   //-------
    void reset();
    friend class Allocation;
    static QString print(Memory m);


};

#endif // MEMORY_H
