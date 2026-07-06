#include "C:/Program Files/Unity/Editor/Data/PlaybackEngines/N3DS/Includes/InputN3DSInterface.h"
#include "C:/Program Files/Unity/Editor/Data/PlaybackEngines/N3DS/Includes/GyroscopeReader.h"
#include <nn/hid/CTR/hid_AccelerometerReader.h>
#include "C:/Program Files/Unity/Editor/Data/PlaybackEngines/N3DS/Includes/InputN3DSInterface.h"
#include "C:/Program Files/Unity/Editor/Data/PlaybackEngines/N3DS/Includes/ExtraPadReader.h"

extern "C" {
N3DS::IGyroscopeReader* CreateGyroscopeReader (nn::hid::CTR::AccelerometerReader* pAccReader)
{
	return new N3DS::GyroscopeReaderInternal(pAccReader);
}
}
extern "C" {
void InitializeExtraPad ()
{
	N3DS::ExtraPadReaderInternal::StaticInitialize();
}
void FinalizeExtraPad ()
{
	N3DS::ExtraPadReaderInternal::StaticFinalize();
}
N3DS::IExtraPadReader* CreateExtraPadReader ()
{
	return new N3DS::ExtraPadReaderInternal();
}
}