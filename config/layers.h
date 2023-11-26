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
#define WHU_BUNYA_PUNCT_LEFT 2
#define WHU_BUNYA_PUNCT_RIGHT 3
#define WHU_BUNYA_NAV 4
#define WHU_BUNYA_NAV_PUNCT_LEFT 5
#define WHU_BUNYA_NAV_PUNCT_RIGHT 6
#define WHU_BUNYA_NUM 7
#define WHU_BUNYA_NUM_PUNCT_LEFT 8
#define WHU_BUNYA_NUM_PUNCT_RIGHT 9
#define WHU_BUNYA_SYM 10
#define WHU_BUNYA_SYM_PUNCT_LEFT 11
#define WHU_BUNYA_SYM_PUNCT_RIGHT 12

// LAYERS FOR MAC-HUNGARIAN-QUERTZ HOST (MHU)

#define MHU_BASE  13
#define MHU_NAV   14
#define MHU_NUM   15
#define MHU_SYM   16
// Acute
#define MHU_AL    17
// Double acute
#define MHU_DAL   18
// Diaresis
#define MHU_DL    19

#define MHU_LAYER_SET MHU_BASE MHU_NAV MHU_NUM MHU_SYM MHU_AL MHU_DAL MHU_DL
