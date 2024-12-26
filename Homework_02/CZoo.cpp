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
//            과제 함수
// ==================================
void CZoo::addAnimal(CAnimal* animal)
{
	// 동물을 동물원에 추가하는 함수
	// - Animal 객체의 포인터를 받아 포인터 배열에 저장합니다.
	// - 같은 동물이라도 여러 번 추가될 수 있습니다.
	// - 입력 매개변수: Animal* (추가할 동물 객체)
	// - 반환값: 없음

	if (animal != nullptr)
	{
		arr_Animal.push_back(animal);
	}
}

void CZoo::performActions()
{
	// 동물원에 있는 모든 동물의 행동을 수행하는 함수
	// - 모든 동물 객체에 대해 순차적으로 소리를 내고 움직이는 동작을 실행합니다.
	// - 입력 매개변수: 없음
	// - 반환값: 없음

	for (int i = 0; i < arr_Animal.size(); ++i)
	{
		arr_Animal[i]->makeSound();
	}
}

CAnimal* CZoo::createRandomAnimal()
{
	// 랜덤 동물을 생성하는 함수
	// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
	// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
	// - 입력 매개변수: 없음
	// - 반환값: Animal* (생성된 동물 객체의 포인터)

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