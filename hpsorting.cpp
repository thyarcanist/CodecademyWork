#include <iostream>

int main(){

  // The magic starts here.

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  // Quiz Questions
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  // variable to determine
  std::string house;
  int max = 0;

  // Quiz Start
  std::cout << "The Sorting Hat Quiz!\n";

  // Question 1
  std::cout << "Q1.) When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  // User Input to Question 1
  std::cin >> answer1;

  // Control Flow
  if (answer1 == 1){
    hufflepuff = hufflepuff + 1;
  }
  else if (answer1 == 2){
    slytherin = slytherin + 1;
  }
  else if (answer1 == 3){
    ravenclaw = ravenclaw + 1;
  }
  else if (answer1 == 4){
    gryffindor = gryffindor + 1;
  }
  else{
    std::cout << "Invalid input\n";
  }

   // Question 2
  std::cout << "Q2.) Dawn or Dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";

  // User Input to Question 2
  std::cin >> answer2;

  // Control Flow
  if (answer2 == 1){
    ravenclaw = ravenclaw + 1;
    gryffindor = gryffindor + 1;
  }
  else if (answer2 == 2){
    hufflepuff = hufflepuff + 1;
    slytherin = slytherin + 1;
  }
  else {
    std::cout << "Invalid input\n";
  }

  // Question 3
  std::cout << "Q3.) Which kind of instrument most pleases your ear?\n";
  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";

  // User Input to Question 3
  std::cin >> answer3;

  // Control Flow
  if (answer3 == 1){
    slytherin = slytherin + 1;
  }
  else if (answer3 == 2){
    hufflepuff = hufflepuff + 1;
  }
  else if (answer3 == 3){
    ravenclaw = ravenclaw + 1;
  }
  else if (answer3 == 4){
    gryffindor = gryffindor + 1;
  }
  else{
    std::cout << "Invalid input\n";
  }

  // Question 4
  std::cout << "Q4.) Which road tempts you most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark, latern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through woods\n";
  std::cout << "4) The cobbled street lined with ancient buildings\n";

  // User Input to Question 4
  std::cin >> answer4;

  // Control Flow
  if (answer4 == 1){
    hufflepuff = hufflepuff + 1;
  }
  else if (answer4 == 2){
    slytherin = slytherin + 1;
  }
  else if (answer4 == 3){
    gryffindor = gryffindor + 1;
  }
  else if (answer4 == 4){
    ravenclaw = ravenclaw + 1;
  }
  else{
    std::cout << "Invalid input\n";
  }

  // Add The Results & Determine
  if (gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

}
