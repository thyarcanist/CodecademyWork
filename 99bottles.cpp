#include <iostream>

int main() {

  // Variable
  // sets int i to as variable outside of the loop.
  int i;
  
  // Decrement. Initialize at 5, as long as i is greater than five, take one away.
  for (int i = 10; i > 0; i--)
  {
      std::cout << i << " Bottles of Demonus on the wall.\n";
      std::cout << "Take one down and pass it around.\n";
      std::cout << i-1 << " bottles of demonus on the wall.\n\n";
    // \n\n creates a space inbetween the lines so it isn't cluttered.
  }
  
  // if i is 0, print this statement.
  if (i == 0){
        std::cout << "There are no more bottles of demonus left!\n";
        std::cout << "There are no more bottles left!\n"
        std::cout << "Go to Akuzon! Buy some more, 10 bottles of demonus to go!\n\n"
      }  
}
