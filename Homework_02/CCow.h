#pragma once
#include "CAnimal.h"

class CCow :
    public CAnimal
{
public:
    virtual void makeSound() override;

public:
    CCow();
    virtual ~CCow();
};