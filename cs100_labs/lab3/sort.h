#ifndef __SORT_H__
#define __SORT_H__

#include "container.h"

class Sort 
{
    
public:
/* Constructors */
Sort();

/* Pure Virtual Functions */
virtual void sort(Container* container) = 0;

};

#endif //__SORT_H__