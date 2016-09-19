/***********************************************************
 **CLASS:            THE1990S
 **
 **DESCRIPTION:      CPP FILE
 **
 **A derived class of the Era class.  The1990s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#include "the1990s.hpp"

/*************************************************************
 **Function:        The1990s()
 **Description:     Constructor sets year to "1990s"
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1990s::The1990s(): Era() {
    year = "1990s";
}

/*************************************************************
 **Function:        The1990s(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods.
 **Parameters:      string (year), Era * & (forward),
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
The1990s::The1990s(string year, Era * &forw, Era * &back, Era * &it, Era * &secret): Era(year, forw, back, it, secret)
{
    //SETS INHERITED MEMBERS:)
}

/*************************************************************
 **Function:        ~The1990s()
 **Description:     Destructor deletes pointers forward,
 **backward, itself and secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1990s::~The1990s() {
    delete forward;
    delete backward;
    delete itself;
    delete secretPassage;
}

/*************************************************************
 **Function:        message()
 **Description:     Displays message from the 1990s, describing
 **this era
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1990s::message() {

    cout << "You are in the decade of the..." << this->year <<endl;
    cout << "Plaid, windbreakers, boy bands, the term 'wassup', & Saved by the Bell gallore!" <<endl <<endl;

}

/*************************************************************
 **Function:        lyric()
 **Description:     Allows user to guess correct lyric of
 **a song from the 1990s.  If they guess correct, function 
 **returns true, else it returns false.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool The1990s::lyric() {

    bool guessedCorrect = false;
    int guess;
    
    cout << "In order to collect an item you need to guess the correct lyric" <<endl;
    cout << "We'll use a famous song from the 90's" <<endl <<endl;
    cout << "'My loneliness is killing me(and I), I must confess, " <<endl;
    cout << "I still believe(still believe)!" <<endl;
    cout << "When I'm not with you I lose my mind, give me a sign, " <<endl;
    cout << "hit me _______ one more time" <<endl <<endl;
    
    cout << "Please enter your choice: " <<endl;
    cout << "1. love" <<endl;
    cout << "2. again" <<endl;
    cout << "3. baby" <<endl;
    cin >> guess;
    cin.ignore();
    
    if(guess == 3) {
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
string The1990s::collect() {

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
 **1990s.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1990s::song(){
    
    cout << "Now let's play a song from this era and see if any sparks fly..." <<endl <<endl;
    cout << "Tell me why, ain't nothin' but a heartache" << endl;
    cout << "Tell me why, ain't nothin' but a mistake" <<endl;
    cout << "Tell me why, I never want to hear you say" <<endl;
    cout << "I want it that way!" <<endl <<endl;
    
}



