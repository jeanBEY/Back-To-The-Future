/***********************************************************
 **CLASS:            THE1960S
 **
 **DESCRIPTION:      CPP FILE
 **
 **A derived class of the Era class.  The1960s has a message,
 **lyric and song from that decade.
 ***********************************************************/

#include "the1960s.hpp"

/*************************************************************
 **Function:        The1960s()
 **Description:     Constructor sets year to "1960s"
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1960s::The1960s(): Era() {
    year = "1960s";
}

/*************************************************************
 **Function:        The1960s(string, Era *&, Era *&, Era *&, Era *&)
 **Description:     Constructor uses parameters, sends them
 **to set methods.
 **Parameters:      string (year), Era * & (forward),
 **Era * & (backward), Era * & (itself), Era * & (secret)
 **Pre-Conditions:      N/A
 **Post-Conditions:     Era's 4 pointers will be assigned to
 **point to the Era's passed by reference
 *************************************************************/
The1960s::The1960s(string year, Era * &forw, Era * &back, Era * &it, Era * &secret): Era(year, forw, back, it, secret)
{
    //SETS INHERITED MEMBERS:)
}

/*************************************************************
 **Function:        ~The1960s()
 **Description:     Destructor deletes pointers forward,
 **backward, itself and secretPassage
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
The1960s::~The1960s() {
    delete forward;
    delete backward;
    delete itself;
    delete secretPassage;
}

/*************************************************************
 **Function:        message()
 **Description:     Displays message from the 1960s, describing
 **this era
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
void The1960s::message() {
    
    cout << "You are in the decade of the..." << this->year <<endl;
    cout << "You've entered the world of The Beatles, color tv's, eight-track stereos, " <<endl;
    cout << "bell-bottoms, free love and psychedelic rock!" <<endl <<endl;
    
}

/*************************************************************
 **Function:        lyric()
 **Description:     Allows user to guess correct lyric of
 **a song from the 1960s.  If they guess correct, function
 **returns true, else it returns false.
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 *************************************************************/
bool The1960s::lyric() {
    
    bool guessedCorrect = false;
    int guess;
    
    cout << "In order to collect an item you need to guess the correct lyric" <<endl;
    cout << "We'll use a famous song from the 60's" <<endl <<endl;
    cout << "'I've got sunshine on a cloudy day" <<endl;
    cout << "Cause you're not welcome anymore, " <<endl;
    cout << "When it's cold outside, I've got the month of May" <<endl;
    cout << "I guess you'd say, What can make me feel this way?" <<endl;
    cout << "My ________, my _________, my _________" <<endl;
    cout << "Talkin' bout my ___________" <<endl;
    cout << "My ___________" <<endl <<endl;
    
    cout << "Please enter your choice: " <<endl;
    cout << "1. boy" <<endl;
    cout << "2. child" <<endl;
    cout << "3. girl" <<endl;
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
string The1960s::collect() {
    
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
void The1960s::song(){
    
    cout << "Now let's play a song from this era and see if any sparks fly..." <<endl <<endl;
    cout << "'Help, I need somebody!" << endl;
    cout << "Help, not just anybody!" <<endl;
    cout << "Help, you know I need someone, Help!" <<endl;
    cout << "When I was younger, so much younger than today, " <<endl;
    cout << "I never needed anybody's help in any way." <<endl;
    cout << "But now these days are gone I'm not so self-assured" <<endl;
    cout << "Now I find I've changed my mind and opened up the doors." <<endl;
    cout << "Help me if you can, I'm feeling down" <<endl;
    cout << "And I do appreciate you being 'round" <<endl;
    cout << "Help me get my feet back on the ground" <<endl;
    cout << "Won't you please, please help me?" <<endl <<endl;
    
}