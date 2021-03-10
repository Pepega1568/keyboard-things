#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
#define _THUMB_ALT 4

#define KC______ KC_TRNS
#define KC_XXXXX KC_NO
#define KC_LOWER LOWER
#define KC_RAISE RAISE
#define KC_RST   RESET
#define KC_LRST  RGBRST
#define KC_LTOG  RGB_TOG
#define KC_LHUI  RGB_HUI
#define KC_LHUD  RGB_HUD
#define KC_LSAI  RGB_SAI
#define KC_LSAD  RGB_SAD
#define KC_LVAI  RGB_VAI
#define KC_LVAD  RGB_VAD
#define KC_LMOD  RGB_MOD
#define KC_CTLTB CTL_T(KC_TAB)
#define KC_GUIEI GUI_T(KC_LANG2)
#define KC_ALTKN ALT_T(KC_LANG1)

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define TG_THMB TG(_THUMB_ALT)

#define RBR_RGU MT(MOD_RGUI, KC_RBRC)
#define F12_RGU MT(MOD_RGUI, KC_F12)
#define PLS_LCT MT(MOD_LCTL, KC_PPLS)
#define EQL_LCT MT(MOD_LCTL, KC_PEQL)
#define APP_LCT MT(MOD_LCTL, KC_APP)
#define EQL_RCT MT(MOD_RCTL, KC_PEQL)
#define QUO_RCT MT(MOD_RCTL, KC_QUOT)
#define APP_RCT MT(MOD_RCTL, KC_APP)
#define MIN_RCT MT(MOD_RCTL, KC_MINS)
#define EQL_LAL MT(MOD_LALT, KC_EQL)
#define BSL_RAL MT(MOD_RALT, KC_BSLS)
#define NBS_LCT MT(MOD_LCTL, KC_NUBS)
#define BSH_LAL MT(MOD_LALT, KC_BSLS)
#define APP_RAL MT(MOD_RALT, KC_APP)
#define BSP_RSH MT(MOD_RSFT, KC_BSPC)
#define SPC_LSH MT(MOD_LSFT, KC_SPC)

#define DEL_RSE LT(_RAISE, KC_DEL)
#define TAB_RSE LT(_RAISE, KC_TAB)
#define ENT_LWR LT(_LOWER, KC_ENT)
#define ESC_LWR LT(_LOWER, KC_ESC)

#define SH_TG KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x4(
      KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_LBRC,
	    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, RCTL_T(KC_QUOT),
	    KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, BSL_RAL,
	    KC_MENU, KC_LGUI, KC_VOLU, KC_VOLD, KC_MUTE,                         KC_BRIU, KC_BRID,  KC_MENU, KC_RALT, RGUI_T(KC_RBRC),
		  SPC_LSH, ENT_LWR, TAB_RSE,          KC_INT4, KC_INT5,       KC_INT3, KC_INT2,           DEL_RSE, ESC_LWR, BSP_RSH
    ),

    [_LOWER] = LAYOUT_6x4(
      KC_UNDS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
      PLS_LCT, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, MIN_RCT,
      EQL_LAL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    F12_RGU,
      _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______,
      _______, _______, _______,          _______, _______,       _______, _______,          _______, _______, _______
    ),

    [_RAISE] = LAYOUT_6x4(
     KC_NLCK, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,       KC_VOLU, KC_HOME, KC_PSCR, KC_PGUP, KC_SLCK, KC_CAPS,
     EQL_LCT, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,       KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_INS,  APP_RCT,
     _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,       KC_VOLD, KC_END,  KC_DOWN, KC_PGDN, KC_PAUS, _______,
     _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______,
     _______, _______, _______,          _______, _______,       _______, _______,          _______, _______, _______
    ),

    [_ADJUST] = LAYOUT_6x4(
     RESET,   _______, KC_ASUP, KC_ASTG, KC_ASDN, _______,       _______, KC_ASDN, KC_ASTG, KC_ASUP, _______, RESET,
     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, TG_THMB,       TG_THMB, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______,
     SH_TG,   _______, _______,          _______, _______,       _______, _______,          _______, _______, SH_TG
    ),

    [_THUMB_ALT] = LAYOUT_6x4(
     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______,
     BSP_RSH, _______, _______,          ESC_LWR, DEL_RSE,       TAB_RSE, ENT_LWR,          _______, _______, SPC_LSH
    ),
};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}