#pragma once

// Satisfactory (V0.103) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_SC_Vehicles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SC_Vehicles.SC_Vehicles_C
// 0x0000 (0x00C8 - 0x00C8)
class USC_Vehicles_C : public UFGBuildSubCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SC_Vehicles.SC_Vehicles_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif