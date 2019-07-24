// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
// #include <windows.h>
// #include <windowsx.h>

// C RunTime Header Files
#include <malloc.h>
#include <map>
#include <vector>
#include <mutex>
#include <fstream>

#include "vulkan/vulkan.h"
#include <X11/X.h>

// we are using DirectXMath
#include <glm/glm.hpp>
using namespace glm;

// TODO: reference additional headers your program requires here
#include "base/Imgui.h"
#include "base/ImGuiHelper.h"
#include "base/Device.h"
#include "base/Helper.h"
#include "base/Texture.h"
#include "base/SwapChain.h"
#include "base/UploadHeap.h"
#include "base/GPUTimestamps.h"
#include "base/DebugMarkersExt.h"
#include "base/CommandListRing.h"
#include "base/StaticBufferPool.h"
#include "base/DynamicBufferRing.h"
#include "base/ResourceViewHeaps.h"
#include "base/ShaderCompilerHelper.h"

#include "Misc/Misc.h"
#include "Misc/Camera.h"
#include "Misc/FrameworkWindows.h"

#include "PostProc/Bloom.h"
#include "PostProc/BlurPS.h"
#include "PostProc/SkyDome.h"
#include "PostProc/Tonemapping.h"
#include "PostProc/SkyDomeProc.h"
#include "PostProc/DownSamplePS.h"

#include "GLTF/GltfPbrPass.h"
#include "GLTF/GltfBBoxPass.h"
#include "GLTF/GltfDepthPass.h"

#include "widgets/Axis.h"
#include "widgets/CheckerboardFloor.h"
#include "widgets/WireframeBox.h"
#include "widgets/WireframeSphere.h"


using namespace CAULDRON_VK;
