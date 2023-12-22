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

/  {
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
};
