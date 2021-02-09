#include <iostream>
#include <vector>

int main() {
  // Vectors are like Arrays in C#
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Sweet Roll");
  grocery.push_back("Brahmin Steak");
  grocery.push_back("StarCrunch Bar");
  grocery.push_back("Orange Mentats");
  grocery.push_back("Nuka Cola Quantum");


  // Prints how many items are in the list
  std::cout << grocery.size() << "\n";
  
  
  std::cout << grocery[0] << "\n"; // prints Hot Pepper Jam
  std::cout << grocery[3] << "\n"; // prints Sweet Roll
  std::cout << grocery[7] << "\n"; // prints Nuka Cola Quantum
  
}
