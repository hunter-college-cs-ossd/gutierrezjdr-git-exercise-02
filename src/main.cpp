/******************************************************************************
  Title          : main.cpp
  Author         : Jessica Gutierrez
  Created on     : October  16, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  :
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be
  named
       username_oddity

  where username is the GitHub username of its author.
  For example,
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory

******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.

typedef ostream& (*output_function) (const ostream & out);
ostream&intro_oddity ( ostream & out);
ostream&gutierrezjdr_oddity ( ostream & out);
ostream& johncgenere_oddity(ostream &out);
ostream& chocolate_spaghet_oddity(ostream &out);

/******************************************************************************

                        All Function Definitions

******************************************************************************/



int main(int argc, char* argv[] )
{

	
  // Calls to output functions
	intro_oddity(cout);
	gutierrezjdr_oddity(cout);
	johncgenere_oddity(cout);
    chocolate_spaghet_oddity(cout);
	
    return 0;
}


ostream&intro_oddity (ostream & out)
{
	out<<"This is a collection of strange but true facts."<<endl;
	
	return out;
} 

ostream&gutierrezjdr_oddity (ostream & out)
{
	out<<"Why do they put Braille dots on the keypad of the drive-up ATM?"<<endl;
	
	return out;
} 

ostream& johncgenere_oddity(ostream &out){
    out << "Why do we drive on parkways and park on driveways?" << endl;
    return out;
}

ostream& chocolate_spaghet_oddity(ostream &out){
    out << "If you're in a vehicle going the speed of light, what happens when you turn on the headlights?" << endl;
    return out;
}
