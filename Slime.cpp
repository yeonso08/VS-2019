#pragma once
#include <iostream>


#include "Slime.h"

FSlime::FSlime()
{

	Type = "Slime";
	cout << "Slime ������" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;


}

FSlime::~FSlime()
{
	cout << "Slime �Ҹ���" << endl;

}
