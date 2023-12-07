#pragma once

// Naming convention
// ---
// First letter:
//   w -> windows
//   l -> linux
//   m -> mac
// 2nd and 3rd letter:
//   en -> US International
//   hu -> Hungarian
//
// dacute -> double acute
// cap -> capital

// LAYERS FOR WIN-ENGLISH-QUERTY HOST (WEN)
//
#define SYSTEM    0

// BUNYA-DTM LAYOUT LAYERS FOR WIN-HUNGARIAN-QUERTZ HOST (WHU)

#define WHU_BUNYA 1
#define WHU_BUNYA_MOD_LEFT 2
#define WHU_BUNYA_MOD_RIGHT 3
#define WHU_BUNYA_NAV 4
#define WHU_BUNYA_NUM 5
#define WHU_BUNYA_SYM 6

// LAYERS FOR MAC-HUNGARIAN-QUERTZ HOST (MHU)

#define MHU_BASE  7
#define MHU_NAV   8
#define MHU_NUM   9
#define MHU_SYM   10
// Acute
#define MHU_AL    11
// Double acute
#define MHU_DAL   12
// Diaresis
#define MHU_DL    13

#define MHU_LAYER_SET MHU_BASE MHU_NAV MHU_NUM MHU_SYM MHU_AL MHU_DAL MHU_DL
