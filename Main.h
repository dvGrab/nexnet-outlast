#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <Psapi.h>
#include <unordered_map>
#include <thread>
#include <detours.h>
#include <combaseapi.h>
#include <codecvt>
#include <locale>

#pragma comment(lib, "detours.lib")

#include "SDK.h"
#include "Utilities.h"
#include "DirectX.h"
#include "Engine.h"

#include "Players.h"
#include "World.h"
#include "NPC.h"
#include "Misc.h"

#include "Math.h"

