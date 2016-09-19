/***********************************************************
 **CLASS:            THE1950S
 **
 **DESCRIPTION:      CPP FILE
 **
 **A derived class of the Era class.  The1950s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#include "the1950s.hpp"

/*************************************************************
 **Function:        The1950s()
 **Description:     Constructor sets year to "1950s"
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1950s::The1950s(): Era() {
    year = "1950s";
}

/*************************************************************
 **Function:        The1950s(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods.
 **Parameters:      string (year), Era * & (forward),
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
The1950s::The1950s(string year, Era * &forw, Era * &back, Era * &it, Era * &secret): Era(year, forw, back, it, secret)
{
    //SETS INHERITED MEMBERS :)
}

/*************************************************************
 **Function:        ~The1950s()
 **Description:     Destructor deletes pointers forward,
 **backward, itself and secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1950s::~The1950s() {
    delete forward;
    delete backward;
    delete itself;
    delete secretPassage;
}

/*************************************************************
 **Function:        message()
 **Description:     Displays message from the 1950s, describing
 **this era
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1950s::message() {
    
    cout << "You are in the decade of the..." << this->year <<endl;
    cout << "You've entered the world of Buddy Holly, Marilyn Monroe, Elvis 'The King' Presley, " <<endl;
    cout << "and 'I Love Lucy'!" <<endl <<endl;
    
}

/*************************************************************
 **Function:        lyric()
 **Description:     Allows user to guess correct lyric of
 **a song from the 1950s.  If they guess correct, function
 **returns true, else it returns false.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool The1950s::lyric() {
    
    bool guessedCorrect = false;
    int guess;
    
    cout << "In order to collect an item you need to guess the correct lyric" <<endl;
    cout << "We'll use a famous song from the 50's" <<endl <<endl;
    cout << "'Mr. Sandman, bring me a dream (bum, bum, bum, bum)" <<endl;
    cout << "Make him the cutest that I've ever seen (bum, bum, bum, bum)" <<endl;
    cout << "Give him two lips like roses and clover (bum, bum, bum, bum)" <<endl;
    cout << "Then tell him that his lonesome nights are over" <<endl;
    cout << "Mr. Sandman bring me a __________" <<endl <<endl;
    
    cout << "Please enter your choice: " <<endl;
    cout << "1. boy" <<endl;
    cout << "2. dream" <<endl;
    cout << "3. girl" <<endl;
    cin >> guess;
    cin.ignore();
    
    if(guess == 2) {
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
string The1950s::collect() {
    
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
 **1960s.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1950s::song(){
    
    cout << "Now let's play a song from this era and see if any sparks fly..." <<endl <<endl;
    cout << "'Earth Angel, Earth Angel, Will you be mine?" << endl;
    cout << "My darling dear, Love you all the time." <<endl;
    cout << "I'm just a fool, " <<endl;
    cout << "A fool in love with you!" <<endl;
    cout << "'Earth Angel, Earth Angel, The one I adore, " << endl;
    cout << "Love you forever and evermore." <<endl;
    cout << "I'm just a fool, " <<endl;
    cout << "A fool in love with you!" <<endl <<endl;
    
}