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
// Created: 2015.01.18 19:26:16

#ifndef HEADER_ClothingCookedPhysX3Param_h
#define HEADER_ClothingCookedPhysX3Param_h

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
namespace clothing
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace ClothingCookedPhysX3ParamNS
{

struct PhaseDesc_Type;
struct SetDesc_Type;
struct FabricGPU_Type;

struct F32_DynamicArray1D_Type
{
	physx::PxF32* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct U32_DynamicArray1D_Type
{
	physx::PxU32* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct SetDesc_DynamicArray1D_Type
{
	SetDesc_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct PhaseDesc_DynamicArray1D_Type
{
	PhaseDesc_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct FabricGPU_DynamicArray1D_Type
{
	FabricGPU_Type* buf;
	bool isAllocated;
	physx::PxI32 elementSize;
	physx::PxI32 arraySizes[1];
};

struct SetDesc_Type
{
	physx::PxU32 fiberEnd;
	physx::PxU32 longestFiber;
	physx::PxU32 shortestFiber;
	physx::PxU32 numEdges;
	physx::PxF32 avgEdgeLength;
	physx::PxU32 avgFiberLength;
};
struct PhaseDesc_Type
{
	physx::PxU32 phaseType;
	physx::PxU32 setIndex;
	physx::PxU32 restValueOffset;
};
struct FabricGPU_Type
{
	void* fabricGPU;
	void* factory;
};

struct ParametersStruct
{

	physx::PxU32 physicalMeshId;
	physx::PxU32 physicalSubMeshId;
	physx::PxU32 numVertices;
	F32_DynamicArray1D_Type deformableRestLengths;
	U32_DynamicArray1D_Type deformableIndices;
	U32_DynamicArray1D_Type selfCollisionIndices;
	U32_DynamicArray1D_Type selfCollisionNormalIndices;
	U32_DynamicArray1D_Type selfCollisionNormalSetSizes;
	SetDesc_DynamicArray1D_Type deformableSets;
	PhaseDesc_DynamicArray1D_Type deformablePhaseDescs;
	U32_DynamicArray1D_Type tetherAnchors;
	F32_DynamicArray1D_Type tetherLengths;
	F32_DynamicArray1D_Type deformableInvVertexWeights;
	U32_DynamicArray1D_Type virtualParticleIndices;
	F32_DynamicArray1D_Type virtualParticleWeights;
	physx::PxU32 cookedDataVersion;
	void* fabricCPU;
	FabricGPU_DynamicArray1D_Type fabricGPU;
	NxParameterized::Interface* nextCookedData;

};

static const physx::PxU32 checksum[] = { 0x79f27469, 0x6d51114c, 0x5b7f675d, 0x042718ac, };

} // namespace ClothingCookedPhysX3ParamNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ClothingCookedPhysX3Param : public NxParameterized::NxParameters, public ClothingCookedPhysX3ParamNS::ParametersStruct
{
public:
	ClothingCookedPhysX3Param(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ClothingCookedPhysX3Param();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingCookedPhysX3Param");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)4;

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
		bits = 8 * sizeof(ClothingCookedPhysX3ParamNS::checksum);
		return ClothingCookedPhysX3ParamNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingCookedPhysX3ParamNS::ParametersStruct& parameters(void) const
	{
		ClothingCookedPhysX3Param* tmpThis = const_cast<ClothingCookedPhysX3Param*>(this);
		return *(static_cast<ClothingCookedPhysX3ParamNS::ParametersStruct*>(tmpThis));
	}

	ClothingCookedPhysX3ParamNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingCookedPhysX3ParamNS::ParametersStruct*>(this));
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

class ClothingCookedPhysX3ParamFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingCookedPhysX3Param), ClothingCookedPhysX3Param::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ClothingCookedPhysX3Param::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingCookedPhysX3Param");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingCookedPhysX3Param)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ClothingCookedPhysX3Param)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ClothingCookedPhysX3Param::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ClothingCookedPhysX3Param::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingCookedPhysX3Param");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ClothingCookedPhysX3Param here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingCookedPhysX3Param*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingCookedPhysX3Param::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ClothingCookedPhysX3Param::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ClothingCookedPhysX3Param::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ClothingCookedPhysX3Param::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace clothing
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
