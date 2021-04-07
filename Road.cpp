/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment:
 * description: 
 */

#include "Road.h"

Road::Road() : length(70)
{
    blocks = new char[length];
    
    clear();

}

Road::Road(int size) :
length(size > 0 ? size : 70)
{
    blocks = new char[length];
    
    clear();
}

Road::~Road()
{
    delete[] blocks;
    blocks = 0;
}

void Road::clear()
{
    for (int i = 0; i < length; i++)
        blocks[i] = ' ';
}

int Road::getLastBlock() const
{
    return length-1;
}

char* Road::toString() const
{
    return blocks;
}

void Road::mark(int idx, char ch)
{
    blocks[idx] = ch;
}


