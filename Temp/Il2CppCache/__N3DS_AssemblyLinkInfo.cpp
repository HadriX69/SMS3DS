#include <nn/dbg.h>
#include "il2cpp-config.h"
#include "class-internals.h"
#include "vm/Assembly.h"
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
extern "C" void OutputAssemblyDetails()
{
    extern int g_N3dsDeviceMemSizeMiB; g_N3dsDeviceMemSizeMiB = 32;
    extern int g_N3dsOldDeviceMemSizeMiB; g_N3dsOldDeviceMemSizeMiB = 16;
    extern int g_N3dsReservedVramKiB; g_N3dsReservedVramKiB = 0;
    extern int g_N3dsInitialManagedHeapSizeKiB; g_N3dsInitialManagedHeapSizeKiB = 1024;
    extern int g_N3dsStackSizeKiB; g_N3dsStackSizeKiB = 1024;
    extern int g_N3dsGcPriority; g_N3dsGcPriority = 16;
    extern int g_N3dsVboSizeKiB; g_N3dsVboSizeKiB = 1024;
    extern int g_N3dsAllocJobsNumBuckets; g_N3dsAllocJobsNumBuckets = 8;
    extern int g_N3dsAllocJobsBucketSize; g_N3dsAllocJobsBucketSize = 64;
    extern int g_N3dsMaxSessions; g_N3dsMaxSessions = 0;
    extern int g_N3dsSocketMemSizeKiB; g_N3dsSocketMemSizeKiB = 128;
    extern int g_N3dsVSyncType; g_N3dsVSyncType = 0;
    extern bool g_N3dsIsSaveAvailable; g_N3dsIsSaveAvailable = true;
    extern bool g_N3dsCanUseNetLib; g_N3dsCanUseNetLib = false;
    extern int g_N3dsStereoViewType; g_N3dsStereoViewType = 1;
    extern int g_N3dsStereoSliderOffMode; g_N3dsStereoSliderOffMode = 0;
    extern bool g_N3dsIsNexEnabled; g_N3dsIsNexEnabled = false;
    extern bool g_N3dsIsPiaEnabled; g_N3dsIsPiaEnabled = false;
    extern bool g_N3dsIsCameraEnabled; g_N3dsIsCameraEnabled = false;
    extern bool g_N3dsFmodVersion; g_N3dsFmodVersion = 0;
    extern bool g_N3dsIsProfilerDisabled; g_N3dsIsProfilerDisabled = false;
    extern bool g_N3dsDoesRomFSUseCache; g_N3dsDoesRomFSUseCache = true;
    extern int g_N3dsRomFSMaxFiles; g_N3dsRomFSMaxFiles = 64;
    extern int g_N3dsRomFSMaxDirs; g_N3dsRomFSMaxDirs = 16;
    extern int g_N3dsSaveDataMaxFiles; g_N3dsSaveDataMaxFiles = 16;
    extern int g_N3dsSaveDataMaxDirs; g_N3dsSaveDataMaxDirs = 4;
    extern int g_N3dsExtSaveDataNumber; g_N3dsExtSaveDataNumber = 0xAB1DE;
    extern int g_N3dsStreetPassId; g_N3dsStreetPassId = 0;
    extern int g_N3dsExtSaveDataMaxFiles; g_N3dsExtSaveDataMaxFiles = 64;
    extern int g_N3dsExtSaveDataMaxDirs; g_N3dsExtSaveDataMaxDirs = 16;
    extern int g_N3dsOrcsDumpButton; g_N3dsOrcsDumpButton = 0;
    extern int g_N3dsUniqueId; g_N3dsUniqueId = 0x66F8B;
    extern bool g_N3dsSettingsInitialized; g_N3dsSettingsInitialized = true;

    extern Il2CppGenericClass* s_Il2CppGenericTypes;
    NN_LOG("IL2CPP Metadata Cache @ 0x%p\n", s_Il2CppGenericTypes);
    extern const Il2CppCodeRegistration g_CodeRegistration;
    NN_LOG("IL2CPP Code Registration @ 0x%p\n", &g_CodeRegistration);
}
