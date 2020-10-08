#include "..\headers\common.h"
#include "..\headers\bitmask.h"
struct Object
{
	virtual const char* Name() = 0;
};

#define OBJECT(name) virtual const char* Name(){return #name;}

#define SINGLETON(name) static name& get(){ static name instance; return instance;}


const struct singleton
{
	SINGLETON(singleton)
	void test()
	{
		printf("Hello");
	}
};

void GenerateBitmaskEnumMacros();

CHARBITMASK(CharMask,
	Fail,
	Pass,
	Error,
	Other,
	Dance,
	Jump,
	Dead)

int main()
{
	CharMask cm = CharMask::EMPTY;
	cm = CharMask::_01_Fail | CharMask::_03_Error | CharMask::_05_Dance;
	GenerateBitmaskEnumMacros();
	

}



