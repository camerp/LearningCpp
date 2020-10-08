#include "../headers/common.h"

void BitParams(int BitMaskLength)
{
	for (int i = 1; i <= BitMaskLength; i++)
	{
		std::cout << ",\\\nbit" << i;
	}
}

void EnumValues(int BitMaskLength)
{
	for (int i = 1; i <= BitMaskLength; i++)
	{
		std::cout << (i < 10 ? "_0" : "_") << i << "_##bit" << i << "=BIT" << i << ",\\" << std::endl;
	}
	std::cout << "EMPTY=0\\\n";
	std::cout << "};\\\n" << "TYPESAFEBITMASKOPERATORS(name)" << std::endl;
}

void BitValues(int BitValuesNeeded)
{
	for (int i = 1; i <= BitValuesNeeded; i++)
	{
		unsigned long long bit = 1ull << (i - 1);
		std::cout << "#define BIT" << i << " " << bit << std::endl;
	}
}

void BitmaskOperators()
{
	std::cout <<
		"#define TYPESAFEBITMASKOPERATORS(name)\\\n\
	name operator |(name lhs, name rhs)\\\n\
	{return static_cast<name>(static_cast<std::underlying_type<name>::type>(lhs) | static_cast<std::underlying_type<name>::type>(rhs));}\\\n\
	name operator &(name lhs, name rhs)\\\n\
	{return static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) & static_cast<std::underlying_type<name>::type>(rhs));}\\\n\
	name operator ^(name lhs, name rhs)\\\n\
	{return static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) ^ static_cast<std::underlying_type<name>::type>(rhs));}\\\n\
	name operator ~(name rhs)\\\n\
	{return static_cast<name> (~static_cast<std::underlying_type<name>::type>(rhs));}\\\n\
	name& operator |=(name& lhs, name rhs)\\\n\
	{lhs = static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) | static_cast<std::underlying_type<name>::type>(rhs));\\\n\
	 return lhs;}\\\n\
	name& operator &=(name& lhs, name rhs)\\\n\
	{lhs = static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) & static_cast<std::underlying_type<name>::type>(rhs));\\\n\
	 return lhs;}\\\n\
	/*name& operator ^=(name& lhs, name rhs)\\\n\
	{lhs = static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) ^= static_cast<std::underlying_type<name>::type>(rhs));\\\n\
	 return lhs;}*/\\\n";
}

void GenerateBitmaskEnumMacros()
{
	//First we define the numbers that represent the bits, this makes it easy to work on in platform but will break if transferred between platforms
	std::cout << "#ifndef _WIN64\n";
	BitValues(64);
	std::cout << "#pragma message (\"Bits set for Win64\")\n#else\n#error \"Please Implement Bit Assignments On Your Platform\"\n#endif //Windows 64bit\n";
	BitmaskOperators();
	std::cout << std::endl;
	std::cout << std::endl;

	//64 bit bitmask setup
	int BitMaskLength = 64;
	std::cout << "#define ULLBITMASK(name";
	BitParams(BitMaskLength);
	std::cout << ")\\\nenum class name : unsigned long long{\\" << std::endl;
	EnumValues(BitMaskLength);


	//32 bit bitmask setup
	BitMaskLength = 32;
	std::cout << "#define UINTBITMASK(name";
	BitParams(BitMaskLength);
	std::cout << ")\\\nenum class name : unsigned int{\\" << std::endl;
	EnumValues(BitMaskLength);

	//16 bit bitmask setup
	BitMaskLength = 16;
	std::cout << "#define SHORTBITMASK(name";
	BitParams(BitMaskLength);
	std::cout << ")\\\nenum class name : unsigned short{\\" << std::endl;
	EnumValues(BitMaskLength);

	//8 bit bitmask setup
	BitMaskLength = 8;
	std::cout << "#define CHARBITMASK(name";
	BitParams(BitMaskLength);
	std::cout << ")\\\nenum class name : unsigned char{\\" << std::endl;
	EnumValues(BitMaskLength);


	std::cin.get();
}