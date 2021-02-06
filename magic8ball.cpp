#include <iostream>
#include <cstdlib>

int main(){

  // Welcome to the Magic 8-Ball!
  std::cout << "MAGIC 8-BALL! " << "\n";

  srand(time(NULL)); // sets the "seed" of the random number generator
  int answer = std::rand() % 10; // modulo makes sure it's a number from 0-9
  std::cout << "Output is: " << answer << "\n";

  if (answer == 0){
    std::cout << "It is certain.\n";
  }
  else if (answer == 1){
    std::cout << "Give it hope.\n";
  }
  else if (answer == 2) {
    std::cout << "Give it some more elbow grease.\n";
  }
  else if (answer == 3){
    std::cout << "It may be possible.\n";
  }
  else if (answer == 4){
    std::cout << "Go to sleep on it, and try again.\n";
  }
  else if (answer == 5){
    std::cout << "I'm not sure it can happen, but...\n";
  }
  else if (answer == 6){
    std::cout << "If only I could be so sure.\n";
  }
  else if (answer == 7){
    std::cout << "Do you really think so? Try Harder.\n";
  }
  else if (answer == 8){
    std::cout << "It's almost a monkey's paw.\n";
  }
  else {
    std::cout << "Very doubtful.";
  }


}
