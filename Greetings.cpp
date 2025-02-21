#include<iostream>

#include<string>

int main() {

//Make the user's name a string
	std::string name;

//Prompt the user for their name
	std::cout << "Please enter your name: ";
	std::cin >> name;

//Output a personal greeting to user
	std::cout << "It is nice to meet you, " << name << "!" << std::endl;


	return 0;

}