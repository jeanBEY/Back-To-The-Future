/***********************************************************
 **CLASS:            THE1960S
 **
 **DESCRIPTION:      HPP FILE
 **
 **A derived class of the Era class.  The1960s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#ifndef THE1960S_hpp
#define THE1960S_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include "Era.hpp"
using namespace std;

class The1960s:public Era
{
private:
    
public:
    The1960s();
    The1960s(string, Era *&, Era *&, Era *&, Era *&);
    ~The1960s();
    
    /*
     **VIRTUAL METHODS
     */
    virtual void message();
    virtual bool lyric();
    virtual string collect();
    virtual void song();
    
};
#endif
