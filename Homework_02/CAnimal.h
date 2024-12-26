#pragma once

class CAnimal
{
private:
	string str_Name;
	string str_Sound;

public:
	virtual void makeSound() = 0;
	string GetName() { return str_Name; }
	string GetSound() { return str_Sound; }

	void SetName(string _Name) { str_Name = _Name; }
	void SetSound(string _Sound) { str_Sound = _Sound; }

public:
	CAnimal();
	virtual ~CAnimal();
};