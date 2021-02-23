#include <iostream>
#include <cstdlib>
#include <stdlib.h>

// For now, this is purely psuedo-code to show that I am getting the hang of some things.
// I am going to make this work, I'm sure it's very bug ridden but I can definitely make the C# version of this.

void Greet() {
  std::cout << "=========================\n";
  std::cout << "Disorder: ~ ~ ~ ~ ~ ~ ~ ~\n";
  std::cout << "=========================\n";
  std::cout << "Coded by Datorien Anderson\n";
}

void StartOff(){
    std::cout << "I've been waiting for a guide to come and take my by the hand."\n;
}


// the meat of the program
double SpiritAndFeeling(double spirit, double feeling){

  double spirit;
  double feeling;
  std::vector <char> Yes = {'Y', 'y'};
  std::vector <char> No = {'N', 'n'};
  std::string inputA;
  
  
  // while spirit is greater than feeling, do this
  while (spirit > feeling){

    for (int i = 0; i < 5; i++){
      std::cout << "I've got the spirit.\n";
      std::cout << "But lose the feeling.\n"
    }
      std::cout << "Feeling, feeling, feeling.\n";
  }

    // while feeling is less than spirit do this
  while (feeling < spirit){
    for (int a = 0; a < 5; a++){
      std::cout << "I've got the feeling.\n";
      std::cout << "But lose the spirit\n";
    }

    std::cout << "Spirit, spirit, spirit.\n";
  }

    // if spirit and feeling are equal, do this
  if (Spirit == Feeling){
    std::cout << "It's stablized! Do you wish to exit?\n";
    std::cin >> inputA;

    // Control Flow -- size is a placeholder for if the char is equal to any char in the Yes Vector
    if (inputA == Yes.size()){
      // Quits the program in five seconds...
      if (int x = 5; x > 0; x--){
        std::cout << "Exiting Program in:" << " " << x << "\n";

        if (x =< 0) {
          // if local x is less than or equal to zero quit immediately
                exit();
        }
      }
    }
    else if (inputA == No.Size()){
      std::cout << "Dousing the mind...";
      double feeling = 25.0;
      double spirit = 50.0;
    }
    else{
      std::cout << "Invalid input.\n";
  }

}

int main(){
  using namespace std;

  // random integer is a number
  srand(time(NULL));
  int loseIt = std::rand() % 10;

  double chosenSpirit;
  double chosenFeeling;
  bool bGotNumbers = false;

  Greet();
  StartOff();

  // Enter a float
  std::cout << "Enter a float: \n";
  std::cin >> chosenSpirit;
  std::cout << "Enter a float, again: \n";
  std::cin >> chosenFeeling;
  bGotNumbers = true;

  // starts this as soon as the floats have been chosen. 
  if (bGotNumbers == true){
    SpiritAndFeeling(chosenSpirit, chosenFeeling);

  }





}
