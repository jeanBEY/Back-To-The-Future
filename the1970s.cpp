/***********************************************************
 **CLASS:            THE1970S
 **
 **DESCRIPTION:      CPP FILE
 **
 **A derived class of the Era class.  The1970s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#include "the1970s.hpp"

/*************************************************************
 **Function:        The1970s()
 **Description:     Constructor sets year to "1970s"
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1970s::The1970s(): Era() {
    year = "1970s";

}

/*************************************************************
 **Function:        The1970s(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods.
 **Parameters:      string (year), Era * & (forward),
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
The1970s::The1970s(string year, Era * &forw, Era * &back, Era * &it, Era * &secret): Era(year, forw, back, it, secret)
{
   //SETS INHERITED MEMBERS:)
}

/*************************************************************
 **Function:        ~The1970s()
 **Description:     Destructor deletes pointers forward,
 **backward, itself and secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1970s::~The1970s() {
    delete forward;
    delete backward;
    delete itself;
    delete secretPassage;
}

/*************************************************************
 **Function:        message()
 **Description:     Displays message from the 1970s, describing
 **this era
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1970s::message() {
    
    cout << "You are in the decade of the..." << this->year <<endl;
    cout << "You've entered the world of lava lamps, disco, mood rings, " <<endl;
    cout << "polyester, and Zeppelin!" <<endl <<endl;
    
}

/*************************************************************
 **Function:        lyric()
 **Description:     Allows user to guess correct lyric of
 **a song from the 1970s.  If they guess correct, function
 **returns true, else it returns false.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool The1970s::lyric() {
    
    bool guessedCorrect = false;
    int guess;
    
    cout << "In order to collect an item you need to guess the correct lyric" <<endl;
    cout << "We'll use a famous song from the 70's" <<endl <<endl;
    cout << "'Go on now go walk out the door, just turn around now" <<endl;
    cout << "Cause you're not welcome anymore, " <<endl;
    cout << "Weren't you the one who tried to hurt me with goodbye, did you think I'd crumble" <<endl;
    cout << "Did you think I'd lay down and die, Oh no not I" <<endl;
    cout << "I will ______________, " <<endl;
    cout << "Oh as long as I know how to love I know I'll stay alive" <<endl;
    cout << "I've got all my life to live, I've got all my love to give and I'll __________" <<endl;
    cout << "I will __________ (hey-hey)" <<endl <<endl;
    
    cout << "Please enter your choice: " <<endl;
    cout << "1. survive" <<endl;
    cout << "2. die" <<endl;
    cout << "3. crumble" <<endl;
    cin >> guess;
    cin.ignore();
    
    if(guess == 1) {
        guessedCorrect = true;
        cout << "You guessed correct!" <<endl;
        return true;
    }
    else {
        cout << "Incorrect.  Try again..." <<endl;
        return guessedCorrect;
    }
}

/*************************************************************
 **Function:        collect()
 **Description:     Uses random generator to pick an item that
 **the user can collect if they wish
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
string The1970s::collect() {
    
    string item;
    int type;
    type = rand()%8 + 1;
    if(type ==1) {
        item = "Mom";
    }
    else if(type ==2) {
        item = "Dad";
    }
    else if(type ==3) {
        item = "Prom_Tickets";
    }
    else if(type ==4) {
        item = "Hoverboard";
    }
    else if(type ==5) {
        item = "Clock";
    }
    else if(type ==6) {
        item = "Doc";
    }
    else if(type ==7) {
        item = "Photograph";
    }
    else if(type ==8) {
        item = "Einstein";
    }
    
    return item;
}

/*************************************************************
 **Function:        song()
 **Description:     Dislpays lyrics to a famous song from the
 **1970s.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1970s::song(){
    
    cout << "Now let's play a song from this era and see if any sparks fly..." <<endl <<endl;
    cout << "'I, I'm so in love with you" << endl;
    cout << "Whatever you want to do, is alright with me" <<endl;
    cout << "Cause you make me feel so brand new, And I want to spend my life with you" <<endl;
    cout << "Since, since we've been together, loving you forever" <<endl;
    cout << "Is what I need, Let me be the one you come running to, " <<endl;
    cout << "I'll never be untrue." <<endl;
    cout << "Let's let's stay together!" <<endl;
    cout << "Lovin you whether, whether " <<endl;
    cout << "Time are good or bad, or happy or sad" <<endl <<endl;
    
}