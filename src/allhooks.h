#pragma once
#include "q_shared.h"
#include "player.h"

///////////////////////////////////////////////////////////////////////////////
// misc_hooks.asm
__cdecl void SL_Init();
__cdecl void Swap_Init();
__cdecl void CSS_InitConstantConfigStrings();
__cdecl void Con_InitChannels();
__cdecl void SEH_UpdateLanguageInfo();
__cdecl void SetAnimCheck(int);
__cdecl qboolean BG_IsWeaponValid(playerState_t *ps, unsigned int index);
__cdecl qboolean SEH_StringEd_GetString(const char *input);
__cdecl void SL_RemoveRefToString(unsigned int);