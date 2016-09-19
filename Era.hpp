/***********************************************************
 **CLASS:            ERA
 **
 **DESCRIPTION:      HPP FILE
 **
 **The base/parent (abstract) class.  Contains data members
 **and functions, including 4 virtual functions.
 ***********************************************************/

#ifndef ERA_hpp
#define ERA_hpp
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Era
{
protected:
    string year;
    Era * forward;
    Era * backward;
    Era * itself;
    Era * secretPassage;
    
public:
    Era();                                          //Constructor
    Era(string, Era *&, Era *&, Era *&, Era *&);    //Constructor with parameters
    virtual ~Era() = 0;                             //Destructor
    
    void setDoors(Era *&, Era *&, Era *&, Era *&);
    
    Era * getForward();
    Era * getBackward();
    Era * getItself();
    Era * getSecret();
    
    string getYear();
    
    void setForward(Era *);
    void setBackward(Era *);
    void setItself(Era *);
    void setSecret(Era *);
    
    void setYear(string);
    
    //PURE VIRTUAL FUNCTIONS
    virtual void message() = 0;
    virtual bool lyric() = 0;
    virtual string collect() = 0;
    virtual void song() = 0;
    
};
#endif

