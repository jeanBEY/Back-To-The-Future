/***********************************************************
 **CLASS:            THE1980S
 **
 **DESCRIPTION:      HPP FILE
 **
 **A derived class of the Era class.  The1980s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#ifndef THE1980S_hpp
#define THE1980S_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include "Era.hpp"
using namespace std;

class The1980s:public Era
{
private:
    
public:
    The1980s();                                         
    The1980s(string, Era *&, Era *&, Era *&, Era *&);
    ~The1980s();
    
    /*
     **VIRTUAL METHODS
     */
    virtual void message();
    virtual bool lyric();
    virtual string collect();
    virtual void song();
    
};
#endif
