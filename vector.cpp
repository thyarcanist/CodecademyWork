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
  grocery.push_back("Nuka Cola Quantnum");


  std::cout << grocery.size() << "\n";
  
}
