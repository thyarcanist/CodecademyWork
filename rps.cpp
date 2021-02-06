#include <iostream>
#include <cstdlib>
#include <string>

int main(){

  // Rock, Paper, Scissors, Lizard & Spock
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  int myComputer = rand() % 3 + 1;
  int choice; // used int because using char had an error
  bool bIsPassive = false;

  // Switch To User Input OR Switch To Random
  std::cout << "Do you wish to control your picks? 1/Yes or 2/No\n";
  std::cin >> choice;

  if (choice == 1 ){
    std::cout << "Control Gained...\n";
    bIsPassive = false;
  }
  else if (choice == 2 ){
    std::cout << "Control Restricted\n";
    bIsPassive = true;
  }
  else {
    std::cout << "Invalid input.\n";
  }
    // If The Player Controls The Input
  if (bIsPassive == false){

    // Logic:
    // Paper beats Rock.
    // Scissors beats paper.
    // Rock beats Scissors.

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
 
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
 
    // user input
    std::cout << "shoot! ";
    std::cin >> user;
    std::cout << "Computer: " << computer << "\n";

    // Win/Lose Logic
    if (user == 1 && computer == 1){
      std::cout << "Tie!";
    }
    else if (user == 1 && computer == 2){
      std::cout << "Computer Wins!";
    }
    else if (user == 1 && computer == 3){
      std::cout << "User Wins!";
    }
    else if ( user == 2 && computer == 1){
      std::cout << "User Wins!";
    }
    else if ( user == 2 && computer == 2){
      std::cout << "Tie!";
    }
    else if (user == 2 && computer == 3){
      std::cout << "Computer Wins!";
    }
    else if (user == 3 && computer == 1){
      std::cout << "Computer Wins!";
    }
    else if (user == 3 && computer == 2){
      std::cout << "User Wins!";
    }
    else if (user == 3 && computer == 3){
      std::cout << "Tie!";
    }
  }
    // If The Player Doesn't Want To Input
  else if (bIsPassive == true){

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    // myComputer instead of user variable
    std::cout << "My Computer: " << myComputer << "\n";
    std::cout << "Opponent Computer: " << computer << "\n";

    // Win/Lose Logic
    if (myComputer == 1 && computer == 1){
      std::cout << "Tie!";
    }
    else if (myComputer == 1 && computer == 2){
      std::cout << "Computer Wins!";
    }
    else if (myComputer == 1 && computer == 3){
      std::cout << "My Computer Wins!";
    }
    else if (myComputer == 2 && computer == 1){
      std::cout << "My Computer Wins!";
    }
    else if (myComputer == 2 && computer == 2){
      std::cout << "Tie!";
    }
    else if (myComputer == 2 && computer == 3){
      std::cout << "Computer Wins!";
    }
    else if (myComputer == 3 && computer == 1){
      std::cout << "Computer Wins!";
    }
    else if (myComputer == 3 && computer == 2){
      std::cout << "My Computer Wins!";
    }
    else if (myComputer == 3 && computer == 3){
      std::cout << "Tie!";
    }

  }

}
