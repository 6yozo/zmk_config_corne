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

// TODO place del, ret, esc, tab and caps somewhere

#define MOD_LEFT(PREFIX, BASE) \
 &none  &none              &none              &none              &none              &none               &##PREFIX##_os_j BASE        &##PREFIX##_os_k BASE      &##PREFIX##_os_o BASE        &##PREFIX##_os_u BASE        &##PREFIX##_os_dot BASE     &##PREFIX##_os_i_acute BASE \
 &none  &##PREFIX##_os_lg  &##PREFIX##_os_la  &##PREFIX##_os_lc  &##PREFIX##_os_ls  &none               &##PREFIX##_os_y BASE        &##PREFIX##_os_h BASE      &##PREFIX##_os_a BASE        &##PREFIX##_os_e BASE        &##PREFIX##_os_i BASE       &##PREFIX##_os_o_diaresis BASE \
 &none  &to BASE##_SYM     &to BASE##_NUM     &to BASE##_NAV     &to BASE           &none               &##PREFIX##_os_o_acute BASE  &##PREFIX##_os_f BASE      &##PREFIX##_os_e_acute BASE  &##PREFIX##_os_a_acute BASE  &##PREFIX##_os_comma  BASE  &##PREFIX##_os_u_diaresis BASE \
                                              &to BASE           &to BASE           &to SYSTEM          &##PREFIX##_os_bspc BASE     &##PREFIX##_os_space BASE  &to BASE##_NAV

#define MOD_RIGHT(PREFIX, BASE) \
 &##PREFIX##_os_u_acute BASE   &##PREFIX##_os_z BASE  &##PREFIX##_os_l BASE  &##PREFIX##_os_d BASE  &##PREFIX##_os_p BASE  &##PREFIX##_os_v BASE          &none    &none              &none              &none              &none              &none \
 &##PREFIX##_os_o_dacute BASE  &##PREFIX##_os_n BASE  &##PREFIX##_os_r BASE  &##PREFIX##_os_t BASE  &##PREFIX##_os_c BASE  &##PREFIX##_os_b BASE          &none    &##PREFIX##_os_ls  &##PREFIX##_os_lc  &##PREFIX##_os_la  &##PREFIX##_os_lg  &none \
 &##PREFIX##_os_u_dacute BASE  &##PREFIX##_os_x BASE  &##PREFIX##_os_q BASE  &##PREFIX##_os_m BASE  &##PREFIX##_os_g BASE  &##PREFIX##_os_w BASE          &none    &to BASE           &to BASE##_NAV     &to BASE##_NUM     &to BASE##_SYM     &none \
                                                                              &to BASE##_NAV        &##PREFIX##_os_s BASE  &to SYSTEM                     &to BASE &to BASE           &to BASE
