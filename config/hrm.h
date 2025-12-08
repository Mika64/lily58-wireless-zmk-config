#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

#include "zmk-helpers/helper.h"

ZMK_HOLD_TAP(hml,
    flavor = "tap-preferred";
    tapping-term-ms = <280>;
    require-prior-idle-ms = <150>;
    hold-trigger-key-positions = <KEYS_R THUMBS>;
    hold-trigger-on-release;
    bindings = <&kp>, <&kp>;
)

