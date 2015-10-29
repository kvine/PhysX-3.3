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
// Created: 2015.10.22 17:26:23

#ifndef HEADER_ApexEmitterActorParameters_h
#define HEADER_ApexEmitterActorParameters_h

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
namespace emitter
{

#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())

namespace ApexEmitterActorParametersNS
{



struct ParametersStruct
{

	physx::PxMat34Legacy initialPose;
	physx::PxF32 initialScale;
	physx::PxMat34Legacy attachRelativePose;
	bool emitAssetParticles;
	NxParameterized::DummyStringStruct overlapTestGroupMaskName;
	NxParameterized::DummyStringStruct overlapTestGroupsMask128Name;
	physx::PxF32 emitterDuration;

};

static const physx::PxU32 checksum[] = { 0x6f5c8b1b, 0xaa19e274, 0x9f8ffccb, 0x6b11af50, };

} // namespace ApexEmitterActorParametersNS

#ifndef NX_PARAMETERIZED_ONLY_LAYOUTS
class ApexEmitterActorParameters : public NxParameterized::NxParameters, public ApexEmitterActorParametersNS::ParametersStruct
{
public:
	ApexEmitterActorParameters(NxParameterized::Traits* traits, void* buf = 0, PxI32* refCount = 0);

	virtual ~ApexEmitterActorParameters();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ApexEmitterActorParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const physx::PxU32 ClassVersion = ((physx::PxU32)0 << 16) + (physx::PxU32)0;

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
		bits = 8 * sizeof(ApexEmitterActorParametersNS::checksum);
		return ApexEmitterActorParametersNS::checksum;
	}

	static void freeParameterDefinitionTable(NxParameterized::Traits* traits);

	const physx::PxU32* checksum(physx::PxU32& bits) const
	{
		return staticChecksum(bits);
	}

	const ApexEmitterActorParametersNS::ParametersStruct& parameters(void) const
	{
		ApexEmitterActorParameters* tmpThis = const_cast<ApexEmitterActorParameters*>(this);
		return *(static_cast<ApexEmitterActorParametersNS::ParametersStruct*>(tmpThis));
	}

	ApexEmitterActorParametersNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ApexEmitterActorParametersNS::ParametersStruct*>(this));
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

class ApexEmitterActorParametersFactory : public NxParameterized::Factory
{
	static const char* const vptr;

public:
	virtual NxParameterized::Interface* create(NxParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ApexEmitterActorParameters), ApexEmitterActorParameters::ClassAlignment);
		if (!NxParameterized::IsAligned(newPtr, ApexEmitterActorParameters::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ApexEmitterActorParameters");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ApexEmitterActorParameters)); // always initialize memory allocated to zero for default values
		return NX_PARAM_PLACEMENT_NEW(newPtr, ApexEmitterActorParameters)(paramTraits);
	}

	virtual NxParameterized::Interface* finish(NxParameterized::Traits* paramTraits, void* bufObj, void* bufStart, physx::PxI32* refCount)
	{
		if (!NxParameterized::IsAligned(bufObj, ApexEmitterActorParameters::ClassAlignment)
		        || !NxParameterized::IsAligned(bufStart, ApexEmitterActorParameters::ClassAlignment))
		{
			NX_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ApexEmitterActorParameters");
			return 0;
		}

		// Init NxParameters-part
		// We used to call empty constructor of ApexEmitterActorParameters here
		// but it may call default constructors of members and spoil the data
		NX_PARAM_PLACEMENT_NEW(bufObj, NxParameterized::NxParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ApexEmitterActorParameters*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ApexEmitterActorParameters::staticClassName());
	}

	virtual physx::PxU32 getVersion()
	{
		return (ApexEmitterActorParameters::staticVersion());
	}

	virtual physx::PxU32 getAlignment()
	{
		return (ApexEmitterActorParameters::ClassAlignment);
	}

	virtual const physx::PxU32* getChecksum(physx::PxU32& bits)
	{
		return (ApexEmitterActorParameters::staticChecksum(bits));
	}
};
#endif // NX_PARAMETERIZED_ONLY_LAYOUTS

} // namespace emitter
} // namespace apex
} // namespace physx

#pragma warning(pop)

#endif
