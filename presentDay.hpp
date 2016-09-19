/***********************************************************
 **CLASS:            PRESENTDAY
 **
 **DESCRIPTION:      HPP FILE
 **
 **A derived class of the Era class.  PresentDay has a message
 **displaying that the player is in the future and that he 
 **has won.  
 ***********************************************************/

#ifndef PRESENTDAY_hpp
#define PRESENTDAY_hpp
#include <iostream>
#include <string>
#include <cstdlib>
#include "Era.hpp"
using namespace std;

class PresentDay:public Era
{
private:
    
public:
    PresentDay();
    PresentDay(string, Era *&, Era *&, Era *&, Era *&);
    ~PresentDay();
    
    /*
     **VIRTUAL METHODS
     */
    virtual void message();
    virtual bool lyric();
    virtual string collect();
    virtual void song();
    
};
#endif
