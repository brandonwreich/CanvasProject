//
//  Controller.cpp
//  CanvasProject
//
//  Created by Reich, Brandon on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    numberArray();
    stringArray();
    doubleArray();
}

void Controller :: numberArray()
{
    int numbers [100];
    int count = 1;
    
    for (int index = 0; index < 99; index++)
    {
        numbers[index] = count;
        count++;
    }
    
    for (int var : numbers)
    {
        cout << var << endl;
    }
}

void Controller :: stringArray()
{
    string breakfastFoods [8];
    
    breakfastFoods [1] = "Pancakes";
    breakfastFoods [2] = "Eggs";
    breakfastFoods [3] = "Waffles";
    breakfastFoods [4] = "Bacon";
    breakfastFoods [5] = "Ceral";
    breakfastFoods [6] = "French Toast";
    breakfastFoods [7] = "Sausage";
    breakfastFoods [8] = "Omlet";
    
    for (string var : breakfastFoods)
    {
        cout << var << endl;
    }
}

void Controller :: doubleArray()
{
    double numbers[50];
    double count = .5;

    for (int index = 0; index < 49; index ++)
    {
        numbers[index] = count;
        count += .5;
    }

    for (double var : numbers)
    {
        cout << var << endl;
    }
}

    
