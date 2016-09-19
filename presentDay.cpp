/***********************************************************
 **CLASS:            PRESENTDAY
 **
 **DESCRIPTION:      CPP FILE
 **
 **A derived class of the Era class.  PresentDay has a message
 **displaying that the player is in the future and that he
 **has won.
 ***********************************************************/

#include "presentDay.hpp"

/*************************************************************
 **Function:        The1950s()
 **Description:     Constructor sets year to "FUTURE"
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
PresentDay::PresentDay(): Era() {
    year = "FUTURE";
}

/*************************************************************
 **Function:        PresentDay(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods. 
 **Parameters:      string (year), Era * & (forward),
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
PresentDay::PresentDay(string year, Era * &forw, Era * &back, Era * &it, Era * &secret): Era(year, forw, back, it, secret)
{
    //SETS INHERITED MEMBERS :)
}

/*************************************************************
 **Function:        ~PresentDay()
 **Description:     Destructor deletes pointers forward,
 **backward, itself and secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
PresentDay::~PresentDay() {
    delete forward;
    delete backward;
    delete itself;
    delete secretPassage;
}

/*************************************************************
 **Function:        message()
 **Description:     Displays message from the FUTURE.  This is
 **the goal of the game for the player to end up here.  The
 **message of this Era congratulates the player.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void PresentDay::message() {
    
    cout << "You are in the decade of the..." << this->year <<endl <<endl;
    cout << "Great Scott!  You did it!" <<endl <<endl;
    cout << "********CONGRATULATIONS MARTY MCFLY!**********" <<endl;
    cout << "You travelled through decades in the " <<endl;
    cout << "DeLorean, back in time, and got your parents to get together!" <<endl <<endl;
    cout << "You are now BACK TO THE FUTURE!" <<endl;
    
}

/*************************************************************
 **Function:        lyric()
 **Description:     Returns true.  User does not need to guess
 **lyric in this Era since this is end of the game. 
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool PresentDay::lyric() {
    
    bool guessedCorrect = true;
    return guessedCorrect;
    
}

/*************************************************************
 **Function:        collect()
 **Description:     Returns " ".  User does not need to collect
 **item in this Era since this is the end of the game.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
string PresentDay::collect() {
    
    string item = " ";
    return item;
}

/*************************************************************
 **Function:        song()
 **Description:     No song to display since this is the end
 **of the game. 
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void PresentDay::song(){
    
}