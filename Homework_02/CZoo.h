#pragma once
#include "CAnimal.h"
#include "CMyArray.h"

class CZoo
{
private:
	vector<CAnimal*>	vec_Animal;
	CMyArray<CAnimal*>	arr_Animal;
	bool				bSeedSet;

public:
	void AddAnimal(ANIMAL_TYPE Animal_Type);
	void AddRendomAnimal();

	void AllAnimal_MakeSound();

// 과제 함수 (만든 CMyArray를 사용하도록 만들어진 함수들 입니다.)
public:
	void addAnimal(CAnimal* animal);
	void performActions();
	CAnimal* createRandomAnimal();

public:
	CZoo();
	~CZoo();
};