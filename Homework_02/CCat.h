#pragma once
#include "CAnimal.h"

// 메모리 공간을 차지않고 있었기 때문에 소멸자가 호출이 되지 않아도 문제가 되지 않았던것 같다.

class CCat :
    public CAnimal
{
public:
    virtual void makeSound() override;

public:
    CCat();
    virtual ~CCat();
};