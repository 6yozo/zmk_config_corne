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
#include "whu-punctuation-macros.h"
#include "whu-os-letters.h"
#include "bunya-dtm-hu.h"

#define MOD_LEFT(PREFIX, BASE) \
 PREFIX##_OS_ESC(BASE)  &none            &none            &none            &none            &none               PREFIX##_OS_J(BASE)        PREFIX##_OS_K(BASE)      PREFIX##_OS_O(BASE)        PREFIX##_OS_U(BASE)        PREFIX##_OS_DOT(BASE)    PREFIX##_OS_I_ACUTE(BASE) \
 PREFIX##_OS_TAB(BASE)  PREFIX##_OS_LG   PREFIX##_OS_LA   PREFIX##_OS_LC   PREFIX##_OS_LS   &none               PREFIX##_OS_Y(BASE)        PREFIX##_OS_H(BASE)      PREFIX##_OS_A(BASE)        PREFIX##_OS_E(BASE)        PREFIX##_OS_I(BASE)      PREFIX##_OS_O_DIARESIS(BASE) \
 PREFIX##_OS_APP(BASE)  &none            &none            &to BASE##_NUM   &to BASE##_FUN   &none               PREFIX##_OS_O_ACUTE(BASE)  PREFIX##_OS_F(BASE)      PREFIX##_OS_E_ACUTE(BASE)  PREFIX##_OS_A_ACUTE(BASE)  PREFIX##_OS_COMMA(BASE)  PREFIX##_OS_U_DIARESIS(BASE) \
                                                          &to BASE         &to BASE         &to SYSTEM          &PREFIX##_os_bspc BASE     &PREFIX##_os_space BASE  &to BASE##_NAV

#define MOD_RIGHT(PREFIX, BASE) \
 &PREFIX##_os_u_acute BASE   &PREFIX##_os_z BASE  &PREFIX##_os_l BASE  &PREFIX##_os_d BASE  &PREFIX##_os_p BASE  &PREFIX##_os_v BASE          &none     &none            &none            &none            &none            PREFIX##_OS_DEL(BASE) \
 &PREFIX##_os_o_dacute BASE  &PREFIX##_os_n BASE  &PREFIX##_os_r BASE  &PREFIX##_os_t BASE  &PREFIX##_os_c BASE  &PREFIX##_os_b BASE          &none     PREFIX##_OS_LS   PREFIX##_OS_LC   PREFIX##_OS_LA   PREFIX##_OS_LG  &none \
 &PREFIX##_os_u_dacute BASE  &PREFIX##_os_x BASE  &PREFIX##_os_q BASE  &PREFIX##_os_m BASE  &PREFIX##_os_g BASE  &PREFIX##_os_w BASE          &none     &to BASE##_FUN   &to BASE##_NUM   &none            &none            PREFIX##_OS_RET(BASE) \
                                                                       &to BASE##_NAV       &PREFIX##_os_s BASE  &to SYSTEM                   &to BASE  &to BASE         &to BASE

#define NAV(PREFIX, BASE) \
 &kp ESC    &kt LGUI        &kt LALT       &kt LCTRL            &kt LSHFT        &none                   &kp INS       &none      &none                 &none      &none      &kp DEL \
 &kp TAB    &kp LGUI        &kp LALT       &kp LCTRL            &kp LSHFT        &caps_word              &kp CAPS      &kp LEFT   &kp DOWN              &kp UP     &kp RIGHT  &none   \
 &kp K_APP  PREFIX##_UNDO   PREFIX##_CUT   PREFIX##_COPY        PREFIX##_PASTE   PREFIX##_AGAIN          &kp LC(BSPC)  &kp HOME   &kp PG_DN             &kp PG_UP  &kp END    &kp RET \
                                           &to BASE##_MOD_LEFT  &kp S            &to SYSTEM              &kp BSPC      &kp SPACE  &to BASE##_MOD_RIGHT
