#include <stdlib.h>
#include <time.h>
#include <iostream.h>
#include <conio.h>
int main() {
      srand(time(0));
      int randnumber;
      randnumber = rand() % 1000 + 1;
      int guessno;
      clrscr();
      do {
	    cout << "Enter your guess: ";
	    cin >> guessno;
	    if (guessno < randnumber)
		  cout << "Your guess is less than the hidden number" << endl;
	    else if (guessno > randnumber)
		  cout << "Your guess is more than the hideen number" << endl;
	    else
		  cout << "Your guess is right!" << endl;
      } while (guessno != randnumber);
	system("PAUSE");

      return 0;

}
//I took help from the net for this program because the seed would take a specific value and not change it's value everytime
//To change that, it was said to use srand() function.
