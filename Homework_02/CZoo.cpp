#include "pch.h"
#include "CZoo.h"

#include "CCat.h"
#include "CCow.h"
#include "CDog.h"
#include "CWaterdeer.h"

CZoo::CZoo()
	: vec_Animal{}
	, bSeedSet(false)
{
}

CZoo::~CZoo()
{
	arr_Animal.Distroy();

	for (int i = 0; i < vec_Animal.size(); ++i)
	{
		delete vec_Animal[i];
	}
}

void CZoo::AddAnimal(ANIMAL_TYPE Animal_Type)
{
	switch (Animal_Type)
	{
	case ANIMAL_TYPE::CAT:
		vec_Animal.push_back(new CCat);
		break;
	case ANIMAL_TYPE::DOG:
		vec_Animal.push_back(new CDog);
		break;
	case ANIMAL_TYPE::COW:
		vec_Animal.push_back(new CCow);
		break;
	case ANIMAL_TYPE::WATERDEER:
		vec_Animal.push_back(new CWaterdeer);
		break;

	default:
		break;
	}
}

void CZoo::AddRendomAnimal()
{
	/*srand((unsigned int)time(NULL));

	int RandValue = rand() % (int)ANIMAL_TYPE::END;
	AddAnimal((ANIMAL_TYPE)RandValue);
	*/

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, (int)ANIMAL_TYPE::END);
	AddAnimal((ANIMAL_TYPE)dis(gen));
}

void CZoo::AllAnimal_MakeSound()
{
	for (int i = 0; i < vec_Animal.size(); ++i)
	{
		vec_Animal[i]->makeSound();
	}
}

// ==================================
//            ���� �Լ�
// ==================================
void CZoo::addAnimal(CAnimal* animal)
{
	// ������ �������� �߰��ϴ� �Լ�
	// - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
	// - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
	// - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
	// - ��ȯ��: ����

	if (animal != nullptr)
	{
		arr_Animal.push_back(animal);
	}
}

void CZoo::performActions()
{
	// �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
	// - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
	// - �Է� �Ű�����: ����
	// - ��ȯ��: ����

	for (int i = 0; i < arr_Animal.size(); ++i)
	{
		arr_Animal[i]->makeSound();
	}
}

CAnimal* CZoo::createRandomAnimal()
{
	// ���� ������ �����ϴ� �Լ�
	// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
	// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
	// - �Է� �Ű�����: ����
	// - ��ȯ��: Animal* (������ ���� ��ü�� ������)

	if (!bSeedSet)
	{
		srand((unsigned int)time(NULL));
		bSeedSet = true;
	}

	int RandValue = rand() % (int)ANIMAL_TYPE::END;
	
	CAnimal* pAnimal = nullptr;

	switch ((ANIMAL_TYPE)RandValue)
	{
	case ANIMAL_TYPE::CAT:
		pAnimal = new CCat;
		break;
	case ANIMAL_TYPE::DOG:
		pAnimal = new CDog;
		break;
	case ANIMAL_TYPE::COW:
		pAnimal = new CCow;
		break;
	case ANIMAL_TYPE::WATERDEER:
		pAnimal = new CWaterdeer;
		break;

	default:
		break;
	}

	return pAnimal;
}