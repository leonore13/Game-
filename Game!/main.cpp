//
//  main.cpp
//  Game!
//
//  Created by Sophia Nguyen on 2016-05-05.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//
//  The story!

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

#include "Character.hpp"

using namespace std;

int main() {

    string char_name;
    int age;
    string command;
    
    Character Char_1(char_name, age);
    
    cout << "Greetings. What is your name?" << "\n";
    getline(cin, char_name); // get character's name
    
    cout << "How many years have you existed in this world?" << "\n";
    cin >> age; // get character's age
    
    Char_1.setName(char_name);
    Char_1.setAge(age);
    
    cout << "\n\n" << "Hello, " << Char_1.getName() << ". A wise soul you are, your " << Char_1.getAge() << " years on this Earth will come in useful as you navigate through this adventure. To proceed, type in short commands as you think they might pretain to the environment and story you find yourself in. Have fun!" << "\n\n" << "You are in dark room, empty except for the wooden chair you sit on, a bare twin-sized bed in one corner, and a dim oil lamp sitting on a rickety night stand." << "\n\n";
    
    while (command != "QUIT")
    {
        command.clear();
        cin >> command;
    }
    
    return 0;
}
