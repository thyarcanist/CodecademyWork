#include <iostream>

int main() {
  
  // Weight Numbers
  double wMer = 0.38;
  double wVen = 0.91;
  double wMar = 0.38;
  double wJup = 2.34;
  double wSat = 1.06;
  double wUra = 0.92;
  double wNep = 1.19;

  // For Beltalowda!!!
  double wBelter = 0.06;

  // variables
  int nPut;
  int Earther;
   
  // Prompts
  std::cout << "Enter your Earther weight: ";
  std::cin >> Earther;

  std::cout <<"Enter Planet number: ";
  std::cin >> nPut;

  // Weight = Mass X Gravity
  
  switch(nPut){
    case 1:
    std::cout << "Mercury\n";
    std::cout << "Your weight will be: " << Earther * wMer << "\n";
    break;
    case 2:
    std::cout << "Venus\n";
    std::cout << "Your weight will be: " << Earther * wVen << "\n";
    break;
    case 3:
    std::cout << "Mars\n";
    std::cout << "Your weight will be: " << Earther * wMar << "\n";
    break;
    case 4:
    std::cout << "Jupiter\n";
    std::cout << "Your weight will be: " << Earther * wJup << "\n";
    break;
    case 5:
    std::cout << "Saturn\n";
    std::cout << "Your weight will be: " << Earther * wSat << "\n";
    break;
    case 6: 
    std::cout << "Uranus\n";
    std::cout << "Your weight will be: " << Earther * wUra << "\n";
    break;
    case 7:
    std::cout << "Nepture\n";
    std::cout << "Your weight will be: " << Earther * wNep << "\n";
    break;
    case 8:
    std::cout << "Belter Asteroids\n";
    std::cout << "Your approximate weight in the Belt wil be: " << Earther * wBelter << "\n";
    break;
    default:
    std::cout << "Invalid\n";
    break;
  }
  
  
  
  
}
