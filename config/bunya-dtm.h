// Copyright 2023 Gyozo Gaspar
//
// This file is part of Lottie layout. The Lottie layout is free
// software: you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option)
// any later version.  The Lottie layout is distributed in the hope
// that it will be useful, but WITHOUT ANY WARRANTY; without even the
// implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
// PURPOSE. See the GNU General Public License for more details.  You
// should have received a copy of the GNU General Public License along
// with Lottie layout. If not, see <https://www.gnu.org/licenses/>.

#pragma once

#include <behaviors.dtsi>
#include "layers.h"
#include "whu.h"

#define MAKE_BUNYA_DTM(PREFIX) \
 PREFIX##_U_ACUTE   PREFIX##_Z  PREFIX##_L  PREFIX##_D                PREFIX##_P  PREFIX##_V          PREFIX##_J        PREFIX##_K      PREFIX##_O        PREFIX##_U        PREFIX##_DOT    PREFIX##_I_ACUTE \
 PREFIX##_O_DACUTE  PREFIX##_N  PREFIX##_R  PREFIX##_T                PREFIX##_C  PREFIX##_B          PREFIX##_Y        PREFIX##_H      PREFIX##_A        PREFIX##_E        PREFIX##_I      PREFIX##_O_DIARESIS \
 PREFIX##_U_DACUTE  PREFIX##_X  PREFIX##_Q  PREFIX##_M                PREFIX##_G  PREFIX##_W          PREFIX##_O_ACUTE  PREFIX##_F      PREFIX##_E_ACUTE  PREFIX##_A_ACUTE  PREFIX##_COMMA  PREFIX##_U_DIARESIS \
                                            &to WHU_BUNYA_PUNCT_LEFT  PREFIX##_S  &to SYSTEM          PREFIX##_BSPC     PREFIX##_SPACE  &to WHU_BUNYA_PUNCT_RIGHT
