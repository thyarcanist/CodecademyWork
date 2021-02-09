#include <iostream>
#include <string>

int main() {
	using namespace std;

	// Basic Variables
	string playerName;
	int coin;
	int karma;
	bool bIsGameOver = false;

	// First Part -- Getting The Key | 1a
	bool bRetrievedKey = false;
	bool bLuredCat = false;
	int inputA;

	// Second Part -- Finding The Man -- TO BE CONTINUED | 2a
	bool bIsManFound = false;
	int inputB;

	// Third Part -- On The Chase | 3a
	bool bHasFoundPortal = false;
	int inputC;

	// Text Adventure Start
	std::cout << "Welcome to Perdition!\n";
	std::cout << "What are you called?\n";
	std::cin >> playerName; // stores player's chosen name here


	// Prompt 1A - | START
	std::cout << "You awaken in an apartment. The lighting is rather dim, but you can see light from a window and hear the white noise coming from the television. The sky is dark but not in a way that was familiar. There was a large river that flowed through the city as if it was the River Thames. You aren't quite sure where you are but you know that you aren't home. What will you do?\n\n";
	std::cout << "1) Go to the Laptop.\n";
	std::cout << "2) Go to the Window.\n";
	std::cout << "3) Go to the Door.\n";
	std::cin >> inputA;

	// Control Flow - 1a | START
	if (inputA == 1){
		inputA = 0;
		std::cout << "You got to the laptop and open it. You can't really read anything and it vaguely reminds you of latin.\n\n";
		// choices - 1:3
		std::cout << "What will you do?\n";
		std::cout << "1) Back away from the Laptop.\n";
		std::cout << "2) Go to the Window.\n";
		std::cout << "3) Go to the Door.\n\n";
		std::cin >> inputA;

		// Control Flow - 1a.1
		if (inputA == 1) {
			inputA = 0;

			// Description
			std::cout << "You back away from the laptop. Your not sure if any good will come out of messing with it.\n\n";

			std::cout << "What will you do?\n";
			std::cout << "1) Go to the Window.\n";
			std::cout << "2) Go to the Door.\n";
			std::cin >> inputA;

			// Control Flow 1a.1b
			if (inputA == 1) {
				inputA = 0;

				// Description
				std::cout << "You've gone to the Window.\n";
				std::cin >> inputA;
				// Control Flow 1a.1c
				if (inputA == 1) {
					inputA = 0;
					// Description
					std::cout << "You have gone to the Window.\n";
				}
				else if (inputA == 2) {
					std::cout << "You have gone to the Door.\n";
				}
				else {
					std::cout << "Invalid input.\n";
				}
			}
			else if (inputA == 2) {
				std::cout << "You have gone to the door.\n";
			}
		}
		else if (inputA == 2) {
			inputA = 0;
			std::cout << "You go to the window. Upon peering more onto the ground, you realize that you may not be at home. The figures that seem like ants on the ground ranged from bone white to beings with horns on their heads. You see humanoid, but gargolye like entities flying about in the sky.\n\n";
			std::cout << "You realize that you can open the window. With a relatively easy pull it opens. There is a cat peering down on you from above, it's tail is flickering back and forth.\n";
			std::cout << "You see a key hanging from it's tail. You wonder if it's of use to you.\n\n";
			std::cout << "What will you do?\n";
			std::cout << "1) Reach out and grab the key.\n";
			std::cout << "2) Psspsspss to the cat.\n";
			std::cout << "3) Try to make your way down.\n";
			std::cin >> inputA;

			// Control Flow - 1b.2a

			if (inputA == 1) {
				std::cout << "You reach out and grab the key.\n";

				// Death - REACH OUT AND DIE
				std::cout << "You lean forward and reach out to grab the key. The cat seems to notice this, and flicks its tail away from you.\n";
				std::cout << "You lose your grasp on it and slip, falling to your demise.\n\n";
				std::cout << "GAME OVER.\n";
			}
			else if (inputA == 2) {
				inputA = 0;
				// Description
				std::cout << "You flicker your fingers and try to lure the cat towards you.\n";
				std::cout << "You are able to get the cat to you with resounding success.\n";
				std::cout << "The cat purrs in your grasp and you grab the key that was tied to its tail.\n";
				std::cout << "You're not sure what they key can be used for...\n\n";

				// Decisions
				std::cout << "What will you do?\n\n";
				std::cout << "1) Go to the Door";

				// Control Flow - 1ba
				if (inputA == 1) {
					inputA = 0;
					std::cout << "You go to the Door...\n";

					std::cout << "The door is a normal one. It's color is black and the doorknob is silver in color.\n";
					std::cout << "You would think that you could open it from the inside but you can open it, there is a keyhole that you can insert the key in. It's odd.\n\n";

					// Description
					std::cout << "What will you do?\n";
					std::cout << "1) Try to open the door.\n";
					std::cout << "2) Insert Key in the door.\n";
					std::cout << "\n\n";

					// Control Flow - 1bb
					if (inputA == 1) {
						inputA = 0;
						std::cout << "You try to open the door. The doorknob turns but you can't push or pull it open.\n\n";

						// Description
						std::cout << "What will you do?\n";
						std::cout << "1) Insert KEY in the DOOR.";
						std::cin >> inputA;

						// Control Flow - 1bc
						if (inputA == 1) {
							inputA = 0;

							// Description
							std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n";

							// Action
							std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
							std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
							std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

							std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
							std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
							std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
							std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

							// GAME OVER
							std::cout << "TO BE CONTINUED.\n";
						}
						else {
							std::cout << "Invalid input.\n";
						}
					}
					else if (inputA == 2) {
						inputA = 0;
						std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n\n";

						// Description
						std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
						std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
						std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

						std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
						std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
						std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
						std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

						// GAME OVER
						std::cout << "TO BE CONTINUED.\n";

					}
					else {
						std::cout << "Invalid input.\n";
					}
				}
				else{
					std::cout << "Invalid input.\n";
				}
			}
			else if (inputA == 3) {
				inputA = 0;

				// Description
				std::cout << "Try to make your way down...\n\n";

				std::cout << "You go out the window. Your back is faced towards the outside and your peering inside of the apartment building. The cat jumped up and is looking down at you in curiosity.\n\n";
				std::cout << "What will you do?\n\n";
				std::cout << "1) Go back inside.\n";
				std::cout << "2) Try to go down.\n";
				std::cin >> inputA;

				// Control Flow
				if (inputA == 1) {
					inputA = 0;

					// Description
					std::cout << "Going with your better judgement. You go back inside of the apartment.\n";
					std::cout << "You land perfectly back onto the wooden floor.\n";
					std::cout << "The cat is seemingly in view now, it's head tilting a bit at your antics.\n\n";

					std::cout << "What will you do?\n";
					std::cout << "1) Pssspsspss to the cat.\n";
					std::cout << "2) Reach out and grab the key.\n";
					std::cin >> inputA;

					// Control Flow

					if (inputA == 1) {
						inputA = 0;
						// Description
						std::cout << "You flicker your fingers and try to lure the cat towards you.\n";
						std::cout << "You are able to get the cat to you with resounding success.\n";
						std::cout << "The cat purrs in your grasp and you grab the key that was tied to its tail.\n";
						std::cout << "You're not sure what they key can be used for...\n\n";

						// Decisions
						std::cout << "What will you do?\n\n";
						std::cout << "1) Go to the Door";

						// Control Flow - 1ba
						if (inputA == 1) {
							inputA = 0;
							std::cout << "You go to the Door...\n";

							std::cout << "The door is a normal one. It's color is black and the doorknob is silver in color.\n";
							std::cout << "You would think that you could open it from the inside but you can open it, there is a keyhole that you can insert the key in. It's odd.\n\n";

							// Description
							std::cout << "What will you do?\n";
							std::cout << "1) Try to open the door.\n";
							std::cout << "2) Insert Key in the door.\n";
							std::cout << "\n\n";

							// Control Flow - 1bb
							if (inputA == 1) {
								inputA = 0;
								std::cout << "You try to open the door. The doorknob turns but you can't push or pull it open.\n\n";

								// Description
								std::cout << "What will you do?\n";
								std::cout << "1) Insert KEY in the DOOR.";
								std::cin >> inputA;

								// Control Flow - 1bc
								if (inputA == 1) {
									inputA = 0;

									// Description
									std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n";

									// Action
									std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
									std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
									std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

									std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
									std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
									std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
									std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

									// GAME OVER
									std::cout << "TO BE CONTINUED.\n";
								}
								else {
									std::cout << "Invalid input.\n";
								}
							}
							else if (inputA == 2) {
								inputA = 0;
								std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n\n";

								// Description
								std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
								std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
								std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

								std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
								std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
								std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
								std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

								// GAME OVER
								std::cout << "TO BE CONTINUED.\n";

							}
							else {
								std::cout << "Invalid input.\n";
							}
						}
						else if (inputA == 3) {
							inputA = 0;
							// Description
							std::cout << "AY-YOO\n";
						}
						}
					}
					else if (inputA == 2) {
						std::cout << "You reach out and grab the key.\n";

						// Death - REACH OUT AND DIE
						std::cout << "You lean forward and reach out to grab the key. The cat seems to notice this, and flicks its tail away from you.\n";
						std::cout << "You lose your grasp on it and slip, falling to your demise.\n\n";
						std::cout << "GAME OVER.\n";
					}
					else {
						std::cout << "Invalid input.\n";
					}

				}
			else {
					std::cout << "Invalid input.\n";
				}
			}
		else if (inputA == 3) {
			inputA = 0;
			std::cout << "You go to the door and try to open it. But you fail to do so. You may need a key.\n\n";

			// Description
			std::cout << "Enter Description Here";

			// Control Flow
		}
		else {
			std::cout << "Invalid Input.";
		}
	}
	else if (inputA == 2){
		inputA = 0;
		std::cout << "You go to the window. Upon peering more onto the ground, you realize that you may not be at home. The figures that seem like ants on the ground ranged from bone white to beings with horns on their heads. You see humanoid, but gargolye like entities flying about in the sky.\n\n";
		std::cout << "You realize that you can open the window. With a relatively easy pull it opens. There is a cat peering down on you from above, it's tail is flickering back and forth.\n";
		std::cout << "You see a key hanging from it's tail. You wonder if it's of use to you.\n\n";
		std::cout << "What will you do?\n";
		std::cout << "1) Reach out and grab the key.\n";
		std::cout << "2) Psspsspss to the cat.\n";
		std::cout << "3) Try to make your way down.\n";
		std::cin >> inputA;

		// Control Flow - 1b.2a

		if (inputA == 1) {
			std::cout << "You reach out and grab the key.\n";

			// Death - REACH OUT AND DIE
			std::cout << "You lean forward and reach out to grab the key. The cat seems to notice this, and flicks its tail away from you.\n";
			std::cout << "You lose your grasp on it and slip, falling to your demise.\n\n";
			std::cout << "GAME OVER.\n";
		}
		else if (inputA == 2) {
			inputA = 0;
			// Description
			std::cout << "You flicker your fingers and try to lure the cat towards you.\n";
			std::cout << "You are able to get the cat to you with resounding success.\n";
			std::cout << "The cat purrs in your grasp and you grab the key that was tied to its tail.\n";
			std::cout << "You're not sure what they key can be used for...\n\n";

			// Decisions
			std::cout << "What will you do?\n\n";
			std::cout << "1) Go to the Door";

			// Control Flow - 1ba
			if (inputA == 1) {
				inputA = 0;
				std::cout << "You go to the Door...\n";

				std::cout << "The door is a normal one. It's color is black and the doorknob is silver in color.\n";
				std::cout << "You would think that you could open it from the inside but you can open it, there is a keyhole that you can insert the key in. It's odd.\n\n";

				// Description
				std::cout << "What will you do?\n";
				std::cout << "1) Try to open the door.\n";
				std::cout << "2) Insert Key in the door.\n";
				std::cout << "\n\n";

				// Control Flow - 1bb
				if (inputA == 1) {
					inputA = 0;
					std::cout << "You try to open the door. The doorknob turns but you can't push or pull it open.\n\n";

					// Description
					std::cout << "What will you do?\n";
					std::cout << "1) Insert KEY in the DOOR.";
					std::cin >> inputA;

					// Control Flow - 1bc
					if (inputA == 1) {
						inputA = 0;

						// Description
						std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n";

						// Action
						std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
						std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
						std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

						std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
						std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
						std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
						std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

						// GAME OVER
						std::cout << "TO BE CONTINUED.\n";
					}
					else {
						std::cout << "Invalid input.\n";
					}
				}
				else if (inputA == 2) {
					inputA = 0;
					std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n\n";

					// Description
					std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
					std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
					std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

					std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
					std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
					std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
					std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

					// GAME OVER
					std::cout << "TO BE CONTINUED.\n";

				}
				else {
					std::cout << "Invalid input.\n";
				}
			}
			else{
				std::cout << "Invalid input.\n";
			}
		}
		else if (inputA == 3) {
			inputA = 0;

			// Description
			std::cout << "Try to make your way down...\n\n";

			std::cout << "You go out the window. Your back is faced towards the outside and your peering inside of the apartment building. The cat jumped up and is looking down at you in curiosity.\n\n";
			std::cout << "What will you do?\n\n";
			std::cout << "1) Go back inside.\n";
			std::cout << "2) Try to go down.\n";
			std::cin >> inputA;

			// Control Flow
			if (inputA == 1) {
				inputA = 0;

				// Description
				std::cout << "Going with your better judgement. You go back inside of the apartment.\n";
				std::cout << "You land perfectly back onto the wooden floor.\n";
				std::cout << "The cat is seemingly in view now, it's head tilting a bit at your antics.\n\n";

				std::cout << "What will you do?\n";
				std::cout << "1) Pssspsspss to the cat.\n";
				std::cout << "2) Reach out and grab the key.\n";
				std::cin >> inputA;

				// Control Flow

				if (inputA == 1) {
					inputA = 0;
					// Description
					std::cout << "You flicker your fingers and try to lure the cat towards you.\n";
					std::cout << "You are able to get the cat to you with resounding success.\n";
					std::cout << "The cat purrs in your grasp and you grab the key that was tied to its tail.\n";
					std::cout << "You're not sure what they key can be used for...\n\n";

					// Decisions
					std::cout << "What will you do?\n\n";
					std::cout << "1) Go to the Door";

					// Control Flow - 1ba
					if (inputA == 1) {
						inputA = 0;
						std::cout << "You go to the Door...\n";

						std::cout << "The door is a normal one. It's color is black and the doorknob is silver in color.\n";
						std::cout << "You would think that you could open it from the inside but you can open it, there is a keyhole that you can insert the key in. It's odd.\n\n";

						// Description
						std::cout << "What will you do?\n";
						std::cout << "1) Try to open the door.\n";
						std::cout << "2) Insert Key in the door.\n";
						std::cout << "\n\n";

						// Control Flow - 1bb
						if (inputA == 1) {
							inputA = 0;
							std::cout << "You try to open the door. The doorknob turns but you can't push or pull it open.\n\n";

							// Description
							std::cout << "What will you do?\n";
							std::cout << "1) Insert KEY in the DOOR.";
							std::cin >> inputA;

							// Control Flow - 1bc
							if (inputA == 1) {
								inputA = 0;

								// Description
								std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n";

								// Action
								std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
								std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
								std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

								std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
								std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
								std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
								std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

								// GAME OVER
								std::cout << "TO BE CONTINUED.\n";
							}
							else {
								std::cout << "Invalid input.\n";
							}
						}
						else if (inputA == 2) {
							inputA = 0;
							std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n\n";

							// Description
							std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
							std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
							std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

							std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
							std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
							std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
							std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

							// GAME OVER
							std::cout << "TO BE CONTINUED.\n";

						}
						else {
							std::cout << "Invalid input.\n";
						}
					}
					else if (inputA == 3) {
						inputA = 0;
						// Description
						std::cout << "AY-YOO\n";
					}
					}
				}
				else if (inputA == 2) {
					std::cout << "You reach out and grab the key.\n";

					// Death - REACH OUT AND DIE
					std::cout << "You lean forward and reach out to grab the key. The cat seems to notice this, and flicks its tail away from you.\n";
					std::cout << "You lose your grasp on it and slip, falling to your demise.\n\n";
					std::cout << "GAME OVER.\n";
				}
				else {
					std::cout << "Invalid input.\n";
				}

			}
		else {
				std::cout << "Invalid input.\n";
			}
	}
	else if (inputA == 3){
		inputA = 0;
		std::cout << "You go to the Door...\n";

		std::cout << "The door is a normal one. It's color is black and the doorknob is silver in color.\n";
		std::cout << "You try to open the door but you can't open it. The doorknob has an intricate keyhole, but you don't have a key.\n\n";
		std::cout << "\n";

		// Description
		std::cout << "What will you do?\n";
		std::cout << "1) Try to open the door.\n";
		std::cout << "2) Insert Key in the door.\n\n";
		std::cin >> inputA;

		// Control Flow - 1bb
		if (inputA == 1) {
			inputA = 0;
			std::cout << "You try to open the door. The doorknob turns but you can't push or pull it open.\n\n";

			// Description
			std::cout << "What will you do?\n";
			std::cout << "1) Insert KEY in the DOOR.";
			std::cin >> inputA;

			// Control Flow - 1bc
			if (inputA == 1) {
				inputA = 0;

				// Description
				std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n";

				// Action
				std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
				std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
				std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

				std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
				std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
				std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
				std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

				// GAME OVER
				std::cout << "TO BE CONTINUED.\n";
			}
			else {
				std::cout << "Invalid input.\n";
			}
		}
		else if (inputA == 2) {
			inputA = 0;
			std::cout << "You insert the key into the door. It is stuck shut no matter how hard you turn or jiggle the doorknob.\n\n";

			// Description
			std::cout << "With a sigh, you take the key out of the door. There isn't much else to interact with -- and you seem to be safe in the apartment.\n";
			std::cout << "You sit down and wait for something to happen. Anything. Sometimes you hear people step pass the door.\n";
			std::cout << "Other times, you are looking out the window watching things go about their daily business. The cat watching with you.\n\n";

			std::cout << "The door knob clicks, and then turns. The cats and your attention snap towards it, and the door creeps open.\n";
			std::cout << "You had expected the light from the hallway to be a different color but its just a standard dim, white light.\n";
			std::cout << "A person with horns on their hand steps in. The horns were like one that you'd see on a ram.\n";
			std::cout << "Their eyebrow raises at the cat but nevertheless they don't say anything. They sit a package down on the counter next to the door, and then the door closes again.\n\n";

			// GAME OVER
			std::cout << "TO BE CONTINUED.\n";

		}
		else {
			std::cout << "Invalid input.\n";
		}
	}
	else{
		std::cout << "Invalid input.\n";
	}

		// END OF PROGRAM
	}
