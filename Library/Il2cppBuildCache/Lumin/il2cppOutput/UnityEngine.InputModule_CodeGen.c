﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern void NativeUpdateCallback__ctor_mBCA97F21830E76C5C6422815CEA55013C19E30B6 (void);
// 0x00000002 System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
extern void NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC (void);
// 0x00000003 System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*,System.AsyncCallback,System.Object)
extern void NativeUpdateCallback_BeginInvoke_mE1760CCF47E50F8D8955C6031C58BC822A91C6F4 (void);
// 0x00000004 System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
extern void NativeUpdateCallback_EndInvoke_m79CB9CB0869EF7085B74BD65411E77F8CA98644F (void);
// 0x00000005 System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
extern void NativeInputSystem__cctor_mBC8D9EFB54621C5F5C7468049554681689C146F5 (void);
// 0x00000006 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern void NativeInputSystem_NotifyBeforeUpdate_m08C41C83B0652EADC3002AB2D4EE375BC8D5488D (void);
// 0x00000007 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
extern void NativeInputSystem_NotifyUpdate_m554A569F849119BDFDE14AD670584B916BF3CA5B (void);
// 0x00000008 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
extern void NativeInputSystem_NotifyDeviceDiscovered_m7842C0ADA06D07F512946E0CD650094D1B7D6147 (void);
// 0x00000009 System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
extern void NativeInputSystem_ShouldRunUpdate_mB7D145F77CBB134076D82514AED1B934093F9F03 (void);
// 0x0000000A System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern void NativeInputSystem_set_hasDeviceDiscoveredCallback_mFB05E715DCD917DD1F7504F9105B54EB38434B80 (void);
static Il2CppMethodPointer s_methodPointers[10] = 
{
	NativeUpdateCallback__ctor_mBCA97F21830E76C5C6422815CEA55013C19E30B6,
	NativeUpdateCallback_Invoke_m323D2546D5B759E75B912EBF7ACF1EC1113DBFCC,
	NativeUpdateCallback_BeginInvoke_mE1760CCF47E50F8D8955C6031C58BC822A91C6F4,
	NativeUpdateCallback_EndInvoke_m79CB9CB0869EF7085B74BD65411E77F8CA98644F,
	NativeInputSystem__cctor_mBC8D9EFB54621C5F5C7468049554681689C146F5,
	NativeInputSystem_NotifyBeforeUpdate_m08C41C83B0652EADC3002AB2D4EE375BC8D5488D,
	NativeInputSystem_NotifyUpdate_m554A569F849119BDFDE14AD670584B916BF3CA5B,
	NativeInputSystem_NotifyDeviceDiscovered_m7842C0ADA06D07F512946E0CD650094D1B7D6147,
	NativeInputSystem_ShouldRunUpdate_mB7D145F77CBB134076D82514AED1B934093F9F03,
	NativeInputSystem_set_hasDeviceDiscoveredCallback_mFB05E715DCD917DD1F7504F9105B54EB38434B80,
};
static const int32_t s_InvokerIndices[10] = 
{
	1490,
	1313,
	381,
	2580,
	5085,
	4990,
	4594,
	4595,
	4592,
	4987,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_InputModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_InputModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_InputModule_CodeGenModule = 
{
	"UnityEngine.InputModule.dll",
	10,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_InputModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
