/*
 * Copyright (c) 2008-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 */


// This file was generated by NxParameterized/scripts/GenParameterized.pl
// Created: 2015.10.22 17:26:19

#ifndef HEADER_SubmeshParameters_h
#define HEADER_SubmeshParameters_h

#include "NxParametersTypes.h"

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
#include "NxParameterized.h"
#include "NxParameters.h"
#include "NxParameterizedTraits.h"
#include "NxTraitsInternal.h"
#endif

namespace physx
{
namespace apex
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace SubmeshParametersNS
{


struct U32_DynamicArray1D_Type
{
	physx::PxU32* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};


struct ParametersStruct
{

	NxParameterized::Interface* vertexBuffer;
	U32_DynamicArray1D_Type indexBuffer;
	U32_DynamicArray1D_Type vertexPartition;
	U32_DynamicArray1D_Type indexPartition;
	U32_DynamicArray1D_Type smoothingGroups;

};

static const physx::PxU32 checksum[] = { 0xb2b4f308, 0x5f4b8da6, 0x4d45daeb, 0xbfc7d9b0, };

} // namespace SubmeshParametersNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class SubmeshParameters : public NxParameterized::NxParameters, public SubmeshParametersNS::ParametersStruct
{
public:
	SubmeshParameters(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~SubmeshParameters();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("SubmeshParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)1;

	static physx::PxU32 staticVersion(void)
	{
		return ClassVersion;
	}

	physx::PxU32 version(void) const
	{
		return(staticVersion());
	}

	static const physx::PxU32 ClassAlignment = 8;

	static const physx::PxU32* staticChecksum(physx::PxU32& bits)
	{
		bits = 8 * sizeof(SubmeshParametersNS::checksum);
		return SubmeshParametersNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const SubmeshParametersNS::ParametersStruct& parameters(void) const
	{
		SubmeshParameters* tmpThis = const_cast<SubmeshParameters*>(this);
		return *(static_cast<SubmeshParametersNS::ParametersStruct*>(tmpThis));
	}

	SubmeshParametersNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<SubmeshParametersNS::ParametersStruct*>(this));
	}

	virtual NxParameterized::ErrorType getParameterHandle(const char* long_name, NxParameterized::Handle& handle) const;
	virtual NxParameterized::ErrorType getParameterHandle(const char* long_name, NxParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NxParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NxParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NxParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NxParameterized::MutexType mBuiltFlagMutex;
};

class SubmeshParametersFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(SubmeshParameters), SubmeshParameters::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, SubmeshParameters::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SubmeshParameters");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(SubmeshParameters)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, SubmeshParameters)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, SubmeshParameters::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, SubmeshParameters::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class SubmeshParameters");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of SubmeshParameters here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (SubmeshParameters*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (SubmeshParameters::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (SubmeshParameters::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (SubmeshParameters::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (SubmeshParameters::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
