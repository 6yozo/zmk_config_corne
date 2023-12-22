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

    whu_os_app: whu_os_app {
            label = "WHU_os_app";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp K_APP>
                ;
        };

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

        WHU_os_amps: WHU_os_amps {
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

        WHU_os_lbkt: WHU_os_lbkt {
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

        WHU_os_rbkt: WHU_os_rbkt {
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

        WHU_os_prcnt: WHU_os_prcnt {
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

        WHU_os_pipe: WHU_os_pipe {
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

        WHU_os_colon: WHU_os_colon {
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

        WHU_os_lpar: WHU_os_lpar {
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

        WHU_os_rpar: WHU_os_rpar {
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

        WHU_os_qmark: WHU_os_qmark {
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

        WHU_os_tilde: WHU_os_tilde {
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

        WHU_os_dllr: WHU_os_dllr {
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

        WHU_os_lbrc: WHU_os_lbrc {
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

        WHU_os_rbrc: WHU_os_rbrc {
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

        WHU_os_at: WHU_os_at {
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

        WHU_os_grave: WHU_os_grave {
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

        WHU_os_lt: WHU_os_lt {
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

        WHU_os_gt: WHU_os_gt {
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

        WHU_os_dqt: WHU_os_dqt {
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
            label = "whu_os_dot";
                compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp DOT>
                ;
        };

        WHU_os_excl: WHU_os_excl {
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

        WHU_os_minus: WHU_os_minus {
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

        WHU_os_plus: WHU_os_plus {
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

        WHU_os_equal: WHU_os_equal {
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

        WHU_os_hash: WHU_os_hash {
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

        WHU_os_carethulc_caret: WHU_os_carethulc_caret {
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

        WHU_os_fslh: WHU_os_fslh {
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

        WHU_os_star: WHU_os_star {
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

    WHU_os_bslh: WHU_os_bslh {
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

        WHU_os_under: WHU_os_under {
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

        WHU_os_semi: WHU_os_semi {
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

        WHU_os_sqt: WHU_os_sqt {
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

        WHU_os_caps: WHU_os_caps {
            label = "WHU_OS_CAPS";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <13>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp CAPS>
                ;
        };

    };
};
