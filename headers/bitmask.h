#ifndef _WIN64
#define BIT1 1
#define BIT2 2
#define BIT3 4
#define BIT4 8
#define BIT5 16
#define BIT6 32
#define BIT7 64
#define BIT8 128
#define BIT9 256
#define BIT10 512
#define BIT11 1024
#define BIT12 2048
#define BIT13 4096
#define BIT14 8192
#define BIT15 16384
#define BIT16 32768
#define BIT17 65536
#define BIT18 131072
#define BIT19 262144
#define BIT20 524288
#define BIT21 1048576
#define BIT22 2097152
#define BIT23 4194304
#define BIT24 8388608
#define BIT25 16777216
#define BIT26 33554432
#define BIT27 67108864
#define BIT28 134217728
#define BIT29 268435456
#define BIT30 536870912
#define BIT31 1073741824
#define BIT32 2147483648
#define BIT33 4294967296
#define BIT34 8589934592
#define BIT35 17179869184
#define BIT36 34359738368
#define BIT37 68719476736
#define BIT38 137438953472
#define BIT39 274877906944
#define BIT40 549755813888
#define BIT41 1099511627776
#define BIT42 2199023255552
#define BIT43 4398046511104
#define BIT44 8796093022208
#define BIT45 17592186044416
#define BIT46 35184372088832
#define BIT47 70368744177664
#define BIT48 140737488355328
#define BIT49 281474976710656
#define BIT50 562949953421312
#define BIT51 1125899906842624
#define BIT52 2251799813685248
#define BIT53 4503599627370496
#define BIT54 9007199254740992
#define BIT55 18014398509481984
#define BIT56 36028797018963968
#define BIT57 72057594037927936
#define BIT58 144115188075855872
#define BIT59 288230376151711744
#define BIT60 576460752303423488
#define BIT61 1152921504606846976
#define BIT62 2305843009213693952
#define BIT63 4611686018427387904
#define BIT64 9223372036854775808
#pragma message ("Bits set for Win64")
#else
#error "Please Implement Bit Assignments On Your Platform"
#endif //Windows 64bit
#define TYPESAFEBITMASKOPERATORS(name)\
        name operator |(name lhs, name rhs)\
        {return static_cast<name>(static_cast<std::underlying_type<name>::type>(lhs) | static_cast<std::underlying_type<name>::type>(rhs));}\
        name operator &(name lhs, name rhs)\
        {return static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) & static_cast<std::underlying_type<name>::type>(rhs));}\
        name operator ^(name lhs, name rhs)\
        {return static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) ^ static_cast<std::underlying_type<name>::type>(rhs));}\
        name operator ~(name rhs)\
        {return static_cast<name> (~static_cast<std::underlying_type<name>::type>(rhs));}\
        name& operator |=(name& lhs, name rhs)\
        {lhs = static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) | static_cast<std::underlying_type<name>::type>(rhs));\
         return lhs;}\
        name& operator &=(name& lhs, name rhs)\
        {lhs = static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) & static_cast<std::underlying_type<name>::type>(rhs));\
         return lhs;}\
        /*name& operator ^=(name& lhs, name rhs)\
        {lhs = static_cast<name> (static_cast<std::underlying_type<name>::type>(lhs) ^= static_cast<std::underlying_type<name>::type>(rhs));\
         return lhs;}*/\


#define ULLBITMASK(name,\
bit1,\
bit2,\
bit3,\
bit4,\
bit5,\
bit6,\
bit7,\
bit8,\
bit9,\
bit10,\
bit11,\
bit12,\
bit13,\
bit14,\
bit15,\
bit16,\
bit17,\
bit18,\
bit19,\
bit20,\
bit21,\
bit22,\
bit23,\
bit24,\
bit25,\
bit26,\
bit27,\
bit28,\
bit29,\
bit30,\
bit31,\
bit32,\
bit33,\
bit34,\
bit35,\
bit36,\
bit37,\
bit38,\
bit39,\
bit40,\
bit41,\
bit42,\
bit43,\
bit44,\
bit45,\
bit46,\
bit47,\
bit48,\
bit49,\
bit50,\
bit51,\
bit52,\
bit53,\
bit54,\
bit55,\
bit56,\
bit57,\
bit58,\
bit59,\
bit60,\
bit61,\
bit62,\
bit63,\
bit64)\
enum class name : unsigned long long{\
_01_##bit1=BIT1,\
_02_##bit2=BIT2,\
_03_##bit3=BIT3,\
_04_##bit4=BIT4,\
_05_##bit5=BIT5,\
_06_##bit6=BIT6,\
_07_##bit7=BIT7,\
_08_##bit8=BIT8,\
_09_##bit9=BIT9,\
_10_##bit10=BIT10,\
_11_##bit11=BIT11,\
_12_##bit12=BIT12,\
_13_##bit13=BIT13,\
_14_##bit14=BIT14,\
_15_##bit15=BIT15,\
_16_##bit16=BIT16,\
_17_##bit17=BIT17,\
_18_##bit18=BIT18,\
_19_##bit19=BIT19,\
_20_##bit20=BIT20,\
_21_##bit21=BIT21,\
_22_##bit22=BIT22,\
_23_##bit23=BIT23,\
_24_##bit24=BIT24,\
_25_##bit25=BIT25,\
_26_##bit26=BIT26,\
_27_##bit27=BIT27,\
_28_##bit28=BIT28,\
_29_##bit29=BIT29,\
_30_##bit30=BIT30,\
_31_##bit31=BIT31,\
_32_##bit32=BIT32,\
_33_##bit33=BIT33,\
_34_##bit34=BIT34,\
_35_##bit35=BIT35,\
_36_##bit36=BIT36,\
_37_##bit37=BIT37,\
_38_##bit38=BIT38,\
_39_##bit39=BIT39,\
_40_##bit40=BIT40,\
_41_##bit41=BIT41,\
_42_##bit42=BIT42,\
_43_##bit43=BIT43,\
_44_##bit44=BIT44,\
_45_##bit45=BIT45,\
_46_##bit46=BIT46,\
_47_##bit47=BIT47,\
_48_##bit48=BIT48,\
_49_##bit49=BIT49,\
_50_##bit50=BIT50,\
_51_##bit51=BIT51,\
_52_##bit52=BIT52,\
_53_##bit53=BIT53,\
_54_##bit54=BIT54,\
_55_##bit55=BIT55,\
_56_##bit56=BIT56,\
_57_##bit57=BIT57,\
_58_##bit58=BIT58,\
_59_##bit59=BIT59,\
_60_##bit60=BIT60,\
_61_##bit61=BIT61,\
_62_##bit62=BIT62,\
_63_##bit63=BIT63,\
_64_##bit64=BIT64,\
EMPTY=0\
};\
TYPESAFEBITMASKOPERATORS(name)
#define UINTBITMASK(name,\
bit1,\
bit2,\
bit3,\
bit4,\
bit5,\
bit6,\
bit7,\
bit8,\
bit9,\
bit10,\
bit11,\
bit12,\
bit13,\
bit14,\
bit15,\
bit16,\
bit17,\
bit18,\
bit19,\
bit20,\
bit21,\
bit22,\
bit23,\
bit24,\
bit25,\
bit26,\
bit27,\
bit28,\
bit29,\
bit30,\
bit31,\
bit32)\
enum class name : unsigned int{\
_01_##bit1=BIT1,\
_02_##bit2=BIT2,\
_03_##bit3=BIT3,\
_04_##bit4=BIT4,\
_05_##bit5=BIT5,\
_06_##bit6=BIT6,\
_07_##bit7=BIT7,\
_08_##bit8=BIT8,\
_09_##bit9=BIT9,\
_10_##bit10=BIT10,\
_11_##bit11=BIT11,\
_12_##bit12=BIT12,\
_13_##bit13=BIT13,\
_14_##bit14=BIT14,\
_15_##bit15=BIT15,\
_16_##bit16=BIT16,\
_17_##bit17=BIT17,\
_18_##bit18=BIT18,\
_19_##bit19=BIT19,\
_20_##bit20=BIT20,\
_21_##bit21=BIT21,\
_22_##bit22=BIT22,\
_23_##bit23=BIT23,\
_24_##bit24=BIT24,\
_25_##bit25=BIT25,\
_26_##bit26=BIT26,\
_27_##bit27=BIT27,\
_28_##bit28=BIT28,\
_29_##bit29=BIT29,\
_30_##bit30=BIT30,\
_31_##bit31=BIT31,\
_32_##bit32=BIT32,\
EMPTY=0\
};\
TYPESAFEBITMASKOPERATORS(name)
#define SHORTBITMASK(name,\
bit1,\
bit2,\
bit3,\
bit4,\
bit5,\
bit6,\
bit7,\
bit8,\
bit9,\
bit10,\
bit11,\
bit12,\
bit13,\
bit14,\
bit15,\
bit16)\
enum class name : unsigned short{\
_01_##bit1=BIT1,\
_02_##bit2=BIT2,\
_03_##bit3=BIT3,\
_04_##bit4=BIT4,\
_05_##bit5=BIT5,\
_06_##bit6=BIT6,\
_07_##bit7=BIT7,\
_08_##bit8=BIT8,\
_09_##bit9=BIT9,\
_10_##bit10=BIT10,\
_11_##bit11=BIT11,\
_12_##bit12=BIT12,\
_13_##bit13=BIT13,\
_14_##bit14=BIT14,\
_15_##bit15=BIT15,\
_16_##bit16=BIT16,\
EMPTY=0\
};\
TYPESAFEBITMASKOPERATORS(name)
#define CHARBITMASK(name,\
bit1,\
bit2,\
bit3,\
bit4,\
bit5,\
bit6,\
bit7,\
bit8)\
enum class name : unsigned char{\
_01_##bit1=BIT1,\
_02_##bit2=BIT2,\
_03_##bit3=BIT3,\
_04_##bit4=BIT4,\
_05_##bit5=BIT5,\
_06_##bit6=BIT6,\
_07_##bit7=BIT7,\
_08_##bit8=BIT8,\
EMPTY=0\
};\
TYPESAFEBITMASKOPERATORS(name)