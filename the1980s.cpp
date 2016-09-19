/***********************************************************
 **CLASS:            THE1980S
 **
 **DESCRIPTION:      CPP FILE
 **
 **A derived class of the Era class.  The1980s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#include "the1980s.hpp"

/*************************************************************
 **Function:        The1980s()
 **Description:     Constructor sets year to "1980s"
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1980s::The1980s(): Era() {
    year = "1980s";
}

/*************************************************************
 **Function:        The1980s(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods.
 **Parameters:      string (year), Era * & (forward),
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
The1980s::The1980s(string year, Era * &forw, Era * &back, Era * &it, Era * &secret): Era(year, forw, back, it, secret)
{
    //SETS INHERITED MEMBERS:)
}

/*************************************************************
 **Function:        ~The1980s()
 **Description:     Destructor deletes pointers forward,
 **backward, itself and secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1980s::~The1980s() {
    delete forward;
    delete backward;
    delete itself;
    delete secretPassage;
}

/*************************************************************
 **Function:        message()
 **Description:     Displays message from the 1980s, describing
 **this era
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1980s::message() {
    
    cout << "You are in the decade of the..." << this->year <<endl;
    cout << "You've entered the world of Michael Jackson, Madonna, acid-washed jeans, " <<endl;
    cout << "members-only jackets, hairbands and neon everything!" <<endl <<endl;
    
}

/*************************************************************
 **Function:        lyric()
 **Description:     Allows user to guess correct lyric of
 **a song from the 1980s.  If they guess correct, function
 **returns true, else it returns false.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool The1980s::lyric() {
    
    bool guessedCorrect = false;
    int guess;
    
    cout << "In order to collect an item you need to guess the correct lyric" <<endl;
    cout << "We'll use a famous song from the 80's" <<endl <<endl;
    cout << "'Just _____ it, _____ it, _____ it, _____ it, " <<endl;
    cout << "No one wants to be defeated" <<endl;
    cout << "Shwoin' how funky strong is your fight" <<endl;
    cout << "It doesn't matter who's wrong or right" <<endl;
    cout << "Just _____ it!'" <<endl <<endl;
    
    cout << "Please enter your choice: " <<endl;
    cout << "1. take" <<endl;
    cout << "2. beat" <<endl;
    cout << "3. love" <<endl;
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
string The1980s::collect() {
    
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
 **1980s.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1980s::song(){
    
    cout << "Now let's play a song from this era and see if any sparks fly..." <<endl <<endl;
    cout << "'Just a small town girl, livin' in a lonely world," << endl;
    cout << "She took the midnight train goin' anywhere" <<endl;
    cout << "Just a city boy, born and raised in South Detroit" <<endl;
    cout << "He took the midnight train goin' anywhere..." <<endl <<endl;
    cout << "Don't stop believin', hold on to that feelin" <<endl;
    cout << "Streetlight people, don't stop believin'!'" <<endl <<endl;
    
}