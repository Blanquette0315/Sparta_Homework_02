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

// ���� �Լ� (���� CMyArray�� ����ϵ��� ������� �Լ��� �Դϴ�.)
public:
	void addAnimal(CAnimal* animal);
	void performActions();
	CAnimal* createRandomAnimal();

public:
	CZoo();
	~CZoo();
};