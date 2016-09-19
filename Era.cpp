/***********************************************************
 **CLASS:            ERA
 **
 **DESCRIPTION:      CPP FILE
 **
 **The base/parent (abstract) class.  Contains data members
 **and functions, including 4 virtual functions.
 ***********************************************************/

#include "Era.hpp"

/*************************************************************
 **Function:        Era()
 **Description:     Constructor(EMPTY)
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era::Era() {
    
}

/*************************************************************
 **Function:        Era(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods.
 **Parameters:      string (year), Era * & (forward), 
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
Era::Era(string year, Era * &forward, Era * &backward, Era * &itself, Era * &secret) {
    
    setYear(year);
    setForward(forward);
    setBackward(backward);
    setItself(itself);
    setSecret(secret);
}

/*************************************************************
 **Function:        ~Era()
 **Description:     Destructor(EMPTY)
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era::~Era() {

}

/*************************************************************
 **Function:        setDoors(Era *&, Era *&, Era *&, Era *&)
 **Description:     Assigns the pointers within an Era to 
 **point to the Era's passed by reference.
 **Parameters:      Era * & (forward), Era * & (backward), 
 **Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Era::setDoors(Era *& a, Era *& b, Era *& c, Era *& d) {

    setForward(a);
    setBackward(b);
    setItself(c);
    setSecret(d);
}

/*************************************************************
 **Function:        getForward()
 **Description:     Returns forward
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era * Era::getForward() {

    return forward;
}

/*************************************************************
 **Function:        getBackward()
 **Description:     Returns backward
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era * Era::getBackward() {
    
    return backward;
}

/*************************************************************
 **Function:        getItself()
 **Description:     Returns itself
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era * Era::getItself() {

    return itself;
}

/*************************************************************
 **Function:        getSecret()
 **Description:     Returns secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
Era * Era::getSecret() {
    
    return secretPassage;
}

/*************************************************************
 **Function:        getYear()
 **Description:     Returns year
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
string Era::getYear() {

    return year;
}

/*************************************************************
 **Function:        setForward(Era *)
 **Description:     Sets the forward pointer to point to Era
 **passed by value
 **Parameters:      Era * (the Era forward will now point to)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Era::setForward(Era * forw) {
    
    forward = forw;
}

/*************************************************************
 **Function:        setBackward(Era *)
 **Description:     Sets the backward pointer to point to Era
 **passed by value
 **Parameters:      Era * (the Era backward will now point to)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Era::setBackward(Era * back) {
    
    backward = back;
}

/*************************************************************
 **Function:        setItself(Era *)
 **Description:     Sets the itself pointer to point to Era
 **passed by value
 **Parameters:      Era * (the Era itself will now point to)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Era::setItself(Era * it) {

    itself = it;
}

/*************************************************************
 **Function:        setSecret(Era *)
 **Description:     Sets the secretPassage pointer to point to 
 **Era passed by value
 **Parameters:      Era * (the Era secretPassage will now point to)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Era::setSecret(Era * secret) {
    
    secretPassage = secret;
}

/*************************************************************
 **Function:        setYear(string)
 **Description:     Sets the year
 **Parameters:      String (year)
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void Era::setYear(string yr) {

    year = yr;
}



