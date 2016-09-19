/***********************************************************
 **CLASS:            THE1970S
 **
 **DESCRIPTION:      HPP FILE
 **
 **A derived class of the Era class.  The1970s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#ifndef THE1970S_hpp
#define THE1970S_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include "Era.hpp"
using namespace std;

class The1970s:public Era
{
private:
    
public:
    The1970s();
    The1970s(string, Era *&, Era *&, Era *&, Era *&);
    ~The1970s();
    
    /*
     **VIRTUAL METHODS
     */
    virtual void message();
    virtual bool lyric();
    virtual string collect();
    virtual void song();
    
};
#endif
