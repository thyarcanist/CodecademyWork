#include <iostream>
#include <string>

int main(){
  using namespace std;

  // Basic Variables
  string playerName = " "; // this needs <string> to run.
  int coin;

  // First Part -- Getting the Key
  bool bRetrievedKey;
  int inputA;
  // Can Die Here

  // Second Part -- Finding the Man

  // Can Die Here

  // Third Part -- 

  // Can Die Multiple Times Here

  // Text Adventure Start
  std::cout << "Welcome to Purgatory!\n";
  std::cout << "What is your name?\n";
  std::cin >> playerName;

  std::cout << "Cool, cool. " << playerName << "." << " Welcome to Perdition!\n\n";

  for (int i = 0; i < 100; i++){
    std::cout << "Cough, cough.\n";

    // This should be exited ONLY when the player gets the key.
    if (!bRetrievedKey) {
      std::cout << "You awaken in an apartment. The lighting is rather dim, but from out the window you see a view. The sky is dark -- like the night, and rivers flow purple. You aren't quite sure where you are but you know that it isn't home. You try to find out what to do.\n\n";
      std::cout << "Go to the Laptop.\n";
      std::cout << "Go to the Window.\n";
      std::cout << "Go to the Door.\n";
      std::cin >> inputA;

      // Control Flow, should look back to this.
      
      case(inputA){ 
        case 1:
        std::cout << "You got to the laptop and open it. You can really read anything and it vaguely reminds you of latin.\n"\
        break;
        case 2:
        std::cout << "You go to the window. Upon peering more onto the ground, you realize that you may not be home. The figures on the ground stretch from humanoid to blob-like beings.\n";
        std::cout << "You realize that you can open the window. There is a cat peering down on you, it's tail is flickering back and forth.";
        break;
        case 3:
        std::cout << "You go to the door and try to open it. But you fail to do so. You may need a key.\n";
        std::cout << "You pull away from the door knob and go back.\n";
        break;
        default:
        std::cout << "Nothing."
        break;
      }
    }

  }


}
