/***********************************************************
 **CLASS:            THE1990S
 **
 **DESCRIPTION:      HPP FILE
 **
 **A derived class of the Era class.  The1990s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#ifndef THE1990S_hpp
#define THE1990S_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include "Era.hpp"
using namespace std;

class The1990s:public Era
{
private:
    
public:
    The1990s();
    The1990s(string, Era *&, Era *&, Era *&, Era *&);
    ~The1990s();
    
    /*
    **VIRTUAL METHODS
    */
    virtual void message();
    virtual bool lyric();
    virtual string collect();
    virtual void song();
    
};
#endif
