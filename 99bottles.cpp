#include <iostream>

int main() {

  // Variable
  // sets int i to as variable outside of the loop.
  int i;
  
  // Decrement. Initialize at 5, as long as i is greater than five, take one away.
  for (int i = 5; i > 0; i--)
  {
      std::cout << i << " Bottles of Demonus on the wall.\n";
      std::cout << "Take one down and pass it around.\n";
      std::cout << i-1 << "bottles of demonus on the wall.\n";
  }
  
  // if i is 0, print this statement.
  if (i == 0){
        std::cout << "There are no more bottles of demonus left!\n";
      }  
}
