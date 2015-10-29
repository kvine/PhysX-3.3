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
// Created: 2015.10.22 17:26:30

#include "ClothingGraphicalLodParameters_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NxParameterized;

namespace physx
{
namespace apex
{

using namespace ClothingGraphicalLodParameters_0p0NS;

const char* const ClothingGraphicalLodParameters_0p0Factory::vptr =
    NxParameterized::getVptr<ClothingGraphicalLodParameters_0p0, ClothingGraphicalLodParameters_0p0::ClassAlignment>();

const physx::PxU32 NumParamDefs = 28;
static NxParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 6, 14, 20, 21, 22, 5, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 23,
	24, 25, 26, 27,
};

#define TENUM(type) physx::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NxParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 9 },
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->lod), NULL, 0 }, // lod
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->physicalMeshId), NULL, 0 }, // physicalMeshId
	{ TYPE_REF, false, (size_t)(&((ParametersStruct*)0)->renderMeshAsset), NULL, 0 }, // renderMeshAsset
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->immediateClothMap), CHILDREN(9), 1 }, // immediateClothMap
	{ TYPE_U32, false, 1 * sizeof(physx::PxU32), NULL, 0 }, // immediateClothMap[]
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->skinClothMapB), CHILDREN(10), 1 }, // skinClothMapB
	{ TYPE_STRUCT, false, 1 * sizeof(SkinClothMapB_Type), CHILDREN(11), 6 }, // skinClothMapB[]
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapB_Type*)0)->vtxTetraBary), NULL, 0 }, // skinClothMapB[].vtxTetraBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->vertexIndexPlusOffset), NULL, 0 }, // skinClothMapB[].vertexIndexPlusOffset
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapB_Type*)0)->nrmTetraBary), NULL, 0 }, // skinClothMapB[].nrmTetraBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->faceIndex0), NULL, 0 }, // skinClothMapB[].faceIndex0
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->tetraIndex), NULL, 0 }, // skinClothMapB[].tetraIndex
	{ TYPE_U32, false, (size_t)(&((SkinClothMapB_Type*)0)->submeshIndex), NULL, 0 }, // skinClothMapB[].submeshIndex
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->skinClothMapC), CHILDREN(17), 1 }, // skinClothMapC
	{ TYPE_STRUCT, false, 1 * sizeof(SkinClothMapC_Type), CHILDREN(18), 4 }, // skinClothMapC[]
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapC_Type*)0)->vertexBary), NULL, 0 }, // skinClothMapC[].vertexBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapC_Type*)0)->faceIndex0), NULL, 0 }, // skinClothMapC[].faceIndex0
	{ TYPE_VEC3, false, (size_t)(&((SkinClothMapC_Type*)0)->normalBary), NULL, 0 }, // skinClothMapC[].normalBary
	{ TYPE_U32, false, (size_t)(&((SkinClothMapC_Type*)0)->vertexIndexPlusOffset), NULL, 0 }, // skinClothMapC[].vertexIndexPlusOffset
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->skinClothMapThickness), NULL, 0 }, // skinClothMapThickness
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->skinClothMapOffset), NULL, 0 }, // skinClothMapOffset
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->tetraMap), CHILDREN(22), 1 }, // tetraMap
	{ TYPE_STRUCT, false, 1 * sizeof(TetraLink_Type), CHILDREN(23), 4 }, // tetraMap[]
	{ TYPE_VEC3, false, (size_t)(&((TetraLink_Type*)0)->vertexBary), NULL, 0 }, // tetraMap[].vertexBary
	{ TYPE_U32, false, (size_t)(&((TetraLink_Type*)0)->tetraIndex0), NULL, 0 }, // tetraMap[].tetraIndex0
	{ TYPE_VEC3, false, (size_t)(&((TetraLink_Type*)0)->normalBary), NULL, 0 }, // tetraMap[].normalBary
	{ TYPE_U32, false, (size_t)(&((TetraLink_Type*)0)->_dummyForAlignment), NULL, 0 }, // tetraMap[]._dummyForAlignment
};


bool ClothingGraphicalLodParameters_0p0::mBuiltFlag = false;
NxParameterized::MutexType ClothingGraphicalLodParameters_0p0::mBuiltFlagMutex;

ClothingGraphicalLodParameters_0p0::ClothingGraphicalLodParameters_0p0(NxParameterized::Traits* traits, void* buf, PxI32* refCount) :
	NxParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ClothingGraphicalLodParameters_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ClothingGraphicalLodParameters_0p0::~ClothingGraphicalLodParameters_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ClothingGraphicalLodParameters_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NxParameterized::Traits* traits = mParameterizedTraits;
	physx::PxI32* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ClothingGraphicalLodParameters_0p0();

	NxParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NxParameterized::DefinitionImpl* ClothingGraphicalLodParameters_0p0::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NxParameterized::DefinitionImpl* ClothingGraphicalLodParameters_0p0::getParameterDefinitionTree(void) const
{
	ClothingGraphicalLodParameters_0p0* tmpParam = const_cast<ClothingGraphicalLodParameters_0p0*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NxParameterized::ErrorType ClothingGraphicalLodParameters_0p0::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NxParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NxParameterized::ErrorType ClothingGraphicalLodParameters_0p0::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NxParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void ClothingGraphicalLodParameters_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ClothingGraphicalLodParameters_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ClothingGraphicalLodParameters_0p0::freeParameterDefinitionTable(NxParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NxParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (physx::PxU32 i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void ClothingGraphicalLodParameters_0p0::buildTree(void)
{

	physx::PxU32 allocSize = sizeof(NxParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NxParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(static_cast<void*>(ParamDefTable), 0, allocSize);

	for (physx::PxU32 i = 0; i < NumParamDefs; ++i)
	{
		NX_PARAM_PLACEMENT_NEW(ParamDefTable + i, NxParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="lod"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("lod", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Even for a small number of LoDs, the LoD value does not have to be continuous. An Asset\ncan have 3 LoDs at leve 0, 3 and 6.\n", true);
		HintTable[1].init("shortDescription", "The actual LoD value", true);
		ParamDefTable[1].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="physicalMeshId"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("physicalMeshId", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This indexes a physical mesh from the physicalMesh Array in the ClothingAsset. Different\ngraphical LoDs can share a physical mesh.\n", true);
		HintTable[1].init("shortDescription", "Index of the physical mesh used for this graphical mesh.", true);
		ParamDefTable[2].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="renderMeshAsset"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("renderMeshAsset", TYPE_REF, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("INCLUDED", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "Each LoD must have a unique render mesh asset.\n", true);
		HintTable[2].init("shortDescription", "The render mesh asset used for this LoD level", true);
		ParamDefTable[3].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */


		static const char* const RefVariantVals[] = { "RenderMeshAssetParameters" };
		ParamDefTable[3].setRefVariantVals((const char**)RefVariantVals, 1);



	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="immediateClothMap"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("immediateClothMap", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If some vertices can not be mapped properly, they will use the skinClothMapB to tie to the physical mesh.\n", true);
		HintTable[1].init("shortDescription", "Directly map some of the physically simulated vertices on the graphical mesh", true);
		ParamDefTable[4].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="immediateClothMap[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("immediateClothMap", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "If some vertices can not be mapped properly, they will use the skinClothMapB to tie to the physical mesh.\n", true);
		HintTable[1].init("shortDescription", "Directly map some of the physically simulated vertices on the graphical mesh", true);
		ParamDefTable[5].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="skinClothMapB"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("skinClothMapB", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates and implicit tetrahedrons.", true);
		ParamDefTable[6].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="skinClothMapB[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("skinClothMapB", TYPE_STRUCT, "SkinClothMapB", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates and implicit tetrahedrons.", true);
		ParamDefTable[7].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="skinClothMapB[].vtxTetraBary"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("vtxTetraBary", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate into the implicit tetrahedron.", true);
		ParamDefTable[8].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="skinClothMapB[].vertexIndexPlusOffset"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("vertexIndexPlusOffset", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The vertex index in the graphical mesh (the target index).", true);
		ParamDefTable[9].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="skinClothMapB[].nrmTetraBary"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("nrmTetraBary", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate of (vertex+normal). When vertex is subtracted this will result in the normal again.", true);
		ParamDefTable[10].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="skinClothMapB[].faceIndex0"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("faceIndex0", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "First index of the 3 consecutive indices making the physical triangle.", true);
		ParamDefTable[11].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="skinClothMapB[].tetraIndex"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("tetraIndex", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Selects which of the 6 implicit tetrahedrons is used for the mapping.", true);
		ParamDefTable[12].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="skinClothMapB[].submeshIndex"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("submeshIndex", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("DONOTSERIALIZE", physx::PxU64(1), true);
		ParamDefTable[13].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("DONOTSERIALIZE", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "This is only needed during the authoring stage and thus does not need to be serialized.\n", true);
		HintTable[2].init("shortDescription", "Index into which Physical Submesh/LoD this element of the mapping belongs to.", true);
		ParamDefTable[13].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="skinClothMapC"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("skinClothMapC", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates.", true);
		ParamDefTable[14].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="skinClothMapC[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("skinClothMapC", TYPE_STRUCT, "SkinClothMapC", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Usually maps only a subset of all vertices to the physical mesh. The others can be done through the immediateClothMap.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated triangle through barycentric coordinates.", true);
		ParamDefTable[15].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="skinClothMapC[].vertexBary"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("vertexBary", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate into the triangle.", true);
		ParamDefTable[16].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="skinClothMapC[].faceIndex0"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("faceIndex0", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "First index of the 3 consecutive indices making the physical triangle.", true);
		ParamDefTable[17].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="skinClothMapC[].normalBary"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("normalBary", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate of (vertex+normal). When vertex is subtracted this will result in the normal again.", true);
		ParamDefTable[18].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="skinClothMapC[].vertexIndexPlusOffset"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("vertexIndexPlusOffset", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The vertex index in the graphical mesh (the target index).", true);
		ParamDefTable[19].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="skinClothMapThickness"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("skinClothMapThickness", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("READONLY", physx::PxU64(1), true);
		ParamDefTable[20].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("READONLY", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "The physical mesh is expanded to both directions with this thickness, resulting in the doubled thickness.\nOnly used for Mesh-Mesh Skinning.\n", true);
		HintTable[2].init("shortDescription", "Thickness of the mesh implicitly defined around the flat physical (triangle) mesh.", true);
		ParamDefTable[20].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="skinClothMapOffset"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("skinClothMapOffset", TYPE_F32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("READONLY", physx::PxU64(1), true);
		ParamDefTable[21].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("READONLY", physx::PxU64(1), true);
		HintTable[1].init("longDescription", "The length of the normals when added to the vertex to generate the barycentric coordinates.\n", true);
		HintTable[2].init("shortDescription", "Normal offset of the mesh implicitly defined around the flat physical (triangle) mesh.", true);
		ParamDefTable[21].setHints((const NxParameterized::Hint**)HintPtrTable, 3);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="tetraMap"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("tetraMap", TYPE_ARRAY, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This map is only used when the physical mesh is based on tetrahedrons.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated tetrahedron.", true);
		ParamDefTable[22].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="tetraMap[]"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("tetraMap", TYPE_STRUCT, "TetraLink", true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "This map is only used when the physical mesh is based on tetrahedrons.\n", true);
		HintTable[1].init("shortDescription", "Map each graphical vertex onto a physically simulated tetrahedron.", true);
		ParamDefTable[23].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="tetraMap[].vertexBary"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("vertexBary", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate into the tetrahedron.", true);
		ParamDefTable[24].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=25, longName="tetraMap[].tetraIndex0"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[25];
		ParamDef->init("tetraIndex0", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "First index of the 4 consecutive indices making the physical tetrahedron.", true);
		ParamDefTable[25].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=26, longName="tetraMap[].normalBary"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[26];
		ParamDef->init("normalBary", TYPE_VEC3, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The barycentric coordinate of (vertex+normal). When vertex is subtracted this will result in the normal again.", true);
		ParamDefTable[26].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=27, longName="tetraMap[]._dummyForAlignment"
	{
		NxParameterized::DefinitionImpl* ParamDef = &ParamDefTable[27];
		ParamDef->init("_dummyForAlignment", TYPE_U32, NULL, true);

#ifdef NX_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("DONOTSERIALIZE", physx::PxU64(1), true);
		ParamDefTable[27].setHints((const NxParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("DONOTSERIALIZE", physx::PxU64(1), true);
		HintTable[1].init("shortDescription", "Does not hold any data, only helps the alignment of the struct.", true);
		ParamDefTable[27].setHints((const NxParameterized::Hint**)HintPtrTable, 2);

#endif /* NX_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[9];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(6);
		Children[5] = PDEF_PTR(14);
		Children[6] = PDEF_PTR(20);
		Children[7] = PDEF_PTR(21);
		Children[8] = PDEF_PTR(22);

		ParamDefTable[0].setChildren(Children, 9);
	}

	// SetChildren for: nodeIndex=4, longName="immediateClothMap"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(5);

		ParamDefTable[4].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=6, longName="skinClothMapB"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(7);

		ParamDefTable[6].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=7, longName="skinClothMapB[]"
	{
		static Definition* Children[6];
		Children[0] = PDEF_PTR(8);
		Children[1] = PDEF_PTR(9);
		Children[2] = PDEF_PTR(10);
		Children[3] = PDEF_PTR(11);
		Children[4] = PDEF_PTR(12);
		Children[5] = PDEF_PTR(13);

		ParamDefTable[7].setChildren(Children, 6);
	}

	// SetChildren for: nodeIndex=14, longName="skinClothMapC"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(15);

		ParamDefTable[14].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=15, longName="skinClothMapC[]"
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(16);
		Children[1] = PDEF_PTR(17);
		Children[2] = PDEF_PTR(18);
		Children[3] = PDEF_PTR(19);

		ParamDefTable[15].setChildren(Children, 4);
	}

	// SetChildren for: nodeIndex=22, longName="tetraMap"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(23);

		ParamDefTable[22].setChildren(Children, 1);
	}

	// SetChildren for: nodeIndex=23, longName="tetraMap[]"
	{
		static Definition* Children[4];
		Children[0] = PDEF_PTR(24);
		Children[1] = PDEF_PTR(25);
		Children[2] = PDEF_PTR(26);
		Children[3] = PDEF_PTR(27);

		ParamDefTable[23].setChildren(Children, 4);
	}

	mBuiltFlag = true;

}
void ClothingGraphicalLodParameters_0p0::initStrings(void)
{
}

void ClothingGraphicalLodParameters_0p0::initDynamicArrays(void)
{
	immediateClothMap.buf = NULL;
	immediateClothMap.isAllocated = true;
	immediateClothMap.elementSize = sizeof(physx::PxU32);
	immediateClothMap.arraySizes[0] = 0;
	skinClothMapB.buf = NULL;
	skinClothMapB.isAllocated = true;
	skinClothMapB.elementSize = sizeof(SkinClothMapB_Type);
	skinClothMapB.arraySizes[0] = 0;
	skinClothMapC.buf = NULL;
	skinClothMapC.isAllocated = true;
	skinClothMapC.elementSize = sizeof(SkinClothMapC_Type);
	skinClothMapC.arraySizes[0] = 0;
	tetraMap.buf = NULL;
	tetraMap.isAllocated = true;
	tetraMap.elementSize = sizeof(TetraLink_Type);
	tetraMap.arraySizes[0] = 0;
}

void ClothingGraphicalLodParameters_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	lod = physx::PxU32(0);
	physicalMeshId = physx::PxU32(-1);
	skinClothMapThickness = physx::PxF32(0);
	skinClothMapOffset = physx::PxF32(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ClothingGraphicalLodParameters_0p0::initReferences(void)
{
	renderMeshAsset = NULL;

}

void ClothingGraphicalLodParameters_0p0::freeDynamicArrays(void)
{
	if (immediateClothMap.isAllocated && immediateClothMap.buf)
	{
		mParameterizedTraits->free(immediateClothMap.buf);
	}
	if (skinClothMapB.isAllocated && skinClothMapB.buf)
	{
		mParameterizedTraits->free(skinClothMapB.buf);
	}
	if (skinClothMapC.isAllocated && skinClothMapC.buf)
	{
		mParameterizedTraits->free(skinClothMapC.buf);
	}
	if (tetraMap.isAllocated && tetraMap.buf)
	{
		mParameterizedTraits->free(tetraMap.buf);
	}
}

void ClothingGraphicalLodParameters_0p0::freeStrings(void)
{
}

void ClothingGraphicalLodParameters_0p0::freeReferences(void)
{
	if (renderMeshAsset)
	{
		renderMeshAsset->destroy();
	}

}

} // namespace apex
} // namespace physx
