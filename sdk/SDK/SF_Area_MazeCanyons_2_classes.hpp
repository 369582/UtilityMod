#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Area_MazeCanyons_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Area_MazeCanyons_2.Area_MazeCanyons_1_C
// 0x0000 (0x0060 - 0x0060)
class UArea_MazeCanyons_1_C : public UFGMapArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Area_MazeCanyons_2.Area_MazeCanyons_1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif