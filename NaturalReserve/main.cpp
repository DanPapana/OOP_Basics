#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <string>
#include "OReserve.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include "Rabbit.h"
#include "Deer.h"
#include "Fox.h"
#include "Lion.h"
#include "Bear.h"

//Pentru urs:  Animal::Carnivor::...
//sau public virtual Carnivor

int main() {

	std::ifstream rabbitFile("inRabbit.txt");
	std::ifstream deerFile("inDeer.txt");
	std::ifstream foxFile("inFox.txt");
	std::ifstream lionFile("inLion.txt");
	std::ifstream bearFile("inBear.txt");

	//std::vector <Animal*> animal;
	
	OReserve* reserve;

	int choice;
	//std::string temp_name;
	//std::string temp_date;
	//std::string temp_food;
	//int temp_weight;
	//int temp_amount;
	////int int_other;
	////std::string string_other;
	//auto temp_other = 0;

	std::string temp_rabbit[10];

	int i = 0;
	do {
		rabbitFile >> temp_rabbit[i];
		i++;
	} while (temp_rabbit[i - 1] != "");

	Rabbit *rabbit = new Rabbit(temp_rabbit);
	std::string temp_deer[10];

	int j = 0;
	do {
		deerFile >> temp_deer[j];
		j++;
	} while (temp_rabbit[j - 1] != "");

	Deer *deer = new Deer(temp_deer);

	OReserve zoo;
	zoo.addAnimal(rabbit);
	zoo.addAnimal(deer);

	do {
		std::cout << "1. Add ALL the information!" << std::endl;
		std::cout << "2. Give me ALL animals" << std::endl;
		std::cin >> choice;
		switch (choice) {
		case 1:
			
			//rabbitFile >> temp_name >> temp_date >> temp_food >> temp_weight >> temp_amount >> temp_other;
			
			//deerFile >> temp_name >> temp_date >> temp_food >> temp_weight >> temp_amount >> temp_other;
			//animal.push_back(new Deer(temp_name, temp_date, temp_food, temp_weight, temp_amount, temp_other));

			//foxFile >> temp_name >> temp_date >> temp_food >> temp_weight >> temp_amount >> temp_other;
			//animal.push_back(new Fox(temp_name, temp_date, temp_food, 14, 22, 10, "Polar"));

			//lionFile >> temp_name >> temp_date >> temp_food >> temp_weight >> temp_amount >> temp_other;
			//animal.push_back(new Lion(temp_name, temp_date, temp_food, 30, 20, 1, "Congo"));

			//bearFile >> temp_name >> temp_date >> temp_food >> temp_weight >> temp_amount >> temp_other;
			//animal.push_back(new Bear(temp_name, temp_date, temp_food, 100, 40, 20));
		
			//Zoo.getAnimal(0);
			std::cout << zoo.getAnimal(0)->getName() << std::endl;
			std::cout << zoo.getAnimal(1)->getDate() << std::endl;
			break;
		case 2:
			/*for (int i = 0; i < animal.size(); i++) {
				
				std::cout << animal[i]->getName() << std::endl;
				std::cout << animal[i]->getDate() << std::endl;
				std::cout << animal[i]->getFood() << std::endl;
				std::cout << animal[i]->getWeight() << std::endl;
				std::cout << animal[i]->getDailyFood() << std::endl << std::endl;
			*/	

			std::cout << rabbit->getName() << std::endl;
			std::cout << rabbit->getDate() << std::endl;
			std::cout << rabbit->getFood() << std::endl;
			std::cout << rabbit->getWeight() << std::endl;
			std::cout << rabbit->getDailyFood() << std::endl;
			std::cout << rabbit->getMinArea() << std::endl << std::endl;
			//}
			break;
		}
	} while (choice != 99);
	return 0;
}