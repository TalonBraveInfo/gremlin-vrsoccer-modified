
/********************************************************/
/*      3D ENGINE - Football object data   14/04/95	  */
/********************************************************/

#include "defs.h"

#include <stdlib.h>
#include "3deng.h"
#include "data.h"


/////////////
// PLAYERS //

obj player[NPLAYERS];

// Motion captured animations
capfrm *player_p;
mcap *mcaps;

mcap mcaps8[MC_NO]=
        {
                {0, 23},
                {0, 86},
                {0, 53},
                {0, 43},
                {0, 27},
                {0, 46},
                {0, 28},
                {0, 38},

                {0, 21},
                {0, 0},
                {0, 42},
                {0, 0},
                {0, 27},
                {0, 0},
                {0, 43},
                {0, 0},
                {0, 32},
                {0, 0},
                {0, 36},
                {0, 0},
                {0, 36},
                {0, 0},

                {0, 49},
                {0, 0},
                {0, 50},
                {0, 0},
                {0, 45},
                {0, 0},
                {0, 48},
                {0, 0},
                {0, 44},
                {0, 0},
                {0, 47},
                {0, 0},

                {0, 36},
                {0, 0},
                {0, 30},
                {0, 0},
                {0, 33},
                {0, 0},
                {0, 36},
                {0, 0},
                {0, 30},
                {0, 0},

                {0, 0},
                {0, 0},
                {0, 33},
                {0, 0},
                {0, 33},
                {0, 0},
                {0, 32},
                {0, 0},
                {0, 32},
                {0, 0},
                {0, 20},
                {0, 0},

                {0, 68},
                {0, 0},
                {0, 95},
                {0, 0},
                {0, 28},
                {0, 0},
                {0, 68},
                {0, 0},

                {0, 27},
                {0, 0},
                {0, 28},
                {0, 0},
                {0, 25},
                {0, 0},

                {0, 32},
                {0, 26},

                {0, 26},
                {0, 29},
                {0, 27},
                {0, 13},
                {0, 33},
                {0, 0},

                {0, 39},
                {0, 51},
                {0, 52},
                {0, 38},
                {0, 0},
                {0, 36},
                {0, 49},
                {0, 98},

                {0, 17},
                {0, 45},
                {0, 43},
                {0, 35},
                {0, 34},
                {0, 0},
                {0, 118},
                {0, 82},
                {0, 82},
                {0, 87},

                {0, 29},
                {0, 43},
                {0, 68},
                {0, 68},
                {0, 59},
                {0, 81},
                {0, 30},
                {0, 49},
                {0, 64},
                {0, 0},
                {0, 55},
                {0, 43},
#ifdef NEW
                {0, 45},
                {0, 27},
                {0, 41},
                {0, 62},
                {0, 45},
                {0, 40},
                {0, 68},
                {0, 30},
                {0, 49},
#endif
        };


mcap mcaps4[MC_NO]=
        {
                {0, 2720/340},
                {0, 10880/340},
                {0, 6800/340},
                {0, 5440/340},
                {0, 3400/340},
                {0, 5780/340},
                {0, 3400/340},
                {0, 4760/340},

                {0, 2380/340},
                {0, 0},
                {0, 5440/340},
                {0, 0},
                {0, 3400/340},
                {0, 0},
                {0, 5440/340},
                {0, 0},
                {0, 4080/340},
                {0, 0},
                {0, 4420/340},
                {0, 0},
                {0, 4420/340},
                {0, 0},

                {0, 6120/340},
                {0, 0},
                {0, 6120/340},
                {0, 0},
                {0, 5780/340},
                {0, 0},
                {0, 6120/340},
                {0, 0},
                {0, 5440/340},
                {0, 0},
                {0, 5780/340},
                {0, 0},

                {0, 4420/340},
                {0, 0},
                {0, 3740/340},
                {0, 0},
                {0, 4080/340},
                {0, 0},
                {0, 4420/340},
                {0, 0},
                {0, 3740/340},
                {0, 0},

                {0, 0},
                {0, 0},
                {0, 4080/340},
                {0, 0},
                {0, 4080/340},
                {0, 0},
                {0, 4080/340},
                {0, 0},
                {0, 4080/340},
                {0, 0},
                {0, 2380/340},
                {0, 0},

                {0, 8500/340},
                {0, 0},
                {0, 11900/340},
                {0, 0},
                {0, 3400/340},
                {0, 0},
                {0, 8500/340},
                {0, 0},

                {0, 3400/340},
                {0, 0},
                {0, 3400/340},
                {0, 0},
                {0, 3060/340},
                {0, 0},

                {0, 4080/340},
                {0, 3060/340},

                {0, 3060/340},
                {0, 3400/340},
                {0, 3400/340},
                {0, 1700/340},
                {0, 4080/340},
                {0, 0},

                {0, 4760/340},
                {0, 6460/340},
                {0, 6460/340},
                {0, 4760/340},
                {0, 0},
                {0, 4420/340},
                {0, 6120/340},
                {0, 12240/340},

                {0, 2040/340},
                {0, 5780/340},
                {0, 5440/340},
                {0, 4420/340},
                {0, 0},
                {0, 4080/340},
                {0, 14960/340},
                {0, 10200/340},
                {0, 10540/340},
                {0, 10880/340},

                {0, 3400/340},
                {0, 5440/340},
                {0, 8500/340},
                {0, 8500/340},
                {0, 7480/340},
                {0, 10200/340},
                {0, 3740/340},
                {0, 6120/340},
                {0, 8160/340},
                {0, 0},
                {0, 6800/340},
                {0, 5440/340},
#ifdef NEW
                {0, 62},
                {0, 27},
                {0, 41},
                {0, 45},
                {0, 45},
                {0, 40},
                {0, 68},
                {0, 30},
                {0, 49},
#endif
        };


/*
mcap mcaps4[MC_NO]=
	{
	 {0, 11},
	 {0, 43},
	 {0, 26},
	 {0, 21},
	 {0, 13},
	 {0, 23},
	 {0, 14},
	 {0, 19},

	 {0, 10},
	 {0, 0},
	 {0, 21},
	 {0, 0},
	 {0, 13},
	 {0, 0},
	 {0, 21},
	 {0, 0},
	 {0, 16},
	 {0, 0},
	 {0, 18},
	 {0, 0},
	 {0, 18},
	 {0, 0},

	 {0, 14},
	 {0, 0},
	 {0, 25},
	 {0, 0},
	 {0, 22},
	 {0, 0},
	 {0, 24},
	 {0, 0},
	 {0, 22},
	 {0, 0},
	 {0, 23},
	 {0, 0},

	 {0, 18},
	 {0, 0},
	 {0, 15},
	 {0, 0},
	 {0, 16},
	 {0, 0},
	 {0, 18},
	 {0, 0},
	 {0, 15},
	 {0, 0},

	 {0, 0},
	 {0, 0},
	 {0, 16},
	 {0, 0},
	 {0, 16},
	 {0, 0},
	 {0, 16},
	 {0, 0},
	 {0, 16},
	 {0, 0},
	 {0, 10},
	 {0, 0},

	 {0, 34},
	 {0, 0},
	 {0, 47},
	 {0, 0},
	 {0, 14},
	 {0, 0},
	 {0, 34},
	 {0, 0},

	 {0, 13},
	 {0, 0},
	 {0, 14},
	 {0, 0},
	 {0, 12},
	 {0, 0},

	 {0, 16},
	 {0, 13},

	 {0, 13},
	 {0, 14},
	 {0, 13},
	 {0, 6},
	 {0, 0},
	 {0, 0},

	 {0, 19},
	 {0, 25},
	 {0, 26},
	 {0, 19},
	 {0, 0},
	 {0, 18},
	 {0, 24},
	 {0, 49},

	 {0, 8},
	 {0, 22},
	 {0, 21},
	 {0, 17},
	 {0, 17},
	 {0, 0},
	 {0, 59},
	 {0, 0},
	 {0, 41},
	 {0, 43},

	 {0, 14},
	 {0, 21},
	 {0, 34},
	 {0, 34},
	 {0, 29},
	 {0, 40},
	 {0, 15},
	 {0, 24},
	 {0, 0},
	 {0, 0},
	 {0, 26},
	 {0, 21},
//	 {0, 300},
	};
*/

// Tweening data space
plyrtwdat *plyrtwtb;
capfrm twpts;

// Torso maps:
// Texture 13 (1+12): Head A (End 61 (1+5*12))
// Texture 73 (61+12): Head B (End 121 (61+5*12))
// Texture 133 (121+12): Torso A (End 181 (121+5*12))
// Texture 193 (181+12): Torso B (End 241 (181+5*12))
// Texture 244 (241+3): Lower Leg A (End 248 (241+7))
// Texture 251 (248+3): Upper Arm A (End 255 (248+7))
// Texture 258 (255+3): Upper Leg A (End 262 (255+7))
// Texture 265 (262+3): Lower Arm A (End 269 (262+7))
// Texture 272 (269+3): Lower Leg B (End 276 (269+7))
// Texture 279 (276+3): Upper Arm B (End 283 (276+7))
// Texture 286 (283+3): Upper Leg B (End 290 (283+7))
// Texture 293 (290+3): Lower Arm B (End 297 (290+7))
// Texture 309 (297+12): Foot (End 357 (297+5*12))

// Referee & keeper:
// Texture 369 (357+12): Torso Referee (End 417 (357+5*12))
// Texture 429 (417+12): Torso Keeper (End 477 (417+5*12))
// Texture 480 (477+3): Lower Leg Referee (End 484 (477+7))
// Texture 487 (484+3): Upper Arm Referee (End 491 (484+7))
// Texture 494 (491+3): Upper Leg Referee (End 498 (491+7))
// Texture 501 (498+3): Lower Arm Referee (End 505 (498+7))
// Texture 508 (505+3): Lower Leg Keeper (End 512 (505+7))
// Texture 515 (512+3): Upper Arm Keeper (End 519 (512+7))
// Texture 522 (519+3): Upper Leg Keeper (End 526 (519+7))
// Texture 529 (526+3): Lower Arm Keeper (End 533 (526+7))

// Alternate Torso maps:
// Texture 12 (0+12): Torso A (End 60 (0+5*12))
// Texture 72 (60+12): Torso B (End 120 (60+5*12))
// Texture 123 (120+3): Lower Leg A (End 127 (120+7))
// Texture 130 (127+3): Upper Arm A (End 134 (127+7))
// Texture 137 (134+3): Upper Leg A (End 141 (134+7))
// Texture 144 (141+3): Lower Arm A (End 148 (141+7))
// Texture 151 (148+3): Lower Leg B (End 155 (148+7))
// Texture 158 (155+3): Upper Arm B (End 162 (155+7))
// Texture 165 (162+3): Upper Leg B (End 169 (162+7))
// Texture 172 (169+3): Lower Arm B (End 176 (169+7))
// Texture 188 (176+12): Alternate Head (End 236 (176+5*12))

// Alternate Referee/Keeper maps:
// Texture 239 (236+3): Lower Leg Referee A (End 243 (236+7))
// Texture 246 (243+3): Upper Arm Referee A (End 250 (243+7))
// Texture 253 (250+3): Upper Leg Referee A (End 257 (250+7))
// Texture 260 (257+3): Lower Arm Referee A (End 264 (257+7))
// Texture 267 (264+3): Lower Leg Keeper B (End 271 (264+7))
// Texture 274 (271+3): Upper Arm Keeper B (End 278 (271+7))
// Texture 281 (278+3): Upper Leg Keeper B (End 285 (278+7))
// Texture 288 (285+3): Lower Arm Keeper B (End 292 (285+7))
// Texture 304 (292+12): Torso Referee B (End 352 (292+5*12))
// Texture 364 (352+12): Torso Keeper B (End 412 (352+5*12))


#define X_BM 6  // Bitmap offset for extra maps
#define S_BM 8  // Bitmap offset for stand maps

#define X_TM 533		// Offset for extra maps
#define X_TM_NO (52+419)	// No of extra maps
#define N_TM (X_TM+52)		// Alternate torsos
#define NT_TM (N_TM+412)	// Netting

#define S_TM X_TM+X_TM_NO	// Offset for stand maps
#define S_TM_MAX 500			// Maximum no of stadium maps

#define NOTEXTURES S_TM+S_TM_MAX


#define CAPTURE_SCALE 1.2
#define PLAYER_SCALE 1.1
#define P_HEAD_L	280 * CAPTURE_SCALE
#define P_HEAD_W	135 * PLAYER_SCALE
#define P_HEAD_D	125 * PLAYER_SCALE
#define P_TORSO_L	896 * CAPTURE_SCALE
#define P_TORSO_W	150 * PLAYER_SCALE
#define P_TORSO_D	310 * PLAYER_SCALE
#define P_FOOT_L	110 * CAPTURE_SCALE
#define P_FOOT_W	180 * PLAYER_SCALE
#define P_FOOT_D	65  * PLAYER_SCALE
#define P_UARM_L	325 * CAPTURE_SCALE
#define P_UARM_W	95  * PLAYER_SCALE
#define P_LARM_L	380 * CAPTURE_SCALE
#define P_LARM_W	65  * PLAYER_SCALE
#define P_ULEG_L	540 * CAPTURE_SCALE
#define P_ULEG_W	132 * PLAYER_SCALE
#define P_LLEG_L	540 * CAPTURE_SCALE
#define P_LLEG_W	88  * PLAYER_SCALE

#define GOALIE_SCALE 1.2
#define G_HEAD_L	280 * CAPTURE_SCALE
#define G_HEAD_W	135 * GOALIE_SCALE
#define G_HEAD_D	125 * GOALIE_SCALE
#define G_TORSO_L	896 * CAPTURE_SCALE
#define G_TORSO_W	150 * GOALIE_SCALE
#define G_TORSO_D	300 * GOALIE_SCALE
#define G_FOOT_L	110 * CAPTURE_SCALE
#define G_FOOT_W	180 * GOALIE_SCALE
#define G_FOOT_D	65  * GOALIE_SCALE
#define G_UARM_L	325 * CAPTURE_SCALE
#define G_UARM_W	95  * GOALIE_SCALE
#define G_LARM_L	380 * CAPTURE_SCALE
#define G_LARM_W	65  * GOALIE_SCALE
#define G_ULEG_L	540 * CAPTURE_SCALE
#define G_ULEG_W	132 * GOALIE_SCALE
#define G_LLEG_L	540 * CAPTURE_SCALE
#define G_LLEG_W	88  * GOALIE_SCALE

#define REFEREE_SCALE 0.9
#define R_HEAD_L	280 * CAPTURE_SCALE
#define R_HEAD_W	145 * REFEREE_SCALE
#define R_HEAD_D	135 * REFEREE_SCALE
#define R_TORSO_L	896 * CAPTURE_SCALE
#define R_TORSO_W	170 * REFEREE_SCALE
#define R_TORSO_D	330 * REFEREE_SCALE
#define R_FOOT_L	110 * CAPTURE_SCALE
#define R_FOOT_W	180 * REFEREE_SCALE
#define R_FOOT_D	65  * REFEREE_SCALE
#define R_UARM_L	325 * CAPTURE_SCALE
#define R_UARM_W	95  * REFEREE_SCALE
#define R_LARM_L	380 * CAPTURE_SCALE
#define R_LARM_W	65  * REFEREE_SCALE
#define R_ULEG_L	540 * CAPTURE_SCALE
#define R_ULEG_W	132 * REFEREE_SCALE
#define R_LLEG_L	540 * CAPTURE_SCALE
#define R_LLEG_W	88  * REFEREE_SCALE

facelist player_f1=
        {
                13,
                -1,-2013, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2133, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2251, 5,6,P_UARM_W,P_UARM_L,
                0,-2265, 6,7,P_LARM_W,P_LARM_L,
                0,-2251, 8,9,P_UARM_W,P_UARM_L,
                0,-2265, 9,10,P_LARM_W,P_LARM_L,
                0,-2258, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2244, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2258, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2244, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,25,24,26,27,
        };

facelist player_f2=
        {
                13,
                -1,-2073, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2193, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2279, 5,6,P_UARM_W,P_UARM_L,
                0,-2293, 6,7,P_LARM_W,P_LARM_L,
                0,-2279, 8,9,P_UARM_W,P_UARM_L,
                0,-2293, 9,10,P_LARM_W,P_LARM_L,
                0,-2286, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2272, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2286, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2272, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,25,24,26,27,
        };

facelist player_f1b=
        {
                13,
                -1,-2188-N_TM, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2012-N_TM, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2130-N_TM, 5,6,P_UARM_W,P_UARM_L,
                0,-2144-N_TM, 6,7,P_LARM_W,P_LARM_L,
                0,-2130-N_TM, 8,9,P_UARM_W,P_UARM_L,
                0,-2144-N_TM, 9,10,P_LARM_W,P_LARM_L,
                0,-2137-N_TM, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2123-N_TM, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2137-N_TM, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2123-N_TM, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,25,24,26,27,
        };

facelist player_f2b=
        {
                13,
                -1,-2188-N_TM, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2072-N_TM, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2158-N_TM, 5,6,P_UARM_W,P_UARM_L,
                0,-2172-N_TM, 6,7,P_LARM_W,P_LARM_L,
                0,-2158-N_TM, 8,9,P_UARM_W,P_UARM_L,
                0,-2172-N_TM, 9,10,P_LARM_W,P_LARM_L,
                0,-2165-N_TM, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2151-N_TM, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2165-N_TM, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2151-N_TM, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,25,24,26,27,
        };

facelist player_fg1=
        {
                13,
                -1,-2013, 3,0,1,G_HEAD_W,G_HEAD_D,G_HEAD_L,
                -1,-2429, 4,3,2,G_TORSO_W,G_TORSO_D,G_TORSO_L,
                -1,-2309, 11,16,21,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                -1,-2309, 12,20,22,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                0,-2515, 5,6,G_UARM_W,G_UARM_L,
                0,-2529, 6,7,G_LARM_W,G_LARM_L,
                0,-2515, 8,9,G_UARM_W,G_UARM_L,
                0,-2529, 9,10,G_LARM_W,G_LARM_L,
                0,-2522, 13,14,G_ULEG_W,G_ULEG_L,
                0,-2508, 14,15,G_LLEG_W,G_LLEG_L,
                0,-2522, 17,18,G_ULEG_W,G_ULEG_L,
                0,-2508, 18,19,G_LLEG_W,G_LLEG_L,
                4,-S_TM-2000,25,24,26,27,
        };

facelist player_fg2=
        {
                13,
                -1,-2073, 3,0,1,G_HEAD_W,G_HEAD_D,G_HEAD_L,
                -1,-2364-N_TM, 4,3,2,G_TORSO_W,G_TORSO_D,G_TORSO_L,
                -1,-2309, 11,16,21,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                -1,-2309, 12,20,22,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                0,-2274-N_TM, 5,6,G_UARM_W,G_UARM_L,
                0,-2288-N_TM, 6,7,G_LARM_W,G_LARM_L,
                0,-2274-N_TM, 8,9,G_UARM_W,G_UARM_L,
                0,-2288-N_TM, 9,10,G_LARM_W,G_LARM_L,
                0,-2281-N_TM, 13,14,G_ULEG_W,G_ULEG_L,
                0,-2267-N_TM, 14,15,G_LLEG_W,G_LLEG_L,
                0,-2281-N_TM, 17,18,G_ULEG_W,G_ULEG_L,
                0,-2267-N_TM, 18,19,G_LLEG_W,G_LLEG_L,
                4,-S_TM-2000,25,24,26,27,
        };

facelist player_f1x=
        {
                13,
                -1,-2013, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2133, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2251, 5,6,P_UARM_W,P_UARM_L,
                0,-2265, 6,7,P_LARM_W,P_LARM_L,
                0,-2251, 8,9,P_UARM_W,P_UARM_L,
                0,-2265, 9,10,P_LARM_W,P_LARM_L,
                0,-2258, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2244, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2258, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2244, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,24,25,27,26,
        };

facelist player_f2x=
        {
                13,
                -1,-2073, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2193, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2279, 5,6,P_UARM_W,P_UARM_L,
                0,-2293, 6,7,P_LARM_W,P_LARM_L,
                0,-2279, 8,9,P_UARM_W,P_UARM_L,
                0,-2293, 9,10,P_LARM_W,P_LARM_L,
                0,-2286, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2272, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2286, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2272, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,24,25,27,26,
        };

facelist player_f1xb=
        {
                13,
                -1,-2188-N_TM, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2012-N_TM, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2130-N_TM, 5,6,P_UARM_W,P_UARM_L,
                0,-2144-N_TM, 6,7,P_LARM_W,P_LARM_L,
                0,-2130-N_TM, 8,9,P_UARM_W,P_UARM_L,
                0,-2144-N_TM, 9,10,P_LARM_W,P_LARM_L,
                0,-2137-N_TM, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2123-N_TM, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2137-N_TM, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2123-N_TM, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,24,25,27,26,
        };

facelist player_f2xb=
        {
                13,
                -1,-2188-N_TM, 3,0,1,P_HEAD_W,P_HEAD_D,P_HEAD_L,
                -1,-2072-N_TM, 4,3,2,P_TORSO_W,P_TORSO_D,P_TORSO_L,
                -1,-2309, 11,16,21,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                -1,-2309, 12,20,22,P_FOOT_W,P_FOOT_D,P_FOOT_L,
                0,-2158-N_TM, 5,6,P_UARM_W,P_UARM_L,
                0,-2172-N_TM, 6,7,P_LARM_W,P_LARM_L,
                0,-2158-N_TM, 8,9,P_UARM_W,P_UARM_L,
                0,-2172-N_TM, 9,10,P_LARM_W,P_LARM_L,
                0,-2165-N_TM, 13,14,P_ULEG_W,P_ULEG_L,
                0,-2151-N_TM, 14,15,P_LLEG_W,P_LLEG_L,
                0,-2165-N_TM, 17,18,P_ULEG_W,P_ULEG_L,
                0,-2151-N_TM, 18,19,P_LLEG_W,P_LLEG_L,
                4,-S_TM-2039,24,25,27,26,
        };

facelist player_fg1x=
        {
                13,
                -1,-2013, 3,0,1,G_HEAD_W,G_HEAD_D,G_HEAD_L,
                -1,-2429, 4,3,2,G_TORSO_W,G_TORSO_D,G_TORSO_L,
                -1,-2309, 11,16,21,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                -1,-2309, 12,20,22,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                0,-2515, 5,6,G_UARM_W,G_UARM_L,
                0,-2529, 6,7,G_LARM_W,G_LARM_L,
                0,-2515, 8,9,G_UARM_W,G_UARM_L,
                0,-2529, 9,10,G_LARM_W,G_LARM_L,
                0,-2522, 13,14,G_ULEG_W,G_ULEG_L,
                0,-2508, 14,15,G_LLEG_W,G_LLEG_L,
                0,-2522, 17,18,G_ULEG_W,G_ULEG_L,
                0,-2508, 18,19,G_LLEG_W,G_LLEG_L,
                4,-S_TM-2000,24,25,27,26,
        };

facelist player_fg2x=
        {
                13,
                -1,-2073, 3,0,1,G_HEAD_W,G_HEAD_D,G_HEAD_L,
                -1,-2364-N_TM, 4,3,2,G_TORSO_W,G_TORSO_D,G_TORSO_L,
                -1,-2309, 11,16,21,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                -1,-2309, 12,20,22,G_FOOT_W,G_FOOT_D,G_FOOT_L,
                0,-2274-N_TM, 5,6,G_UARM_W,G_UARM_L,
                0,-2288-N_TM, 6,7,G_LARM_W,G_LARM_L,
                0,-2274-N_TM, 8,9,G_UARM_W,G_UARM_L,
                0,-2288-N_TM, 9,10,G_LARM_W,G_LARM_L,
                0,-2281-N_TM, 13,14,G_ULEG_W,G_ULEG_L,
                0,-2267-N_TM, 14,15,G_LLEG_W,G_LLEG_L,
                0,-2281-N_TM, 17,18,G_ULEG_W,G_ULEG_L,
                0,-2267-N_TM, 18,19,G_LLEG_W,G_LLEG_L,
                4,-S_TM-2000,24,25,27,26,
        };

facelist player_fw=
        {
                22,
                2,0x1f, 0,1,
                2,0x1f, 0,3,
                2,0x1f, 1,3,
                2,0x1f, 3,5,
                2,0x1f, 3,8,
                2,0x1f, 5,6,
                2,0x1f, 6,7,
                2,0x1f, 8,9,
                2,0x1f, 9,10,
                2,0x1f, 3,4,
                2,0x1f, 4,13,
                2,0x1f, 4,17,
                2,0x1f, 13,14,
                2,0x1f, 14,15,
                2,0x1f, 15,16,
                2,0x1f, 17,18,
                2,0x1f, 18,19,
                2,0x1f, 19,20,
                2,0x1f, 24,25,
                2,0x1f, 25,27,
                2,0x1f, 27,26,
                2,0x1f, 26,24,
        };

facelist player_fl=
        {
                12,
                -1,-2073, 3,0,1,R_HEAD_W,R_HEAD_D,R_HEAD_L,
                -1,-2304-N_TM, 4,3,2,R_TORSO_W,R_TORSO_D,R_TORSO_L,
                -1,-2309, 11,16,21,R_FOOT_W,R_FOOT_D,R_FOOT_L,
                -1,-2309, 12,20,22,R_FOOT_W,R_FOOT_D,R_FOOT_L,
                0,-2246-N_TM, 5,6,R_UARM_W,R_UARM_L,
                0,-2260-N_TM, 6,7,R_LARM_W,R_LARM_L,
                0,-2246-N_TM, 8,9,R_UARM_W,R_UARM_L,
                0,-2260-N_TM, 9,10,R_LARM_W,R_LARM_L,
                0,-2253-N_TM, 13,14,R_ULEG_W,R_ULEG_L,
                0,-2239-N_TM, 14,15,R_LLEG_W,R_LLEG_L,
                0,-2253-N_TM, 17,18,R_ULEG_W,R_ULEG_L,
                0,-2239-N_TM, 18,19,R_LLEG_W,R_LLEG_L,
        };

facelist player_fr=
        {
                12,
                -1,-2013, 3,0,1,R_HEAD_W,R_HEAD_D,R_HEAD_L,
                -1,-2369, 4,3,2,R_TORSO_W,R_TORSO_D,R_TORSO_L,
                -1,-2309, 11,16,21,R_FOOT_W,R_FOOT_D,R_FOOT_L,
                -1,-2309, 12,20,22,R_FOOT_W,R_FOOT_D,R_FOOT_L,
                0,-2487, 5,6,R_UARM_W,R_UARM_L,
                0,-2501, 6,7,R_LARM_W,R_LARM_L,
                0,-2487, 8,9,R_UARM_W,R_UARM_L,
                0,-2501, 9,10,R_LARM_W,R_LARM_L,
                0,-2494, 13,14,R_ULEG_W,R_ULEG_L,
                0,-2480, 14,15,R_LLEG_W,R_LLEG_L,
                0,-2494, 17,18,R_ULEG_W,R_ULEG_L,
                0,-2480, 18,19,R_LLEG_W,R_LLEG_L,
        };

// Facelists for different player types
face playertypes[]={NULL,player_f1,  player_f2,  player_fr,player_fl,player_fg1,
                    player_f1x, player_f2x, player_fr,player_fl,player_fg1x,
                    player_f1b, player_f2b, player_fr,player_fl,player_fg2,
                    player_f1xb,player_f2xb,player_fr,player_fl,player_fg2x,
                    player_fw};



//////////////////
// SIMPLE PITCH //
obj pitch;

ptlist pitch_p=
        {
                38,
                -80,  0,  80,
                0,    0,  80,
                80,   0,  80,
                160,  0,  80,
                240,  0,  80,
                320,  0,  80,
                400,  0,  80,
                480,  0,  80,
                560,  0,  80,
                640,  0,  80,
                720,  0,  80,
                800,  0,  80,
                880,  0,  80,
                960,  0,  80,
                1040, 0,  80,
                1120, 0,  80,
                1200, 0,  80,
                1280, 0,  80,
                1360, 0,  80,
                -80,  0, -400,
                0,    0, -400,
                80,   0, -400,
                160,  0, -400,
                240,  0, -400,
                320,  0, -400,
                400,  0, -400,
                480,  0, -400,
                560,  0, -400,
                640,  0, -400,
                720,  0, -400,
                800,  0, -400,
                880,  0, -400,
                960,  0, -400,
                1040, 0, -400,
                1120, 0, -400,
                1200, 0, -400,
                1280, 0, -400,
                1360, 0, -400,
//	-80,  0, -880,
//	0,    0, -880,
//	80,   0, -880,
//	160,  0, -880,
//	240,  0, -880,
//	320,  0, -880,
//	400,  0, -880,
//	480,  0, -880,
//	560,  0, -880,
//	640,  0, -880,
//	720,  0, -880,
//	800,  0, -880,
//	880,  0, -880,
//	960,  0, -880,
//	1040, 0, -880,
//	1120, 0, -880,
//	1200, 0, -880,
//	1280, 0, -880,
//	1360, 0, -880,
        };

ptlist pitch2_p=
        {
                38,
                -80,  0,  80,
                0,    0,  80,
                80,   0,  80,
                160,  0,  80,
                240,  0,  80,
                320,  0,  80,
                400,  0,  80,
                480,  0,  80,
                560,  0,  80,
                640,  0,  80,
                720,  0,  80,
                800,  0,  80,
                880,  0,  80,
                960,  0,  80,
                1040, 0,  80,
                1120, 0,  80,
                1200, 0,  80,
                1280, 0,  80,
                1360, 0,  80,
                -80,  0, -400,
                0,    0, -400,
                80,   0, -400,
                160,  0, -400,
                240,  0, -400,
                320,  0, -400,
                400,  0, -400,
                480,  0, -400,
                560,  0, -400,
                640,  0, -400,
                720,  0, -400,
                800,  0, -400,
                880,  0, -400,
                960,  0, -400,
                1040, 0, -400,
                1120, 0, -400,
                1200, 0, -400,
                1280, 0, -400,
                1360, 0, -400,
        };

facelist pitch_f=
        {
/*
	18,
	4,-3500, 0, 1, 20,19,
	4,-3500, 1, 2, 21,20,
	4,-3500, 2, 3, 22,21,
	4,-3500, 3, 4, 23,22,
	4,-3500, 4, 5, 24,23,
	4,-3500, 5, 6, 25,24,
	4,-3500, 6, 7, 26,25,
	4,-3500, 7, 8, 27,26,
	4,-3500, 8, 9, 28,27,
	4,-3500, 9, 10,29,28,
	4,-3500, 10,11,30,29,
	4,-3500, 11,12,31,30,
	4,-3500, 12,13,32,31,
	4,-3500, 13,14,33,32,
	4,-3500, 14,15,34,33,
	4,-3500, 15,16,35,34,
	4,-3500, 16,17,36,35,
	4,-3500, 17,18,37,36,
*/
                18,
                4,138, 0, 1, 20,19,
                4,134, 1, 2, 21,20,
                4,138, 2, 3, 22,21,
                4,134, 3, 4, 23,22,
                4,138, 4, 5, 24,23,
                4,134, 5, 6, 25,24,
                4,138, 6, 7, 26,25,
                4,134, 7, 8, 27,26,
                4,138, 8, 9, 28,27,
                4,134, 9, 10,29,28,
                4,138, 10,11,30,29,
                4,134, 11,12,31,30,
                4,138, 12,13,32,31,
                4,134, 13,14,33,32,
                4,138, 14,15,34,33,
                4,134, 15,16,35,34,
                4,138, 16,17,36,35,
                4,134, 17,18,37,36,
        };

/////////////////
// PITCH LINES //

#define LH (float)LINEWIDTH/2

obj lines,l1,l2,l3,l4,l5,l6;

ptlist lines_p=
        {
                22,
                -LH,    0, LH,
                1280+LH,0, LH,
                1280+LH,0,-LH,
                -LH,    0,-LH,

                LH,    0, LH,
                LH,    0,-800-LH,
                -LH,    0,-800-LH,

                -LH,    0,-800+LH,
                1280+LH,0,-800+LH,
                1280+LH,0,-800-LH,

                1280-LH,0,-800-LH,
                1280-LH,0, LH,

                640-LH, 0, LH,
                640+LH, 0, LH,
                640+LH, 0,-800-LH,
                640-LH, 0,-800-LH,

                0,0,0,
                1280,0,0,
                1280,0,-800,
                0,0,-800,
                640,0,0,
                640,0,-800
        };


facelist lines_f=
        {
                10,
                4,26, 0,1,2,3,
                4,26, 0,4,5,6,
                4,26, 6,7,8,9,
                4,26, 1,9,10,11,
                4,26, 12,13,14,15,
                2,26, 16,17,
                2,26, 17,18,
                2,26, 18,19,
                2,26, 19,16,
                2,26, 20,21,
        };

ptlist l1_p1=
        {
                9,
                -210,0, 200,
                210,0, 200,
                -210,0,-200,
                -210,0,  35,
                -18,0,  35,
                -18,0,-200,
                -210,0, -93,
                -146,0, -93,
                -146,0,-200,
        };

ptlist l1_p2=
        {
                31,
                -210+LH,0, 200-LH,
                -210-LH,0, 200+LH,
                210,   0, 200+LH,
                210,   0, 200-LH,
                -210+LH,0,-200,
                -210-LH,0,-200,
                -210,0,  35-LH,
                -210,0,  35+LH,
                -18+LH,0,  35+LH,
                -18-LH,0,  35-LH,
                -18+LH,0,-200,
                -18-LH,0,-200,
                -210,0, -93-LH,
                -210,0, -93+LH,
                -146+LH,0, -93+LH,
                -146-LH,0, -93-LH,
                -146+LH,0,-200,
                -146-LH,0,-200,
                -210,0, 200,
                210,0, 200,
                -210,0,-200,
                -210,0,  35,
                -18,0,  35,
                -18,0,-200,
                -210,0, -93,
                -146,0, -93,
                -146,0,-200,
                -200-LH*1.41,0, 200,
                -200+LH*1.41,0, 200,
                -210,0, 190-LH*1.41,
                -210,0, 190+LH*1.41,
        };

ptlist l2_p1=
        {
                9,
                210,0, 200,
                -210,0, 200,
                210,0,-200,
                210,0,  35,
                18,0,  35,
                18,0,-200,
                210,0, -93,
                146,0, -93,
                146,0,-200,
        };

ptlist l2_p2=
        {
                31,
                210-LH,0, 200-LH,
                210+LH,0, 200+LH,
                -210,   0, 200+LH,
                -210,   0, 200-LH,
                210-LH,0,-200,
                210+LH,0,-200,
                210,0,  35-LH,
                210,0,  35+LH,
                18-LH,0,  35+LH,
                18+LH,0,  35-LH,
                18-LH,0,-200,
                18+LH,0,-200,
                210,0, -93-LH,
                210,0, -93+LH,
                146-LH,0, -93+LH,
                146+LH,0, -93-LH,
                146-LH,0,-200,
                146+LH,0,-200,
                210,0, 200,
                -210,0, 200,
                210,0,-200,
                210,0,  35,
                18,0,  35,
                18,0,-200,
                210,0, -93,
                146,0, -93,
                146,0,-200,
                200+LH*1.41,0,200,
                200-LH*1.41,0,200,
                210,0,190-LH*1.41,
                210,0,190+LH*1.41,
        };

ptlist l3_p1=
        {
                9,
                210,0,-200,
                -210,0,-200,
                210,0, 200,
                210,0, -35,
                18,0, -35,
                18,0, 200,
                210,0,  93,
                146,0,  93,
                146,0, 200,
        };

ptlist l3_p2=
        {
                31,
                210-LH,0,-200+LH,
                210+LH,0,-200-LH,
                -210,   0,-200-LH,
                -210,   0,-200+LH,
                210-LH,0, 200,
                210+LH,0, 200,
                210,0, -35+LH,
                210,0, -35-LH,
                18-LH,0, -35-LH,
                18+LH,0, -35+LH,
                18-LH,0, 200,
                18+LH,0, 200,
                210,0,  93+LH,
                210,0,  93-LH,
                146-LH,0,  93-LH,
                146+LH,0,  93+LH,
                146-LH,0, 200,
                146+LH,0, 200,
                210,0,-200,
                -210,0,-200,
                210,0, 200,
                210,0, -35,
                18,0, -35,
                18,0, 200,
                210,0,  93,
                146,0,  93,
                146,0, 200,
                200+LH*1.41,0,-200,
                200-LH*1.41,0,-200,
                210,0,-190+LH*1.41,
                210,0,-190-LH*1.41,
        };

ptlist l4_p1=
        {
                9,
                -210,0,-200,
                210,0,-200,
                -210,0, 200,
                -210,0, -35,
                -18,0, -35,
                -18,0, 200,
                -210,0,  93,
                -146,0,  93,
                -146,0, 200,
        };

ptlist l4_p2=
        {
                31,
                -210+LH,0,-200+LH,
                -210-LH,0,-200-LH,
                210,   0,-200-LH,
                210,   0,-200+LH,
                -210+LH,0, 200,
                -210-LH,0, 200,
                -210,0, -35+LH,
                -210,0, -35-LH,
                -18+LH,0, -35-LH,
                -18-LH,0, -35+LH,
                -18+LH,0, 200,
                -18-LH,0, 200,
                -210,0,  93+LH,
                -210,0,  93-LH,
                -146+LH,0,  93-LH,
                -146-LH,0,  93+LH,
                -146+LH,0, 200,
                -146-LH,0, 200,
                -210,0,-200,
                210,0,-200,
                -210,0, 200,
                -210,0, -35,
                -18,0, -35,
                -18,0, 200,
                -210,0,  93,
                -146,0,  93,
                -146,0, 200,
                -200-LH*1.41,0,-200,
                -200+LH*1.41,0,-200,
                -210,0,-190+LH*1.41,
                -210,0,-190-LH*1.41,
        };

ptlist l5_p1=
        {
                4,
                -220,0, 200,
                220,0, 200,
                0,0, 200,
                0,0,-200,
        };

ptlist l5_p2=
        {
                12,
                -220,0, 200-LH,
                -220,0, 200+LH,
                220,0, 200+LH,
                220,0, 200-LH,
                -LH,0, 200,
                LH,0, 200,
                LH,0,-200,
                -LH,0,-200,
                -220,0, 200,
                220,0, 200,
                0,0, 200,
                0,0,-200
        };

ptlist l6_p1=
        {
                4,
                -220,0,-200,
                220,0,-200,
                0,0,-200,
                0,0, 200,
        };

ptlist l6_p2=
        {
                12,
                -220,0,-200-LH,
                -220,0,-200+LH,
                220,0,-200+LH,
                220,0,-200-LH,
                LH,0,-200,
                -LH,0,-200,
                -LH,0, 200,
                LH,0, 200,
                -220,0,-200,
                220,0,-200,
                0,0,-200,
                0,0, 200,
        };


facelist l_f1a=
        {
                6,
                2,0x16, 0,1,
                2,0x16, 0,2,
                2,0x16, 3,4,
                2,0x16, 4,5,
                2,0x16, 6,7,
                2,0x16, 7,8,
        };

facelist l_f1b=
        {
                6,
                2,0x14, 0,1,
                2,0x14, 0,2,
                2,0x14, 3,4,
                2,0x14, 4,5,
                2,0x14, 6,7,
                2,0x14, 7,8,
        };

facelist l_f1c=
        {
                6,
                2,0x12, 0,1,
                2,0x12, 0,2,
                2,0x12, 3,4,
                2,0x12, 4,5,
                2,0x12, 6,7,
                2,0x12, 7,8,
        };

facelist l_f2a=
        {
                13,
                4,0x16, 0,1,2,3,
                4,0x16, 1,0,4,5,
                4,0x16, 6,7,8,9,
                4,0x16, 9,8,10,11,
                4,0x16, 12,13,14,15,
                4,0x16, 15,14,16,17,
                4,0x16, 27,28,29,30,
                2,0x16, 18,19,
                2,0x16, 18,20,
                2,0x16, 21,22,
                2,0x16, 22,23,
                2,0x16, 24,25,
                2,0x16, 25,26,
        };

facelist l_f2b=
        {
                13,
                4,0x16, 3,2,1,0,
                4,0x16, 5,4,0,1,
                4,0x16, 9,8,7,6,
                4,0x16, 11,10,8,9,
                4,0x16, 15,14,13,12,
                4,0x16, 17,16,14,15,
                4,0x16, 30,29,28,27,
                2,0x16, 18,19,
                2,0x16, 18,20,
                2,0x16, 21,22,
                2,0x16, 22,23,
                2,0x16, 24,25,
                2,0x16, 25,26,
        };

facelist l_f3a=
        {
                2,
                2,0x16, 0,1,
                2,0x16, 2,3,
        };

facelist l_f3b=
        {
                2,
                2,0x14, 0,1,
                2,0x14, 2,3,
        };

facelist l_f3c=
        {
                2,
                2,0x12, 0,1,
                2,0x12, 2,3,
        };

facelist l_f4=
        {
                4,
                4,0x16, 0,1,2,3,
                4,0x16, 4,5,6,7,
                2,0x16, 8,9,
                2,0x16, 10,11,
        };


detlist l1_d=
        {
                6,l1_p1,l_f1c,
                5,l1_p1,l_f1b,
                4,l1_p1,l_f1a,
                0,l1_p2,l_f2a
        };

detlist l2_d=
        {
                6,l2_p1,l_f1c,
                5,l2_p1,l_f1b,
                4,l2_p1,l_f1a,
                0,l2_p2,l_f2b
        };

detlist l3_d=
        {
                6,l3_p1,l_f1c,
                5,l3_p1,l_f1b,
                4,l3_p1,l_f1a,
                0,l3_p2,l_f2a
        };

detlist l4_d=
        {
                6,l4_p1,l_f1c,
                5,l4_p1,l_f1b,
                4,l4_p1,l_f1a,
                0,l4_p2,l_f2b
        };

detlist l5_d=
        {
                6,l5_p1,l_f3c,
                5,l5_p1,l_f3b,
                4,l5_p1,l_f3a,
                0,l5_p2,l_f4
        };

detlist l6_d=
        {
                6,l6_p1,l_f3c,
                5,l6_p1,l_f3b,
                4,l6_p1,l_f3a,
                0,l6_p2,l_f4
        };


//////////////////
// SEMI CIRCLES //

obj semi1,semi2;

ptlist s_circle_p1a=
        {
                22,
                69.206802, 0.000000, -82.477455,
                67.921227, 0.000000, -80.945366,
                82.477448, 0.000000, -69.206802,
                80.945366, 0.000000, -67.921227,
                93.242065, 0.000000, -53.833332,
                91.510017, 0.000000, -52.833332,
                101.173569, 0.000000, -36.824169,
                99.294189, 0.000000, -36.140129,
                106.030968, 0.000000, -18.696121,
                104.061356, 0.000000, -18.348825,
                107.666664, 0.000000, -0.000001,
                105.666664, 0.000000, -0.000001,
                106.030968, 0.000000, 18.696119,
                104.061356, 0.000000, 18.348824,
                101.173569, 0.000000, 36.824169,
                99.294189, 0.000000, 36.140129,
                93.242065, 0.000000, 53.833332,
                91.510017, 0.000000, 52.833332,
                82.477455, 0.000000, 69.206802,
                80.945366, 0.000000, 67.921227,
                69.206802, 0.000000, 82.477448,
                67.921227, 0.000000, 80.945366,
        };

ptlist s_circle_p2a=
        {
                22,
                -69.206802, 0.000000, -82.477455,
                -67.921227, 0.000000, -80.945366,
                -82.477448, 0.000000, -69.206802,
                -80.945366, 0.000000, -67.921227,
                -93.242065, 0.000000, -53.833332,
                -91.510017, 0.000000, -52.833332,
                -101.173569, 0.000000, -36.824169,
                -99.294189, 0.000000, -36.140129,
                -106.030968, 0.000000, -18.696121,
                -104.061356, 0.000000, -18.348825,
                -107.666664, 0.000000, -0.000001,
                -105.666664, 0.000000, -0.000001,
                -106.030968, 0.000000, 18.696119,
                -104.061356, 0.000000, 18.348824,
                -101.173569, 0.000000, 36.824169,
                -99.294189, 0.000000, 36.140129,
                -93.242065, 0.000000, 53.833332,
                -91.510017, 0.000000, 52.833332,
                -82.477455, 0.000000, 69.206802,
                -80.945366, 0.000000, 67.921227,
                -69.206802, 0.000000, 82.477448,
                -67.921227, 0.000000, 80.945366,
        };


facelist s_circle_f1a=
        {
                20,
                0x4,0x16,  0,  1,  3,  2,
                0x4,0x16,  2,  3,  5,  4,
                0x4,0x16,  4,  5,  7,  6,
                0x4,0x16,  6,  7,  9,  8,
                0x4,0x16,  8,  9, 11, 10,
                0x4,0x16, 10, 11, 13, 12,
                0x4,0x16, 12, 13, 15, 14,
                0x4,0x16, 14, 15, 17, 16,
                0x4,0x16, 16, 17, 19, 18,
                0x4,0x16, 18, 19, 21, 20,
                2,0x16,  0, 2,
                2,0x16,  2, 4,
                2,0x16,  4, 6,
                2,0x16,  6, 8,
                2,0x16,  8,10,
                2,0x16, 10,12,
                2,0x16, 12,14,
                2,0x16, 14,16,
                2,0x16, 16,18,
                2,0x16, 18,20,
        };

facelist s_circle_f2a=
        {
                20,
                0x4,0x16,  1,  0,  2,  3,
                0x4,0x16,  3,  2,  4,  5,
                0x4,0x16,  5,  4,  6,  7,
                0x4,0x16,  7,  6,  8,  9,
                0x4,0x16,  9,  8, 10, 11,
                0x4,0x16, 11, 10, 12, 13,
                0x4,0x16, 13, 12, 14, 15,
                0x4,0x16, 15, 14, 16, 17,
                0x4,0x16, 17, 16, 18, 19,
                0x4,0x16, 19, 18, 20, 21,
                2,0x16,  0, 2,
                2,0x16,  2, 4,
                2,0x16,  4, 6,
                2,0x16,  6, 8,
                2,0x16,  8,10,
                2,0x16, 10,12,
                2,0x16, 12,14,
                2,0x16, 14,16,
                2,0x16, 16,18,
                2,0x16, 18,20,
        };


ptlist s_circle_p1b=
        {
                6,
                69.206802, 0.000000, -82.477455,
                93.242065, 0.000000, -53.833332,
                106.030968, 0.000000, -18.696121,
                106.030968, 0.000000, 18.696119,
                93.242065, 0.000000, 53.833332,
                69.206802, 0.000000, 82.477448,
/*
	53.833332, 0.000000, -93.242065,
	82.477448, 0.000000, -69.206802,
	101.173569, 0.000000, -36.824169,
	107.666664, 0.000000, -0.000001,
	101.173569, 0.000000, 36.824169,
	82.477455, 0.000000, 69.206802,
	53.833336, 0.000000, 93.242065,
*/
        };

ptlist s_circle_p2b=
        {
                6,
                -69.206802, 0.000000, -82.477455,
                -93.242065, 0.000000, -53.833332,
                -106.030968, 0.000000, -18.696121,
                -106.030968, 0.000000, 18.696119,
                -93.242065, 0.000000, 53.833332,
                -69.206802, 0.000000, 82.477448,
/*
	-53.833332, 0.000000, -93.242065,
	-82.477448, 0.000000, -69.206802,
	-101.173569, 0.000000, -36.824169,
	-107.666664, 0.000000, -0.000001,
	-101.173569, 0.000000, 36.824169,
	-82.477455, 0.000000, 69.206802,
	-53.833336, 0.000000, 93.242065,
*/
        };

facelist s_circle_fb=
        {
                5,
                2,0x16,  0, 1,
                2,0x16,  1, 2,
                2,0x16,  2, 3,
                2,0x16,  3, 4,
                2,0x16,  4, 5,
        };

facelist s_circle_fc=
        {
                5,
                2,0x14,  0, 1,
                2,0x14,  1, 2,
                2,0x14,  2, 3,
                2,0x14,  3, 4,
                2,0x14,  4, 5,
        };

facelist s_circle_fd=
        {
                5,
                2,0x12,  0, 1,
                2,0x12,  1, 2,
                2,0x12,  2, 3,
                2,0x12,  3, 4,
                2,0x12,  4, 5,
        };


detlist s_circle_d1=
        {
                6,s_circle_p1b,s_circle_fd,
                5,s_circle_p1b,s_circle_fc,
                4,s_circle_p1b,s_circle_fb,
                0,s_circle_p1a,s_circle_f1a,
        };

detlist s_circle_d2=
        {
                6,s_circle_p2b,s_circle_fd,
                5,s_circle_p2b,s_circle_fc,
                4,s_circle_p2b,s_circle_fb,
                0,s_circle_p2a,s_circle_f2a,
        };



////////////
// CIRCLE //

obj circle;

ptlist circle_pa={
        144,
        107.666664, 0.000000, 0.000000,
        105.666664, 0.000000, 0.000000,
        106.030968, 0.000000, 18.696121,
        104.061356, 0.000000, 18.348824,
        101.173569, 0.000000, 36.824169,
        99.294189, 0.000000, 36.140129,
        93.242065, 0.000000, 53.833332,
        91.510017, 0.000000, 52.833332,
        82.477455, 0.000000, 69.206802,
        80.945366, 0.000000, 67.921227,
        69.206802, 0.000000, 82.477455,
        67.921227, 0.000000, 80.945366,
        53.833332, 0.000000, 93.242065,
        52.833332, 0.000000, 91.510017,
        36.824169, 0.000000, 101.173569,
        36.140129, 0.000000, 99.294189,
        18.696121, 0.000000, 106.030968,
        18.348824, 0.000000, 104.061356,
        0.000000, 0.000000, 107.666664,
        0.000000, 0.000000, 105.666664,
        -18.696119, 0.000000, 106.030968,
        -18.348824, 0.000000, 104.061356,
        -36.824169, 0.000000, 101.173569,
        -36.140129, 0.000000, 99.294189,
        -53.833332, 0.000000, 93.242065,
        -52.833332, 0.000000, 91.510017,
        -69.206802, 0.000000, 82.477455,
        -67.921227, 0.000000, 80.945366,
        -82.477455, 0.000000, 69.206802,
        -80.945366, 0.000000, 67.921227,
        -93.242065, 0.000000, 53.833332,
        -91.510017, 0.000000, 52.833332,
        -101.173569, 0.000000, 36.824169,
        -99.294189, 0.000000, 36.140129,
        -106.030968, 0.000000, 18.696121,
        -104.061356, 0.000000, 18.348824,
        -107.666664, 0.000000, 0.000000,
        -105.666664, 0.000000, 0.000000,
        -106.030968, 0.000000, -18.696119,
        -104.061356, 0.000000, -18.348824,
        -101.173569, 0.000000, -36.824169,
        -99.294189, 0.000000, -36.140129,
        -93.242065, 0.000000, -53.833332,
        -91.510017, 0.000000, -52.833332,
        -82.477455, 0.000000, -69.206802,
        -80.945366, 0.000000, -67.921227,
        -69.206802, 0.000000, -82.477455,
        -67.921227, 0.000000, -80.945366,
        -53.833332, 0.000000, -93.242065,
        -52.833332, 0.000000, -91.510017,
        -36.824169, 0.000000, -101.173569,
        -36.140129, 0.000000, -99.294189,
        -18.696121, 0.000000, -106.030968,
        -18.348825, 0.000000, -104.061356,
        -0.000001, 0.000000, -107.666664,
        -0.000001, 0.000000, -105.666664,
        18.696119, 0.000000, -106.030968,
        18.348824, 0.000000, -104.061356,
        36.824169, 0.000000, -101.173569,
        36.140129, 0.000000, -99.294189,
        53.833332, 0.000000, -93.242065,
        52.833332, 0.000000, -91.510017,
        69.206802, 0.000000, -82.477455,
        67.921227, 0.000000, -80.945366,
        82.477448, 0.000000, -69.206802,
        80.945366, 0.000000, -67.921227,
        93.242065, 0.000000, -53.833332,
        91.510017, 0.000000, -52.833332,
        101.173569, 0.000000, -36.824169,
        99.294189, 0.000000, -36.140129,
        106.030968, 0.000000, -18.696121,
        104.061356, 0.000000, -18.348825,
        107.666664, 0.000000, -0.000001,
        105.666664, 0.000000, -0.000001,
        106.030968, 0.000000, 18.696119,
        104.061356, 0.000000, 18.348824,
        101.173569, 0.000000, 36.824169,
        99.294189, 0.000000, 36.140129,
        93.242065, 0.000000, 53.833332,
        91.510017, 0.000000, 52.833332,
        82.477455, 0.000000, 69.206802,
        80.945366, 0.000000, 67.921227,
        69.206802, 0.000000, 82.477448,
        67.921227, 0.000000, 80.945366,
        53.833336, 0.000000, 93.242065,
        52.833336, 0.000000, 91.510017,
        36.824169, 0.000000, 101.173569,
        36.140129, 0.000000, 99.294189,
        18.696121, 0.000000, 106.030968,
        18.348825, 0.000000, 104.061356,
        0.000001, 0.000000, 107.666664,
        0.000001, 0.000000, 105.666664,
        -18.696119, 0.000000, 106.030968,
        -18.348824, 0.000000, 104.061356,
        -36.824169, 0.000000, 101.173576,
        -36.140129, 0.000000, 99.294189,
        -53.833332, 0.000000, 93.242065,
        -52.833332, 0.000000, 91.510017,
        -69.206795, 0.000000, 82.477455,
        -67.921227, 0.000000, 80.945366,
        -82.477448, 0.000000, 69.206802,
        -80.945366, 0.000000, 67.921227,
        -93.242065, 0.000000, 53.833336,
        -91.510017, 0.000000, 52.833336,
        -101.173569, 0.000000, 36.824169,
        -99.294189, 0.000000, 36.140129,
        -106.030968, 0.000000, 18.696121,
        -104.061356, 0.000000, 18.348825,
        -107.666664, 0.000000, 0.000001,
        -105.666664, 0.000000, 0.000001,
        -106.030968, 0.000000, -18.696119,
        -104.061356, 0.000000, -18.348824,
        -101.173576, 0.000000, -36.824169,
        -99.294189, 0.000000, -36.140129,
        -93.242065, 0.000000, -53.833332,
        -91.510017, 0.000000, -52.833332,
        -82.477455, 0.000000, -69.206795,
        -80.945366, 0.000000, -67.921227,
        -69.206802, 0.000000, -82.477448,
        -67.921227, 0.000000, -80.945358,
        -53.833336, 0.000000, -93.242065,
        -52.833336, 0.000000, -91.510017,
        -36.824169, 0.000000, -101.173569,
        -36.140129, 0.000000, -99.294189,
        -18.696121, 0.000000, -106.030968,
        -18.348825, 0.000000, -104.061356,
        -0.000001, 0.000000, -107.666664,
        -0.000001, 0.000000, -105.666664,
        18.696119, 0.000000, -106.030968,
        18.348824, 0.000000, -104.061356,
        36.824169, 0.000000, -101.173576,
        36.140129, 0.000000, -99.294189,
        53.833332, 0.000000, -93.242065,
        52.833332, 0.000000, -91.510017,
        69.206795, 0.000000, -82.477455,
        67.921227, 0.000000, -80.945366,
        82.477448, 0.000000, -69.206802,
        80.945358, 0.000000, -67.921227,
        93.242065, 0.000000, -53.833336,
        91.510017, 0.000000, -52.833336,
        101.173569, 0.000000, -36.824169,
        99.294189, 0.000000, -36.140129,
        106.030968, 0.000000, -18.696121,
        104.061356, 0.000000, -18.348825,
};


facelist circle_fa={
        144,
        0x4,0x16, 0, 1, 3, 2,
        0x4,0x16, 2, 3, 5, 4,
        0x4,0x16, 4, 5, 7, 6,
        0x4,0x16, 6, 7, 9, 8,
        0x4,0x16, 8, 9, 11, 10,
        0x4,0x16, 10, 11, 13, 12,
        0x4,0x16, 12, 13, 15, 14,
        0x4,0x16, 14, 15, 17, 16,
        0x4,0x16, 16, 17, 19, 18,
        0x4,0x16, 18, 19, 21, 20,
        0x4,0x16, 20, 21, 23, 22,
        0x4,0x16, 22, 23, 25, 24,
        0x4,0x16, 24, 25, 27, 26,
        0x4,0x16, 26, 27, 29, 28,
        0x4,0x16, 28, 29, 31, 30,
        0x4,0x16, 30, 31, 33, 32,
        0x4,0x16, 32, 33, 35, 34,
        0x4,0x16, 34, 35, 37, 36,
        0x4,0x16, 36, 37, 39, 38,
        0x4,0x16, 38, 39, 41, 40,
        0x4,0x16, 40, 41, 43, 42,
        0x4,0x16, 42, 43, 45, 44,
        0x4,0x16, 44, 45, 47, 46,
        0x4,0x16, 46, 47, 49, 48,
        0x4,0x16, 48, 49, 51, 50,
        0x4,0x16, 50, 51, 53, 52,
        0x4,0x16, 52, 53, 55, 54,
        0x4,0x16, 54, 55, 57, 56,
        0x4,0x16, 56, 57, 59, 58,
        0x4,0x16, 58, 59, 61, 60,
        0x4,0x16, 60, 61, 63, 62,
        0x4,0x16, 62, 63, 65, 64,
        0x4,0x16, 64, 65, 67, 66,
        0x4,0x16, 66, 67, 69, 68,
        0x4,0x16, 68, 69, 71, 70,
        0x4,0x16, 70, 71, 73, 72,
        0x4,0x16, 72, 73, 75, 74,
        0x4,0x16, 74, 75, 77, 76,
        0x4,0x16, 76, 77, 79, 78,
        0x4,0x16, 78, 79, 81, 80,
        0x4,0x16, 80, 81, 83, 82,
        0x4,0x16, 82, 83, 85, 84,
        0x4,0x16, 84, 85, 87, 86,
        0x4,0x16, 86, 87, 89, 88,
        0x4,0x16, 88, 89, 91, 90,
        0x4,0x16, 90, 91, 93, 92,
        0x4,0x16, 92, 93, 95, 94,
        0x4,0x16, 94, 95, 97, 96,
        0x4,0x16, 96, 97, 99, 98,
        0x4,0x16, 98, 99, 101, 100,
        0x4,0x16, 100, 101, 103, 102,
        0x4,0x16, 102, 103, 105, 104,
        0x4,0x16, 104, 105, 107, 106,
        0x4,0x16, 106, 107, 109, 108,
        0x4,0x16, 108, 109, 111, 110,
        0x4,0x16, 110, 111, 113, 112,
        0x4,0x16, 112, 113, 115, 114,
        0x4,0x16, 114, 115, 117, 116,
        0x4,0x16, 116, 117, 119, 118,
        0x4,0x16, 118, 119, 121, 120,
        0x4,0x16, 120, 121, 123, 122,
        0x4,0x16, 122, 123, 125, 124,
        0x4,0x16, 124, 125, 127, 126,
        0x4,0x16, 126, 127, 129, 128,
        0x4,0x16, 128, 129, 131, 130,
        0x4,0x16, 130, 131, 133, 132,
        0x4,0x16, 132, 133, 135, 134,
        0x4,0x16, 134, 135, 137, 136,
        0x4,0x16, 136, 137, 139, 138,
        0x4,0x16, 138, 139, 141, 140,
        0x4,0x16, 140, 141, 143, 142,
        0x4,0x16, 142, 143, 1, 0,
        2,0x16,  0, 2,
        2,0x16,  2, 4,
        2,0x16,  4, 6,
        2,0x16,  6, 8,
        2,0x16,  8,10,
        2,0x16, 10,12,
        2,0x16, 12,14,
        2,0x16, 14,16,
        2,0x16, 16,18,
        2,0x16, 18,20,
        2,0x16, 20,22,
        2,0x16, 22,24,
        2,0x16, 24,26,
        2,0x16, 26,28,
        2,0x16, 28,30,
        2,0x16, 30,32,
        2,0x16, 32,34,
        2,0x16, 34,36,
        2,0x16, 36,38,
        2,0x16, 38,40,
        2,0x16, 40,42,
        2,0x16, 42,44,
        2,0x16, 44,46,
        2,0x16, 46,48,
        2,0x16, 48,50,
        2,0x16, 50,52,
        2,0x16, 52,54,
        2,0x16, 54,56,
        2,0x16, 56,58,
        2,0x16, 58,60,
        2,0x16, 60,62,
        2,0x16, 62,64,
        2,0x16, 64,66,
        2,0x16, 66,68,
        2,0x16, 68,70,
        2,0x16, 70,72,
        2,0x16, 72,74,
        2,0x16, 74,76,
        2,0x16, 76,78,
        2,0x16, 78,80,
        2,0x16, 80,82,
        2,0x16, 82,84,
        2,0x16, 84,86,
        2,0x16, 86,88,
        2,0x16, 88,90,
        2,0x16, 90,92,
        2,0x16, 92,94,
        2,0x16, 94,96,
        2,0x16, 96,98,
        2,0x16, 98,100,
        2,0x16, 100,102,
        2,0x16, 102,104,
        2,0x16, 104,106,
        2,0x16, 106,108,
        2,0x16, 108,110,
        2,0x16, 110,112,
        2,0x16, 112,114,
        2,0x16, 114,116,
        2,0x16, 116,118,
        2,0x16, 118,120,
        2,0x16, 120,122,
        2,0x16, 122,124,
        2,0x16, 124,126,
        2,0x16, 126,128,
        2,0x16, 128,130,
        2,0x16, 130,132,
        2,0x16, 132,134,
        2,0x16, 134,136,
        2,0x16, 136,138,
        2,0x16, 138,140,
        2,0x16, 140,142,
        2,0x16, 142, 0,
};


ptlist circle_pb={
        36,
        106.666664, 0.000000, 0.000000,
        100.233879, 0.000000, 36.482147,
        81.711411, 0.000000, 68.564011,
        53.333332, 0.000000, 92.376045,
        18.522472, 0.000000, 105.046158,
        -18.522472, 0.000000, 105.046158,
        -53.333332, 0.000000, 92.376045,
        -81.711411, 0.000000, 68.564011,
        -100.233879, 0.000000, 36.482147,
        -106.666664, 0.000000, 0.000000,
        -100.233879, 0.000000, -36.482147,
        -81.711411, 0.000000, -68.564011,
        -53.333332, 0.000000, -92.376045,
        -18.522472, 0.000000, -105.046158,
        18.522472, 0.000000, -105.046158,
        53.333332, 0.000000, -92.376045,
        81.711411, 0.000000, -68.564011,
        100.233879, 0.000000, -36.482151,
        106.666664, 0.000000, -0.000001,
        100.233879, 0.000000, 36.482147,
        81.711411, 0.000000, 68.564011,
        53.333336, 0.000000, 92.376045,
        18.522472, 0.000000, 105.046158,
        -18.522470, 0.000000, 105.046158,
        -53.333332, 0.000000, 92.376045,
        -81.711403, 0.000000, 68.564011,
        -100.233879, 0.000000, 36.482151,
        -106.666664, 0.000000, 0.000001,
        -100.233879, 0.000000, -36.482147,
        -81.711411, 0.000000, -68.564011,
        -53.333336, 0.000000, -92.376045,
        -18.522474, 0.000000, -105.046158,
        18.522470, 0.000000, -105.046158,
        53.333332, 0.000000, -92.376045,
        81.711403, 0.000000, -68.564011,
        100.233879, 0.000000, -36.482151,
};

facelist circle_fb=
        {
                36,
                2,0x16,   0, 1,
                2,0x16,   1, 2,
                2,0x16,   2, 3,
                2,0x16,   3, 4,
                2,0x16,   4, 5,
                2,0x16,   5, 6,
                2,0x16,   6, 7,
                2,0x16,   7, 8,
                2,0x16,   8, 9,
                2,0x16,   9,10,
                2,0x16,  10,11,
                2,0x16,  11,12,
                2,0x16,  12,13,
                2,0x16,  13,14,
                2,0x16,  14,15,
                2,0x16,  15,16,
                2,0x16,  16,17,
                2,0x16,  17,18,
                2,0x16,  18,19,
                2,0x16,  19,20,
                2,0x16,  20,21,
                2,0x16,  21,22,
                2,0x16,  22,23,
                2,0x16,  23,24,
                2,0x16,  24,25,
                2,0x16,  25,26,
                2,0x16,  26,27,
                2,0x16,  27,28,
                2,0x16,  28,29,
                2,0x16,  29,30,
                2,0x16,  30,31,
                2,0x16,  31,32,
                2,0x16,  32,33,
                2,0x16,  33,34,
                2,0x16,  34,35,
                2,0x16,  35, 0,
        };

facelist circle_fc=
        {
                36,
                2,0x14,   0, 1,
                2,0x14,   1, 2,
                2,0x14,   2, 3,
                2,0x14,   3, 4,
                2,0x14,   4, 5,
                2,0x14,   5, 6,
                2,0x14,   6, 7,
                2,0x14,   7, 8,
                2,0x14,   8, 9,
                2,0x14,   9,10,
                2,0x14,  10,11,
                2,0x14,  11,12,
                2,0x14,  12,13,
                2,0x14,  13,14,
                2,0x14,  14,15,
                2,0x14,  15,16,
                2,0x14,  16,17,
                2,0x14,  17,18,
                2,0x14,  18,19,
                2,0x14,  19,20,
                2,0x14,  20,21,
                2,0x14,  21,22,
                2,0x14,  22,23,
                2,0x14,  23,24,
                2,0x14,  24,25,
                2,0x14,  25,26,
                2,0x14,  26,27,
                2,0x14,  27,28,
                2,0x14,  28,29,
                2,0x14,  29,30,
                2,0x14,  30,31,
                2,0x14,  31,32,
                2,0x14,  32,33,
                2,0x14,  33,34,
                2,0x14,  34,35,
                2,0x14,  35, 0,
        };

facelist circle_fd=
        {
                36,
                2,0x12,   0, 1,
                2,0x12,   1, 2,
                2,0x12,   2, 3,
                2,0x12,   3, 4,
                2,0x12,   4, 5,
                2,0x12,   5, 6,
                2,0x12,   6, 7,
                2,0x12,   7, 8,
                2,0x12,   8, 9,
                2,0x12,   9,10,
                2,0x12,  10,11,
                2,0x12,  11,12,
                2,0x12,  12,13,
                2,0x12,  13,14,
                2,0x12,  14,15,
                2,0x12,  15,16,
                2,0x12,  16,17,
                2,0x12,  17,18,
                2,0x12,  18,19,
                2,0x12,  19,20,
                2,0x12,  20,21,
                2,0x12,  21,22,
                2,0x12,  22,23,
                2,0x12,  23,24,
                2,0x12,  24,25,
                2,0x12,  25,26,
                2,0x12,  26,27,
                2,0x12,  27,28,
                2,0x12,  28,29,
                2,0x12,  29,30,
                2,0x12,  30,31,
                2,0x12,  31,32,
                2,0x12,  32,33,
                2,0x12,  33,34,
                2,0x12,  34,35,
                2,0x12,  35, 0,
        };


detlist circle_d=
        {
                6,circle_pb,circle_fd,
                5,circle_pb,circle_fc,
                4,circle_pb,circle_fb,
                0,circle_pa,circle_fa,
        };


///////////
// SPOTS //

obj spot1,spot2,spot3;

ptlist spot_p=
        {
                6,
                2.5, 0, 0,
                1.5, 0,-2,
                -1.5, 0,-2,
                -2.5, 0, 0,
                -1.5, 0, 2,
                1.5, 0, 2
        };

facelist spot_f=
        {
                1,
                6,0x16, 0,1,2,3,4,5
        };



//////////
// BALL //

obj ball;

#if 0 // IMPLEMENT_ME ?
#include "footy.inc"
#endif

facelist footy_f={
        32,
        6,31, 2,15,16,14,10,1,
        6,28, 3,20,21,19,15,2,
        6,31, 4,25,26,24,20,3,
        6,28, 0,5,6,29,25,4,
        6,31, 1,10,11,9,5,0,
        6,28, 29,6,7,53,52,28,
        6,31, 24,26,27,48,47,23,
        6,28, 19,21,22,43,42,18,
        6,31, 14,16,17,38,37,13,
        6,28, 9,11,12,33,32,8,
        6,31, 53,7,8,32,31,54,
        6,28, 48,27,28,52,51,49,
        6,31, 43,22,23,47,46,44,
        6,28, 38,17,18,42,41,39,
        6,31, 33,12,13,37,36,34,
        6,28, 56,35,39,41,40,57,
        6,31, 57,40,44,46,45,58,
        6,28, 58,45,49,51,50,59,
        6,31, 59,50,54,31,30,55,
        6,28, 55,30,34,36,35,56,
        5,8, 4,3,2,1,0,
        5,4, 9,8,7,6,5,
        5,8, 14,13,12,11,10,
        5,4, 19,18,17,16,15,
        5,8, 24,23,22,21,20,
        5,4, 29,28,27,26,25,
        5,8, 30,31,32,33,34,
        5,4, 35,36,37,38,39,
        5,8, 40,41,42,43,44,
        5,4, 45,46,47,48,49,
        5,8, 50,51,52,53,54,
        5,4, 55,56,57,58,59,
};


facelist footy_fb={
        32,
        6,-NT_TM-4, 2,15,16,14,10,1,
        6,-NT_TM-4, 3,20,21,19,15,2,
        6,-NT_TM-4, 4,25,26,24,20,3,
        6,-NT_TM-4, 0,5,6,29,25,4,
        6,-NT_TM-4, 1,10,11,9,5,0,
        6,-NT_TM-4, 29,6,7,53,52,28,
        6,-NT_TM-4, 24,26,27,48,47,23,
        6,-NT_TM-4, 19,21,22,43,42,18,
        6,-NT_TM-4, 14,16,17,38,37,13,
        6,-NT_TM-4, 9,11,12,33,32,8,
        6,-NT_TM-4, 53,7,8,32,31,54,
        6,-NT_TM-4, 48,27,28,52,51,49,
        6,-NT_TM-4, 43,22,23,47,46,44,
        6,-NT_TM-4, 38,17,18,42,41,39,
        6,-NT_TM-4, 33,12,13,37,36,34,
        6,-NT_TM-4, 56,35,39,41,40,57,
        6,-NT_TM-4, 57,40,44,46,45,58,
        6,-NT_TM-4, 58,45,49,51,50,59,
        6,-NT_TM-4, 59,50,54,31,30,55,
        6,-NT_TM-4, 55,30,34,36,35,56,
        5,-NT_TM-4, 4,3,2,1,0,
        5,-NT_TM-4, 9,8,7,6,5,
        5,-NT_TM-4, 14,13,12,11,10,
        5,-NT_TM-4, 19,18,17,16,15,
        5,-NT_TM-4, 24,23,22,21,20,
        5,-NT_TM-4, 29,28,27,26,25,
        5,-NT_TM-4, 30,31,32,33,34,
        5,-NT_TM-4, 35,36,37,38,39,
        5,-NT_TM-4, 40,41,42,43,44,
        5,-NT_TM-4, 45,46,47,48,49,
        5,-NT_TM-4, 50,51,52,53,54,
        5,-NT_TM-4, 55,56,57,58,59,
};


ptlist footys_p={
        2,
        0,0,0,
        0,0,0,
};

facelist footys_f={
        1,
        2,31, 0,1
};

#if 0 // IMPLEMENT_ME
detlist ball_d={
        1.75,footys_p,footys_f,
        0,footy_p,footy_f,
        0,footy_p,footy_fb,
};
#endif


/////////////////
// BALL SHADOW //

obj ballshad;

ptlist ballshad_p=
        {
                6,
                2.5, 0, 0,
                1.5, 0,-2,
                -1.5, 0,-2,
                -2.5, 0, 0,
                -1.5, 0, 2,
                1.5, 0, 2
        };

facelist ballshad_f=
        {
                1,
                6,256, 0,1,2,3,4,5
        };


//////////////////////////////
// PLAYER SHADOW/HIGHLIGHTS //

obj plhilight[7][6];

ptlist plshad_p=
        {
                6,
                5, 0, 0,
                3, 0,-4,
                -3, 0,-4,
                -5, 0, 0,
                -3, 0, 4,
                3, 0, 4
        };

ptlist plhi_p=
        {
                4,
                -10.8, 0, -10.8,
                -10.8, 0,  10.8,
                10.8, 0,  10.8,
                10.8, 0, -10.8,
        };

facelist plshad_f={ 1, 6,256, 0,1,2,3,4,5 };

facelist plhi1_f1={ 1, 4,-X_TM-2000, 0,1,2,3 };
facelist plhi2_f1={ 1, 4,-X_TM-2001, 0,1,2,3 };
facelist plhi3_f1={ 1, 4,-X_TM-2002, 0,1,2,3 };
facelist plhi4_f1={ 1, 4,-X_TM-2003, 0,1,2,3 };

facelist plhi1_f2={ 1, 4,-X_TM-2004, 0,1,2,3 };
facelist plhi2_f2={ 1, 4,-X_TM-2005, 0,1,2,3 };
facelist plhi3_f2={ 1, 4,-X_TM-2006, 0,1,2,3 };
facelist plhi4_f2={ 1, 4,-X_TM-2007, 0,1,2,3 };

facelist plhi1_f3={ 1, 4,-X_TM-2008, 0,1,2,3 };
facelist plhi2_f3={ 1, 4,-X_TM-2009, 0,1,2,3 };
facelist plhi3_f3={ 1, 4,-X_TM-2010, 0,1,2,3 };
facelist plhi4_f3={ 1, 4,-X_TM-2011, 0,1,2,3 };

facelist plhi1_f4={ 1, 4,-X_TM-2012, 0,1,2,3 };
facelist plhi2_f4={ 1, 4,-X_TM-2013, 0,1,2,3 };
facelist plhi3_f4={ 1, 4,-X_TM-2014, 0,1,2,3 };
facelist plhi4_f4={ 1, 4,-X_TM-2015, 0,1,2,3 };

facelist plhi1_f5={ 1, 4,-X_TM-2012, 0,1,2,3 };
facelist plhi2_f5={ 1, 4,-X_TM-2013, 0,1,2,3 };
facelist plhi3_f5={ 1, 4,-X_TM-2014, 0,1,2,3 };
facelist plhi4_f5={ 1, 4,-X_TM-2015, 0,1,2,3 };

facelist plhi1_ff={ 1, 4,-X_TM-2012, 0,1,2,3 };
facelist plhi2_ff={ 1, 4,-X_TM-2013, 0,1,2,3 };
facelist plhi3_ff={ 1, 4,-X_TM-2014, 0,1,2,3 };
facelist plhi4_ff={ 1, 4,-X_TM-2015, 0,1,2,3 };


///////////
// GOALS //

obj goal1_1,goal1_2,goal2_1,goal2_2,goal3_1,goal3_2,goal4_1,goal4_2;

ptlist goal1a_p=
        {
                4,
                -36, 0,0,
                -20,37,0,
                0, 0,0,
                0,37,0,
        };

ptlist goal2a_p=
        {
                4,
                -20, 0,-43.5,
                -20, 0, 43.5,
                0, 0,-43.5,
                0, 0, 43.5,
        };

ptlist goal1ax_p=
        {
                4,
                36, 0,0,
                20,37,0,
                0, 0,0,
                0,37,0,
        };

ptlist goal2ax_p=
        {
                4,
                20, 0,-43.5,
                20, 0, 43.5,
                0, 0,-43.5,
                0, 0, 43.5,
        };

ptlist goal3a_p=
        {
                4,
                -8, 0,-43.5,
                8,37,-43.5,
                -8, 0, 43.5,
                8,37, 43.5,
        };

ptlist goal3ax_p=
        {
                4,
                8, 0,-43.5,
                -8,37,-43.5,
                8, 0, 43.5,
                -8,37, 43.5,
        };

facelist goal_f1a=
        {
                3,
                4,257, 0,1,3,2,
                4,257, 2,3,1,0,
                2,0x16, 2,3,
        };

facelist goal_f2a=
        {
                2,
                4,257, 0,1,3,2,
                4,257, 1,0,2,3,
        };

facelist goal_f1b=
        {
                3,
                4,257, 0,1,3,2,
                4,257, 2,3,1,0,
                2,0x1a, 2,3,
        };


ptlist goal1b_p=
        {
                10,
                -36,  0,   0,
                -20, 37,   0,
                -1.2, 0,   0,
                -1.2,37,   0,
                0,   0,   1.2,
                0,  35.8, 1.2,
                1.2, 0,   0,
                1.2,37,   0,
                0,   0,  -1.2,
                0,  38.2,-1.2,
        };

ptlist goal2b_p=
        {
                10,
                -36,  0,   0,
                -20, 37,   0,
                -1.2, 0,   0,
                -1.2,37,   0,
                0,   0,  -1.2,
                0,  35.8,-1.2,
                1.2, 0,   0,
                1.2,37,   0,
                0,   0,   1.2,
                0,  38.2, 1.2,
        };

ptlist goal3b_p=
        {
                10,
                -20,  0,  -43.5,
                -20,  0,   43.5,
                -1.2, 0,  -43.5,
                -1.2, 0,   43.5,
                0,  -1.2,-42.3,
                0,  -1.2, 42.3,
                1.2, 0,  -43.5,
                1.2, 0,   43.5,
                0,   1.2,-44.7,
                0,   1.2, 44.7,
        };

ptlist goal1bx_p=
        {
                10,
                36,  0,   0,
                20, 37,   0,
                1.2, 0,   0,
                1.2,37,   0,
                0,   0,   1.2,
                0,  35.8, 1.2,
                -1.2, 0,   0,
                -1.2,37,   0,
                0,   0,  -1.2,
                0,  38.2,-1.2,
        };

ptlist goal2bx_p=
        {
                10,
                36,  0,   0,
                20, 37,   0,
                1.2, 0,   0,
                1.2,37,   0,
                0,   0,  -1.2,
                0,  35.8,-1.2,
                -1.2, 0,   0,
                -1.2,37,   0,
                0,   0,   1.2,
                0,  38.2, 1.2,
        };

ptlist goal3bx_p=
        {
                10,
                20,  0,  -43.5,
                20,  0,   43.5,
                1.2, 0,  -43.5,
                1.2, 0,   43.5,
                0,  -1.2,-42.3,
                0,  -1.2, 42.3,
                -1.2, 0,  -43.5,
                -1.2, 0,   43.5,
                0,   1.2,-44.7,
                0,   1.2, 44.7,
        };

facelist goal_f1c=
        {
                6,
#ifdef NEW
                4,-NT_TM-2002, 1,3,2,0,
                4,-NT_TM-2003, 3,1,0,2,
#else
        4,512, 0,1,3,2,
	4,512, 2,3,1,0,
#endif
                4,0x16, 3,2,4,5,
                4,0x1a, 5,4,6,7,
                4,0x1e, 7,6,8,9,
                4,0x1a, 9,8,2,3,
        };

facelist goal_f1cm=
        {
                6,
#ifdef NEW
                4,-NT_TM-2003, 3,1,0,2,
                4,-NT_TM-2002, 1,3,2,0,
#else
        4,512, 0,1,3,2,
	4,512, 2,3,1,0,
#endif
                4,0x16, 5,4,2,3,
                4,0x1a, 7,6,4,5,
                4,0x1e, 9,8,6,7,
                4,0x1a, 3,2,8,9,
        };

facelist goal_f2c=
        {
                6,
#ifdef NEW
                4,-NT_TM-2000, 0,1,3,2,
                4,-NT_TM-2000, 2,3,1,0,
#else
        4,512, 0,1,3,2,
	4,512, 2,3,1,0,
#endif
                4,0x16, 2,3,5,4,
                4,0x1a, 4,5,7,6,
                4,0x1e, 6,7,9,8,
                4,0x1a, 8,9,3,2,
        };

facelist goal_f2cm=
        {
                6,
#ifdef NEW
                4,-NT_TM-2000, 3,2,0,1,
                4,-NT_TM-2000, 1,0,2,3,
#else
        4,512, 0,1,3,2,
	4,512, 2,3,1,0,
#endif
                4,0x16, 4,5,3,2,
                4,0x1a, 6,7,5,4,
                4,0x1e, 8,9,7,6,
                4,0x1a, 2,3,9,8,
        };

facelist goal_f3c=
        {
                2,
#ifdef NEW
                4,-NT_TM-2001, 1,3,2,0,
                4,-NT_TM-2001, 3,1,0,2,
#else
        4,512, 0,1,3,2,
	4,512, 1,0,2,3,
#endif
        };


ptlist goal1c_p=
        {
                18,
                -36,  0,   0,
                -20, 37,   0,
                -1.2, 0,  -0.5,
                -1.2,37.5,-0.5,
                -1.2, 0,   0.5,
                -1.2,36.5, 0.5,
                -0.5, 0,   1.2,
                -0.5,36.3, 1.2,
                0.5, 0,   1.2,
                0.5,36.3, 1.2,
                1.2, 0,   0.5,
                1.2,36.5, 0.5,
                1.2, 0,  -0.5,
                1.2,37.5,-0.5,
                0.5, 0,  -1.2,
                0.5,38.2,-1.2,
                -0.5, 0,  -1.2,
                -0.5,38.2,-1.2,
        };

ptlist goal2c_p=
        {
                18,
                -36,  0,   0,
                -20, 37,   0,
                -1.2, 0,   0.5,
                -1.2,37.5, 0.5,
                -1.2, 0,  -0.5,
                -1.2,36.5,-0.5,
                -0.5, 0,  -1.2,
                -0.5,36.3,-1.2,
                0.5, 0,  -1.2,
                0.5,36.3,-1.2,
                1.2, 0,  -0.5,
                1.2,36.5,-0.5,
                1.2, 0,   0.5,
                1.2,37.5, 0.5,
                0.5, 0,   1.2,
                0.5,38.2, 1.2,
                -0.5, 0,   1.2,
                -0.5,38.2, 1.2,
        };

ptlist goal3c_p=
        {
                18,
                -20,  0,  -43.5,
                -20,  0,   43.5,
                -1.2, 0.5,-44,
                -1.2, 0.5, 44,
                -1.2,-0.5,-43,
                -1.2,-0.5, 43,
                -0.5,-1.2,-42.3,
                -0.5,-1.2, 42.3,
                0.5,-1.2,-42.3,
                0.5,-1.2, 42.3,
                1.2,-0.5,-43,
                1.2,-0.5, 43,
                1.2, 0.5,-44,
                1.2, 0.5, 44,
                0.5, 1.2,-44.7,
                0.5, 1.2, 44.7,
                -0.5, 1.2,-44.7,
                -0.5, 1.2, 44.7,
        };

ptlist goal1cx_p=
        {
                18,
                36,  0,   0,
                20, 37,   0,
                1.2, 0,  -0.5,
                1.2,37.5,-0.5,
                1.2, 0,   0.5,
                1.2,36.5, 0.5,
                0.5, 0,   1.2,
                0.5,36.3, 1.2,
                -0.5, 0,   1.2,
                -0.5,36.3, 1.2,
                -1.2, 0,   0.5,
                -1.2,36.5, 0.5,
                -1.2, 0,  -0.5,
                -1.2,37.5,-0.5,
                -0.5, 0,  -1.2,
                -0.5,38.2,-1.2,
                0.5, 0,  -1.2,
                0.5,38.2,-1.2,
        };

ptlist goal2cx_p=
        {
                18,
                36,  0,   0,
                20, 37,   0,
                1.2, 0,   0.5,
                1.2,37.5, 0.5,
                1.2, 0,  -0.5,
                1.2,36.5,-0.5,
                0.5, 0,  -1.2,
                0.5,36.3,-1.2,
                -0.5, 0,  -1.2,
                -0.5,36.3,-1.2,
                -1.2, 0,  -0.5,
                -1.2,36.5,-0.5,
                -1.2, 0,   0.5,
                -1.2,37.5, 0.5,
                -0.5, 0,   1.2,
                -0.5,38.2, 1.2,
                0.5, 0,   1.2,
                0.5,38.2, 1.2,
        };

ptlist goal3cx_p=
        {
                18,
                20,  0,  -43.5,
                20,  0,   43.5,
                1.2, 0.5,-44,
                1.2, 0.5, 44,
                1.2,-0.5,-43,
                1.2,-0.5, 43,
                0.5,-1.2,-42.3,
                0.5,-1.2, 42.3,
                -0.5,-1.2,-42.3,
                -0.5,-1.2, 42.3,
                -1.2,-0.5,-43,
                -1.2,-0.5, 43,
                -1.2, 0.5,-44,
                -1.2, 0.5, 44,
                -0.5, 1.2,-44.7,
                -0.5, 1.2, 44.7,
                0.5, 1.2,-44.7,
                0.5, 1.2, 44.7,
        };

facelist goal_f1d=
        {
                10,
#ifdef NEW
                4,-NT_TM-2002, 1,3,2,0,
                4,-NT_TM-2003, 3,1,0,2,
#else
        4,516, 0,1,3,2,
	4,516, 2,3,1,0,
#endif
                4,0x18, 3,2,4,5,
                4,0x16, 5,4,6,7,
                4,0x18, 7,6,8,9,
                4,0x1a, 9,8,10,11,
                4,0x1c, 11,10,12,13,
                4,0x1e, 13,12,14,15,
                4,0x1c, 15,14,16,17,
                4,0x1a, 17,16,2,3,
        };

facelist goal_f1dm=
        {
                10,
#ifdef NEW
                4,-NT_TM-2003, 3,1,0,2,
                4,-NT_TM-2002, 1,3,2,0,
#else
        4,516,  0,1,3,2,
	4,516,  2,3,1,0,
#endif
                4,0x18, 5,4,2,3,
                4,0x16, 7,6,4,5,
                4,0x18, 9,8,6,7,
                4,0x1a, 11,10,8,9,
                4,0x1c, 13,12,10,11,
                4,0x1e, 15,14,12,13,
                4,0x1c, 17,16,14,15,
                4,0x1a, 3,2,16,17,
        };

facelist goal_f2d=
        {
                10,
#ifdef NEW
                4,-NT_TM-2000, 0,1,3,2,
                4,-NT_TM-2000, 2,3,1,0,
#else
        4,516, 0,1,3,2,
	4,516, 2,3,1,0,
#endif
                4,0x18, 2,3,5,4,
                4,0x16, 4,5,7,6,
                4,0x18, 6,7,9,8,
                4,0x1a, 8,9,11,10,
                4,0x1c, 10,11,13,12,
                4,0x1e, 12,13,15,14,
                4,0x1c, 14,15,17,16,
                4,0x1a, 16,17,3,2,
        };

facelist goal_f2dm=
        {
                10,
#ifdef NEW
                4,-NT_TM-2000, 3,2,0,1,
                4,-NT_TM-2000, 1,0,2,3,
#else
        4,516, 0,1,3,2,
	4,516, 2,3,1,0,
#endif
                4,0x18, 4,5,3,2,
                4,0x16, 6,7,5,4,
                4,0x18, 8,9,7,6,
                4,0x1a, 10,11,9,8,
                4,0x1c, 12,13,11,10,
                4,0x1e, 14,15,13,12,
                4,0x1c, 16,17,15,14,
                4,0x1a, 2,3,17,16,
        };

facelist goal_f3d=
        {
                2,
#ifdef NEW
                4,-NT_TM-2001, 1,3,2,0,
                4,-NT_TM-2001, 3,1,0,2,
#else
        4,517, 0,1,3,2,
	4,517, 1,0,2,3,
#endif
        };

detlist goal1_a=
        {
                {4,  goal1a_p,goal_f1a},
                {3.2,goal1a_p,goal_f1b},
                {1.6,goal1b_p,goal_f1c},
                {0.8,goal1b_p,goal_f1c},
                {0,  goal1c_p,goal_f1d}
        };

detlist goal2_a=
        {
                {4,  goal1a_p,goal_f1a},
                {3.2,goal1a_p,goal_f1b},
                {1.6,goal2b_p,goal_f1cm},
                {0.8,goal2b_p,goal_f1cm},
                {0,  goal2c_p,goal_f1dm}
        };

detlist goal3_a=
        {
                {4,  goal2a_p,goal_f1a},
                {3.2,goal2a_p,goal_f1b},
                {1.6,goal3b_p,goal_f2cm},
                {0.8,goal3b_p,goal_f2cm},
                {0,  goal3c_p,goal_f2dm}
        };

detlist goal4_a=
        {
                {4,  goal3a_p,goal_f2a},
                {3.2,goal3a_p,goal_f2a},
                {1.6,goal3a_p,goal_f3c},
                {0.8,goal3a_p,goal_f3c},
                {0,  goal3a_p,goal_f3d}
        };

detlist goal1_b=
        {
                {4,  goal1ax_p,goal_f1a},
                {3.2,goal1ax_p,goal_f1b},
                {1.6,goal1bx_p,goal_f1cm},
                {0.8,goal1bx_p,goal_f1cm},
                {0,  goal1cx_p,goal_f1dm}
        };

detlist goal2_b=
        {
                {4,  goal1ax_p,goal_f1a},
                {3.2,goal1ax_p,goal_f1b},
                {1.6,goal2bx_p,goal_f1c},
                {0.8,goal2bx_p,goal_f1c},
                {0,  goal2cx_p,goal_f1d}
        };

detlist goal3_b=
        {
                {4,  goal2ax_p,goal_f1a},
                {3.2,goal2ax_p,goal_f1b},
                {1.6,goal3bx_p,goal_f2c},
                {0.8,goal3bx_p,goal_f2c},
                {0,  goal3cx_p,goal_f2d}
        };

detlist goal4_b=
        {
                {4,  goal3ax_p,goal_f2a},
                {3.2,goal3ax_p,goal_f2a},
                {1.6,goal3ax_p,goal_f3c},
                {0.8,goal3ax_p,goal_f3c},
                {0,  goal3ax_p,goal_f3d}
        };


///////////
// FLAGS //

obj flag_1,flag_2,flag_3,flag_4;

ptlist flag_p=
        {
                11,
                -.5,  0,  0,
                0,  0, .5,
                .5,  0,  0,
                0,  0,-.5,
                -.5, 19,  0,
                0, 19, .5,
                .5, 19,  0,
                0, 19,-.5,
                6, 15, 5.5,
                0, 10,  0,
                0, 19,  0,
        };

facelist flag_f=
        {
                7,
                4,31, 0,1,5,4,
                4,29, 1,2,6,5,
                4,27, 2,3,7,6,
                4,29, 3,0,4,7,
                4,29, 4,5,6,7,
                3,-X_TM-2046, 10,8,9,
                3,-X_TM-2046, 9,8,10,
        };

