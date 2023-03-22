#pragma once
#include "../../util/util.h"
#include "../esp/esp.h"

class SDK {
public:
	static Vector3 GetBoneWithRotation(uintptr_t mesh, int id);
	static Vector2 ProjectWorldToScreen(Vector3 WorldLocation);
	static Camera GetViewAngles();
};

namespace LocalPtrs {
	inline uintptr_t Player = 0x38; //our local pawn (our player)
	inline uintptr_t Mesh = 0x310;
	inline uintptr_t PlayerState = 0x2a8;
	inline uintptr_t RootComponent = 0x190;
	inline uintptr_t LocalPlayers = 0x38;
	inline uintptr_t PlayerController = 0x30;
	inline uintptr_t Gworld = 0xec6b150; //uworld != gworld u little fuckers
}
inline Camera vCamera;