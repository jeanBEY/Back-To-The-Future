/***********************************************************
 **CLASS:            THE1950S
 **
 **DESCRIPTION:      HPP FILE
 **
 **A derived class of the Era class.  The1950s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#ifndef THE1950S_hpp
#define THE1950S_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include "Era.hpp"
using namespace std;

class The1950s:public Era
{
private:
    
public:
    The1950s();
    The1950s(string, Era *&, Era *&, Era *&, Era *&);
    ~The1950s();
    
    /*
     **VIRTUAL METHODS
     */
    virtual void message();
    virtual bool lyric();
    virtual string collect();
    virtual void song();
    
};
#endif
