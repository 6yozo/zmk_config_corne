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
#include "bunya-dtm-hu.h"

#define MOD_LEFT(PREFIX, BASE, TO) \
 &##PREFIX##_os_lga TO  &##PREFIX##_os_lacs TO  &##PREFIX##_os_lgcs TO  &##PREFIX##_os_lgas TO  &##PREFIX##_os_lgac TO  &##PREFIX##_os_las TO          &##PREFIX##_os_amps TO   &##PREFIX##_os_semi TO   &##PREFIX##_os_lbkt TO  &##PREFIX##_os_rbkt TO  &##PREFIX##_os_prcnt TO  &to TO \
 &##PREFIX##_os_lgs TO  &##PREFIX##_os_lg TO    &##PREFIX##_os_la TO    &##PREFIX##_os_lc TO    &##PREFIX##_os_ls TO    &##PREFIX##_os_lcs TO          &##PREFIX##_os_pipe TO   &##PREFIX##_os_colon TO  &##PREFIX##_os_lpar TO  &##PREFIX##_os_rpar TO  &##PREFIX##_os_qmark TO  &to TO \
 &##PREFIX##_os_lgc TO  &to BASE##_SYM          &to BASE##_NUM          &to BASE##_NAV          &to BASE                &##PREFIX##_os_lac TO          &##PREFIX##_os_tilde TO  &##PREFIX##_os_dllr TO   &##PREFIX##_os_lbrc TO  &##PREFIX##_os_rbrc TO  &##PREFIX##_os_at TO     &to TO \
                                                                        &to TO                  &to TO                  &to SYSTEM                     &##PREFIX##_os_del TO    &##PREFIX##_os_ret TO    &##PREFIX##_os_caps TO

#define MOD_RIGHT(PREFIX, BASE, TO) \
 &to TO                   &##PREFIX##_os_sqt TO              &##PREFIX##_os_lt TO     &##PREFIX##_os_gt TO    &##PREFIX##_os_dqt TO    &##PREFIX##_os_dot TO            &##PREFIX##_os_las TO  &##PREFIX##_os_lgac TO  &##PREFIX##_os_lgas TO  &##PREFIX##_os_lgcs TO  &##PREFIX##_os_lacs TO  &##PREFIX##_os_lga TO \
 &##PREFIX##_os_grave TO  &##PREFIX##_os_excl TO             &##PREFIX##_os_minus TO  &##PREFIX##_os_plus TO  &##PREFIX##_os_equal TO  &##PREFIX##_os_hash TO           &##PREFIX##_os_lcs TO  &##PREFIX##_os_ls TO    &##PREFIX##_os_lc TO    &##PREFIX##_os_la TO    &##PREFIX##_os_lg TO    &##PREFIX##_os_lgs TO \
 &to TO                   &##PREFIX##_os_carethulc_caret TO  &##PREFIX##_os_fslh TO   &##PREFIX##_os_star TO  &##PREFIX##_os_bslh TO   &##PREFIX##_os_under TO          &##PREFIX##_os_lac TO  &to BASE                &to BASE##_NAV          &to BASE##_NUM          &to BASE##_SYM          &##PREFIX##_os_lgc TO \
                                                                                      &##PREFIX##_os_esc TO   &##PREFIX##_os_tab TO    &to SYSTEM                       &to TO                 &to TO                  &to TO
