// Satisfactory SDK (V0.103 - CL#96731)
#include "stdafx.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_CoreUObject_classes.hpp"

namespace SDK
{
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
