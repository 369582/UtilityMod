#pragma once

// Satisfactory SDK (V0.103 - CL#96731)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Schematic_Tutorial4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Schematic_Tutorial4.Schematic_Tutorial4_C
// 0x0000 (0x0140 - 0x0140)
class USchematic_Tutorial4_C : public UFGSchematic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Schematic_Tutorial4.Schematic_Tutorial4_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
