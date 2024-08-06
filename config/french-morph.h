ZMK_MOD_MORPH(dash_question,
    bindings = <&kp FR_MINS>, <&kp FR_QUES>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_MOD_MORPH(dot_colon,
    bindings = <&kp FR_DOT>, <&kp FR_COLN>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_MOD_MORPH(comma_semicolon,
    bindings = <&kp FR_COMM>, <&kp FR_SCLN>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_MOD_MORPH(FR_E_ACU,
    bindings = <&FR_E_ACU_LOW>, <&FR_E_ACU_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_E_GRV,
    bindings = <&FR_E_GRV_LOW>, <&FR_E_GRV_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_E_CIR,
    bindings = <&FR_E_CIR_LOW>, <&FR_E_CIR_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_A_CIR,
    bindings = <&FR_A_CIR_LOW>, <&FR_A_CIR_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_A_GRV,
    bindings = <&FR_A_GRV_LOW>, <&FR_A_GRV_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_U_CIR,
    bindings = <&FR_U_CIR_LOW>, <&FR_U_CIR_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_U_GRV,
    bindings = <&FR_U_GRV_LOW>, <&FR_U_GRV_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_I_CIR,
    bindings = <&FR_I_CIR_LOW>, <&FR_I_CIR_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)
ZMK_MOD_MORPH(FR_O_CIR,
    bindings = <&FR_O_CIR_LOW>, <&FR_O_CIR_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_MOD_MORPH(FR_C_CED,
    bindings = <&FR_C_CED_LOW>, <&FR_C_CED_UP>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)


ZMK_MOD_MORPH(dead_key,
    bindings = <&to 1>, <&kp FR_EXLM>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)

ZMK_MOD_MORPH(fr_one,
//    bindings = <&kp FR_1>, <&kp FR_EURO>;
    bindings = <&to 1>, <&kp RA(FR_E)>;
    mods = <(MOD_LSFT|MOD_RSFT)>;
)

