#pragma once 
#include "../../util/util.h"
#include "../sdk/sdk.h"
#include "../aimbot/aimbot.h"
class Esp {
public:
	static void ActorLoop();
};
inline bool bCornerBox = false;
inline bool bBox = false;
inline bool bSnaplines = false;
inline bool bCrosshair = false;


namespace Debug {
	static bool PrintPointers = false;
	static bool PrintLocations = false;
}