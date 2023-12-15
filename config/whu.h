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

#include "whu-macros.h"
#include "whu-os-letters.h"
#include "sticky-key.h"

#define WHU_U_ACUTE     &m_u_acute
#define WHU_Z           &kp Y
#define WHU_L           &kp L
#define WHU_D           &kp D
#define WHU_P           &kp P
#define WHU_V           &kp V
#define WHU_J           &kp J
#define WHU_K           &kp K
#define WHU_O           &kp O
#define WHU_U           &kp U
#define WHU_DOT         &kp DOT
#define WHU_I_ACUTE     &m_i_acute
#define WHU_O_DACUTE    &m_o_dacute
#define WHU_N           &kp N
#define WHU_R           &kp R
#define WHU_T           &kp T
#define WHU_C           &kp C
#define WHU_B           &kp B
#define WHU_Y           &kp Z
#define WHU_H           &kp H
#define WHU_A           &kp A
#define WHU_E           &kp E
#define WHU_I           &kp I
#define WHU_O_DIARESIS  &m_o_diaresis
#define WHU_U_DACUTE    &m_u_dacute
#define WHU_X           &kp X
#define WHU_Q           &kp Q
#define WHU_M           &kp M
#define WHU_G           &kp G
#define WHU_W           &kp W
#define WHU_O_ACUTE     &m_o_acute
#define WHU_F           &kp F
#define WHU_E_ACUTE     &m_e_acute
#define WHU_A_ACUTE     &m_a_acute
#define WHU_COMMA       &kp COMMA
#define WHU_U_DIARESIS  &m_u_diaresis
#define WHU_S           &kp S
#define WHU_BSPC        &kp BSPC
#define WHU_SPACE       &kp SPACE

#define WHU_OS_U_ACUTE              &whu_os_u_acute
#define WHU_OS_Z                    &whu_os_z
#define WHU_OS_L                    &whu_os_l
#define WHU_OS_D                    &whu_os_d
#define WHU_OS_P                    &whu_os_p
#define WHU_OS_V                    &whu_os_v
#define WHU_OS_J(BASE)              &whu_os_j BASE
#define WHU_OS_K(BASE)              &whu_os_k BASE
#define WHU_OS_O(BASE)              &whu_os_o BASE
#define WHU_OS_U(BASE)              &whu_os_u BASE
#define WHU_OS_DOT(BASE)            &whu_os_dot BASE
#define WHU_OS_I_ACUTE(BASE)        &whu_os_i_acute BASE
#define WHU_OS_O_DACUTE             &whu_os_o_dacute
#define WHU_OS_N                    &whu_os_n
#define WHU_OS_R                    &whu_os_r
#define WHU_OS_T                    &whu_os_t
#define WHU_OS_C                    &whu_os_c
#define WHU_OS_B                    &whu_os_b
#define WHU_OS_Y(BASE)              &whu_os_y BASE
#define WHU_OS_H(BASE)              &whu_os_h BASE
#define WHU_OS_A(BASE)              &whu_os_a BASE
#define WHU_OS_E(BASE)              &whu_os_e BASE
#define WHU_OS_I(BASE)              &whu_os_i BASE
#define WHU_OS_O_DIARESIS(BASE)     &whu_os_o_diaresis BASE
#define WHU_OS_U_DACUTE             &whu_os_u_dacute
#define WHU_OS_X                    &whu_os_x
#define WHU_OS_Q                    &whu_os_q
#define WHU_OS_M                    &whu_os_m
#define WHU_OS_G                    &whu_os_g
#define WHU_OS_W                    &whu_os_w
#define WHU_OS_O_ACUTE(BASE)        &whu_os_o_acute BASE
#define WHU_OS_F(BASE)              &whu_os_f BASE
#define WHU_OS_E_ACUTE(BASE)        &whu_os_e_acute BASE
#define WHU_OS_A_ACUTE(BASE)        &whu_os_a_acute BASE
#define WHU_OS_COMMA(BASE)          &whu_os_comma BASE
#define WHU_OS_U_DIARESIS(BASE)     &whu_os_u_diaresis BASE
#define WHU_OS_S                    &whu_os_s
#define WHU_OS_BSPC                 &whu_os_bspc
#define WHU_OS_SPACE                &whu_os_space

#define WHU_OS_ESC(BASE)      &whu_os_esc BASE
#define WHU_OS_TAB(BASE)      &whu_os_tab BASE
#define WHU_OS_APP(BASE)      &whu_os_app BASE
#define WHU_OS_RET(BASE)      &whu_os_ret BASE
#define WHU_OS_DEL(BASE)      &whu_os_del BASE

#define WHU_OS_LG    &skq LGUI
#define WHU_OS_LA    &skq LALT
#define WHU_OS_LC    &skq LCTRL
#define WHU_OS_LS    &skq LSHFT

#define WHU_AGAIN  &whu_again
#define WHU_PASTE  &whu_paste
#define WHU_COPY   &whu_copy
#define WHU_CUT    &whu_cut
#define WHU_UNDO   &whu_undo
