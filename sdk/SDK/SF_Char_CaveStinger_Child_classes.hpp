#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Char_CaveStinger_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Char_CaveStinger_Child.Char_CaveStinger_Child_C
// 0x0000 (0x09A8 - 0x09A8)
class AChar_CaveStinger_Child_C : public AChar_Stinger_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Char_CaveStinger_Child.Char_CaveStinger_Child_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif