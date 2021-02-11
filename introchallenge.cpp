#include <iostream>

// Define introduction() here:
void introduction(std::string firstName, std::string lastName) {

  // prints out
  std::cout << lastName << "," << " " << firstName << " " << lastName << "\n";

}

int main() {

  std::string firCall = "Beyonce";
  std::string surCall = "Knowles";

  //
  introduction(firCall, surCall);
  
}
