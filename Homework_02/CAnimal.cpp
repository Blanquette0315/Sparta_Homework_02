#include "pch.h"
#include "CAnimal.h"

CAnimal::CAnimal()
	: str_Name("Empty")
	, str_Sound("")
{
}

CAnimal::~CAnimal()
{
}

void CAnimal::makeSound()
{
	string str_comment;
	str_comment = GetName() + "�� �����Ҹ�!\n";
	str_comment += GetSound();
	cout << str_comment;
}