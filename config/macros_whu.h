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
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/rgb.h>
#include <dt-bindings/zmk/outputs.h>
#include <dt-bindings/zmk/ext_power.h>

#include "layers.h"

/ {
    behaviors {
    skq: sticky_key_quick_release {
            compatible = "zmk,behavior-sticky-key";
            label = "STICKY_KEY_QUICK_RELEASE";
#binding-cells = <1>;
            bindings = <&kp>;
            release-after-ms = <1000>;
            quick-release;
            ignore-modifiers;
        };
    };

    macros {
 // wait-ms and tap-ms value
 // ---
 //
 // Executing an accented macro should not take longer than tapping a dedicated
 // key at maximum speed(300 WPM).
 //
 // 38 WPM -> 188 CPM, so 300 WPM -> (* 188 (/ 300 38)) = 1316 CPM =
 // (/ 1316 60) CPS = 21 CPS
 //
 // Hitting keys close to 50 ms / keypress is humanly possible.

        ZMK_MACRO(m_again_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp Y>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_paste_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp V>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_copy_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp C>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_cut_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp X>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_undo,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LCTRL>
                , <&macro_tap     &kp Y>
                , <&macro_release &kp LCTRL>
                ;
        )

        ZMK_MACRO(m_e_acute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SEMI>
                ;
        )

        ZMK_MACRO(m_e_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SEMI>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_acute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp EQUAL>
                ;
        )

        ZMK_MACRO(m_o_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp EQUAL>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_i_acute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp NUBS>
                ;
        )

        ZMK_MACRO(m_i_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp NUBS>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_acute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp RBKT>
                ;
        )

        ZMK_MACRO(m_u_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp RBKT>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_a_acute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SQT>
                ;
        )

        ZMK_MACRO(m_a_acute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp SQT>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_dacute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp LBKT>
                ;
        )

        ZMK_MACRO(m_o_dacute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp LBKT>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_dacute,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp BSLH>
                ;
        )

        ZMK_MACRO(m_u_dacute_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp BSLH>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_o_diaresis,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp N0>
                ;
        )

        ZMK_MACRO(m_o_diaresis_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp N0>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_u_diaresis,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp MINUS>
                ;
        )

        ZMK_MACRO(m_u_diaresis_to_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp MINUS>
                , <&macro_tap     &to WHU_BASE>
                ;
        )

        ZMK_MACRO(m_par_dir,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap  &kp DOT &kp DOT &kp FSLH>
                ;
        )

        ZMK_MACRO(m_scope,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap  &kp COLON &kp COLON>
                ;
        )

        ZMK_MACRO(m_lpar_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N8>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_rpar_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N9>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_star_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp FSLH>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_excl_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N4>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_semi_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp COMMA>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_colon_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_minus_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp FSLH>
                ;
        )

        ZMK_MACRO(m_under_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp QMARK>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_grave_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_caret_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_carethulc_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp GRAVE>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp M>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_gt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_plus_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_equal_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_bslh_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp Q>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_hash_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp X>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_par_dir_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_tap     &kp DOT>
                , <&macro_tap     &kp DOT>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N6>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_amps_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp C>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_pipe_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp W>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_tilde_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_scope_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHIFT>
                , <&macro_tap     &kp DOT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp LSHIFT>
                ;
        )

        ZMK_MACRO(m_dllr_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp SEMI>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lbkt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp F>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_lbrc_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp B>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_rbkt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp G>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_rbrc_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp N>
                , <&macro_release &kp RALT>
                ;
        )

        ZMK_MACRO(m_prcnt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N5>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_fslh_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N6>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_qmark_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp COMMA>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_sqt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_dqt_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N2>
                , <&macro_release &kp LSHFT>
                ;
        )

        ZMK_MACRO(m_at_whu,
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_press   &kp RALT>
                , <&macro_tap     &kp V>
                , <&macro_release &kp RALT>
                ;
        )

        whu_os_esc: whu_os_esc {
            label = "WHU_OS_ESC";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp ESC>
                ;
        };

        whu_os_tab: whu_os_tab {
            label = "WHU_OS_TAB";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp TAB>
                ;
        };

        whu_os_ret: whu_os_ret {
            label = "WHU_OS_RET";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp RET>
                ;
        };

        whu_os_del: whu_os_del {
            label = "WHU_OS_DEL";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp DEL>
                ;
        };

        whu_os_amps: whu_os_amps {
            label = "WHU_OS_AMPS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp C>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_lbkt: whu_os_lbkt {
            label = "WHU_OS_LBKT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp F>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_rbkt: whu_os_rbkt {
            label = "WHU_OS_RBKT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp G>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_prcnt: whu_os_prcnt {
            label = "WHU_OS_PRCNT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N5>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_pipe: whu_os_pipe {
            label = "WHU_OS_PIPE";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp W>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_colon: whu_os_colon {
            label = "WHU_OS_COLON";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_lpar: whu_os_lpar {
            label = "WHU_OS_LPAR";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N8>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_rpar: whu_os_rpar {
            label = "WHU_OS_RPAR";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N9>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_qmark: whu_os_qmark {
            label = "WHU_OS_QMARK";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp COMMA>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_tilde: whu_os_tilde {
            label = "WHU_OS_TILDE";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_dllr: whu_os_dllr {
            label = "WHU_OS_DLLR";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp SEMI>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_lbrc: whu_os_lbrc {
            label = "WHU_OS_LBRC";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp B>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_rbrc: whu_os_rbrc {
            label = "WHU_OS_RBRC";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp N>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_at: whu_os_at {
            label = "WHU_OS_AT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp V>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_grave: whu_os_grave {
            label = "WHU_OS_GRAVE";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_lt: whu_os_lt {
            label = "WHU_OS_LT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp M>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_gt: whu_os_gt {
            label = "WHU_OS_GT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp DOT>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_dqt: whu_os_dqt {
            label = "WHU_OS_DQT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N2>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_dot: whu_os_dot {
            label = "WHU_OS_DOT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp DOT>
                ;
        };

        whu_os_excl: whu_os_excl {
            label = "WHU_OS_EXCL";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N4>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_minus: whu_os_minus {
            label = "WHU_OS_MINUS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp FSLH>
                ;
        };

        whu_os_plus: whu_os_plus {
            label = "WHU_OS_PLUS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N3>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_equal: whu_os_equal {
            label = "WHU_OS_EQUAL";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N7>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_hash: whu_os_hash {
            label = "WHU_OS_HASH";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp X>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_carethulc_caret: whu_os_carethulc_caret {
            label = "WHU_OS_CARETHULC_CARET";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp GRAVE>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_fslh: whu_os_fslh {
            label = "WHU_OS_FSLH";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N6>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_star: whu_os_star {
            label = "WHU_OS_STAR";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp FSLH>
                , <&macro_release &kp RALT>
                ;
        };

    whu_os_bslh: whu_os_bslh {
            label = "WHU_OS_BSLH";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp Q>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_under: whu_os_under {
            label = "WHU_OS_UNDER";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp FSLH>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_semi: whu_os_semi {
            label = "WHU_OS_SEMI";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp RALT>
                , <&macro_tap     &kp COMMA>
                , <&macro_release &kp RALT>
                ;
        };

        whu_os_sqt: whu_os_sqt {
            label = "WHU_OS_SQT";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_press   &kp LSHFT>
                , <&macro_tap     &kp N1>
                , <&macro_release &kp LSHFT>
                ;
        };

        whu_os_lg: whu_os_lg {
            label = "WHU_OS_LG";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LGUI>
                ;
        };

        whu_os_la: whu_os_la {
            label = "WHU_OS_LA";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LALT>
                ;
        };

        whu_os_lc: whu_os_lc {
            label = "WHU_OS_LC";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LCTRL>
                ;
        };

        whu_os_ls: whu_os_ls {
            label = "WHU_OS_LS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LSHFT>
                ;
        };

        whu_os_lacs: whu_os_lacs {
            label = "WHU_OS_LACS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LS(LA(LCTRL))>
                ;
        };

        whu_os_lgcs: whu_os_lgcs {
            label = "WHU_OS_LGCS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LG(LS(LCTRL))>
                ;
        };

        whu_os_lgas: whu_os_lgas {
            label = "WHU_OS_LGAS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LG(LS(LALT))>
                ;
        };

        whu_os_lgac: whu_os_lgac {
            label = "WHU_OS_LGAC";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LG(LA(LCTRL))>
                ;
        };

        whu_os_lcs: whu_os_lcs {
            label = "WHU_OS_LCS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LS(LCTRL)>
                ;
        };

        whu_os_lac: whu_os_lac {
            label = "WHU_OS_LAC";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LA(LCTRL)>
                ;
        };

        whu_os_las: whu_os_las {
            label = "WHU_OS_LAS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LA(LSHFT)>
                ;
        };

        whu_os_lgs: whu_os_lgs {
            label = "WHU_OS_LGS";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LG(LSHFT)>
                ;
        };

        whu_os_lga: whu_os_lga {
            label = "WHU_OS_LGA";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LG(LALT)>
                ;
        };

        whu_os_lgc: whu_os_lgc {
            label = "WHU_OS_LGC";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &skq LG(LCTRL)>
                ;
        };
    };
};
