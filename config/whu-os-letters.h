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

    WHU_os_u_acute: WHU_os_u_acute {
            label = "WHU_os_u_acute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp RBKT>
                ;
        };

    WHU_os_y: WHU_os_y {
            label = "WHU_os_y";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp Z>
                ;
        };

    WHU_os_l: WHU_os_l {
            label = "WHU_os_l";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp L>
                ;
        };

    WHU_os_d: WHU_os_d {
            label = "WHU_os_d";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp D>
                ;
        };

    WHU_os_p: WHU_os_p {
            label = "WHU_os_p";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp P>
                ;
        };

    WHU_os_v: WHU_os_v {
            label = "WHU_os_v";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp V>
                ;
        };

    WHU_os_j: WHU_os_j {
            label = "WHU_os_j";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp J>
                ;
        };

    WHU_os_k: WHU_os_k {
            label = "WHU_os_k";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp K>
                ;
        };

    WHU_os_o: WHU_os_o {
            label = "WHU_os_o";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp O>
                ;
        };

    WHU_os_u: WHU_os_u {
            label = "WHU_os_u";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp U>
                ;
        };

    WHU_os_dot: WHU_os_dot {
            label = "WHU_os_dot";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp DOT>
                ;
        };

    WHU_os_i_acute: WHU_os_i_acute {
            label = "WHU_os_i_acute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp NUBS>
                ;
        };

    WHU_os_o_dacute: WHU_os_o_dacute {
            label = "WHU_os_o_dacute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp LBKT>
                ;
        };

    WHU_os_n: WHU_os_n {
            label = "WHU_os_n";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp N>
                ;
        };

    WHU_os_r: WHU_os_r {
            label = "WHU_os_r";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp R>
                ;
        };

    WHU_os_t: WHU_os_t {
            label = "WHU_os_t";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp T>
                ;
        };

    WHU_os_c: WHU_os_c {
            label = "WHU_os_c";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp C>
                ;
        };

    WHU_os_b: WHU_os_b {
            label = "WHU_os_b";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp B>
                ;
        };

    WHU_os_z: WHU_os_z {
            label = "WHU_os_z";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp Y>
                ;
        };

    WHU_os_h: WHU_os_h {
            label = "WHU_os_h";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp H>
                ;
        };

    WHU_os_a: WHU_os_a {
            label = "WHU_os_a";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp A>
                ;
        };

    WHU_os_e: WHU_os_e {
            label = "WHU_os_e";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp E>
                ;
        };

    WHU_os_i: WHU_os_i {
            label = "WHU_os_i";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp I>
                ;
        };

    WHU_os_o_diaresis: WHU_os_o_diaresis {
            label = "WHU_os_o_diaresis";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp N0>
                ;
        };

    WHU_os_u_dacute: WHU_os_u_dacute {
            label = "WHU_os_u_dacute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp BSLH>
                ;
        };

    WHU_os_x: WHU_os_x {
            label = "WHU_os_x";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp X>
                ;
        };

    WHU_os_q: WHU_os_q {
            label = "WHU_os_q";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp Q>
                ;
        };

    WHU_os_m: WHU_os_m {
            label = "WHU_os_m";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp M>
                ;
        };

    WHU_os_g: WHU_os_g {
            label = "WHU_os_g";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp G>
                ;
        };

    WHU_os_w: WHU_os_w {
            label = "WHU_os_w";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp W>
                ;
        };

    WHU_os_o_acute: WHU_os_o_acute {
            label = "WHU_os_o_acute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp EQUAL>
                ;
        };

    WHU_os_f: WHU_os_f {
            label = "WHU_os_f";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp F>
                ;
        };

    WHU_os_e_acute: WHU_os_e_acute {
            label = "WHU_os_e_acute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp SEMI>
                ;
        };

    WHU_os_a_acute: WHU_os_a_acute {
            label = "WHU_os_a_acute";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp SQT>
                ;
        };

    WHU_os_comma: WHU_os_comma {
            label = "WHU_os_comma";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp COMMA>
                ;
        };

    WHU_os_u_diaresis: WHU_os_u_diaresis {
            label = "WHU_os_u_diaresis";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp MINUS>
                ;
        };

    WHU_os_s: WHU_os_s {
            label = "WHU_os_s";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp S>
                ;
        };

    WHU_os_bspc: WHU_os_bspc {
            label = "WHU_os_bspc";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp BSPC >
                ;
        };

    WHU_os_space: WHU_os_space {
            label = "WHU_os_space";
            compatible = "zmk,behavior-macro-one-param";
#binding-cells = <1>;
            wait-ms = <1>;
            tap-ms = <13>;
            bindings
                = <&macro_param_1to1>, <&to MACRO_PLACEHOLDER>
                , <&macro_tap     &kp SPACE>
                ;
        };
    };
  };
