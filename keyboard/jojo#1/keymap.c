#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
KEYMAP( 
    GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    BSPC, \
    TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    DEL,  \
    ESC,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, \
    LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, ENT,  \
    LCTL, FN0,  LGUI, LALT, FN1,    SPC,SPC,    FN2,  LEFT, DOWN, UP,   RGHT ),

  /* 1: FN0 FN */
  KEYMAP( 
    TRNS, MUTE,  VOLU,  VOLD,  MPRV,  MPLY,  MNXT,  TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR,  SLCK,  PAUS,  TRNS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS, TRNS,     TRNS, TRNS,    TRNS, TRNS, HOME,  PGDN,  PGUP,  END ),

  /* 2: FN1 LOWER */
  KEYMAP( 
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, SLSH, PAST, PMNS, BSPC, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 7,    8,    9,    PPLS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 4,    5,    6,    PPLS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 1,    2,    3,    PENT, \
    TRNS, TRNS, TRNS, TRNS,     TRNS,TRNS,    TRNS, TRNS, 0,    0,    DOT,  PENT ),

  /* 3: FN1 RAISE */
  KEYMAP( 
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, SLSH,  FN3,   LBRC,  FN5,   FN6,   RBRC,  FN4,   BSLS,  FN7,   TRNS, \
    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
    TRNS, TRNS, TRNS, TRNS,     TRNS,TRNS,    TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),

};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_MOMENTARY(3),
    [3] = ACTION_MODS_KEY(MOD_LSFT, KC_9), // (
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_0), // )
    [5] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), // {
    [6] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC), // }
    [7] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS), // |
};