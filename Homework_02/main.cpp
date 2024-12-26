#include "pch.h"
#include "define.h"

#include "CMyArray.h"
#include "CAnimal.h"
#include "CCat.h"
#include "CCow.h"
#include "CDog.h"
#include "CWaterdeer.h"
#include "CZoo.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // 필수
    CAnimal* Arr_Animals[4];
    CCat Cat;
    CCow Cow;
    CDog Dog;
    CWaterdeer Waterdeer;

    Arr_Animals[0] = &Cat;
    Arr_Animals[1] = &Cow;
    Arr_Animals[2] = &Dog;
    Arr_Animals[3] = &Waterdeer;

    for (int i = 0; i < 4; ++i)
    {
        Arr_Animals[i]->makeSound();
    }


    // 도전
    // 가변배열을 만들어 사용 및 함수 이름을 주어진 것으로 만든 것
    CZoo* WelcomeZoo = new CZoo;

    WelcomeZoo->addAnimal(new CCat);
    WelcomeZoo->addAnimal(new CCow);
    WelcomeZoo->addAnimal(new CDog);
    WelcomeZoo->addAnimal(new CWaterdeer);
    WelcomeZoo->addAnimal(WelcomeZoo->createRandomAnimal());
    WelcomeZoo->addAnimal(WelcomeZoo->createRandomAnimal());
    WelcomeZoo->addAnimal(WelcomeZoo->createRandomAnimal());
    WelcomeZoo->addAnimal(WelcomeZoo->createRandomAnimal());
    WelcomeZoo->addAnimal(WelcomeZoo->createRandomAnimal());

    WelcomeZoo->performActions();

    delete WelcomeZoo;



    // 처음에 만들었던 함수들 및 vector 사용

    /*WelcomeZoo->AddAnimal(ANIMAL_TYPE::CAT);
    WelcomeZoo->AddAnimal(ANIMAL_TYPE::COW);
    WelcomeZoo->AddAnimal(ANIMAL_TYPE::WATERDEER);
    WelcomeZoo->AddAnimal(ANIMAL_TYPE::DOG);

    WelcomeZoo->AddRendomAnimal();
    WelcomeZoo->AddRendomAnimal();
    WelcomeZoo->AddRendomAnimal();
    WelcomeZoo->AddRendomAnimal();

    //WelcomeZoo->AllAnimal_MakeSound();
    delete WelcomeZoo;*/

    

	return 0;
}