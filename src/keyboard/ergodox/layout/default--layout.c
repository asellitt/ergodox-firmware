/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  KEY_GraveAccent_Tilde, KEY_1_Exclamation, KEY_2_At,      KEY_3_Pound,    KEY_4_Dollar, KEY_5_Percent, 0,
  KEY_Tab,               KEY_q_Q,           KEY_w_W,       KEY_e_E,        KEY_r_R,      KEY_t_T,       1,
  KEY_Escape,            KEY_a_A,           KEY_s_S,       KEY_d_D,        KEY_f_F,      KEY_g_G,
  KEY_LeftShift,         KEY_z_Z,           KEY_x_X,       KEY_c_C,        KEY_v_V,      KEY_b_B,       2,
  0x2F,                  0x30,              KEY_LeftArrow, KEY_RightArrow, KEY_LeftGUI,
                                                                             KEY_LeftControl, KEY_LeftAlt,
                                                                        0,                 0,    KEY_Home,
                                                      KEY_DeleteBackspace, KEY_DeleteForward,     KEY_End,
  // right hand
  KEY_Dash_Underscore,         KEY_6_Caret,   KEY_7_Ampersand, KEY_8_Asterisk,     KEY_9_LeftParenthesis,  KEY_0_RightParenthesis, KEY_Equal_Plus,
  KEY_LeftBracket_LeftBrace,   KEY_y_Y,       KEY_u_U,         KEY_i_I,            KEY_o_O,                KEY_p_P,                KEY_RightBracket_RightBrace,
                               KEY_h_H,       KEY_j_J,         KEY_k_K,            KEY_l_L,                KEY_Semicolon_Colon,    KEY_Backslash_Pipe,
  KEY_SingleQuote_DoubleQuote, KEY_n_N,       KEY_m_M,         KEY_Comma_LessThan, KEY_Period_GreaterThan, KEY_Slash_Question,     KEY_RightShift,
                                              KEY_RightGUI,    KEY_UpArrow,        KEY_DownArrow,          0x33,                   0x37,
  KEY_LeftAlt,  KEY_LeftControl,
  KEY_PageUp,   0,               0,
  KEY_PageDown, KEY_ReturnEnter, KEY_Spacebar
),

// LAYER 1
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,              KEY_F1,  KEY_F2,  KEY_F3,  KEY_F4,  KEY_F5,  0,
  KEY_Mute,       KEY_q_Q, KEY_q_Q, KEY_q_Q, KEY_q_Q, KEY_q_Q, 0,
  KEY_VolumeUp,   KEY_q_Q, KEY_q_Q, KEY_q_Q, KEY_q_Q, KEY_q_Q,
  KEY_VolumeDown, KEY_q_Q, KEY_q_Q, KEY_q_Q, KEY_q_Q, KEY_q_Q, 0,
  KEY_q_Q,        KEY_q_Q, 0,       0,       0,
                                                            0, 0,
                                                         0, 0, 0,
                                                         0, 0, 0,
  // right hand
  KEYPAD_NumLock_Clear, KEY_F6,             KEY_F7,             KEY_F8,              KEY_F9,  KEY_F10, KEYPAD_Slash,
  KEYPAD_Period_Delete, KEYPAD_7_Home,      KEYPAD_8_UpArrow,   KEYPAD_9_PageUp,     KEY_q_Q, KEY_q_Q, KEYPAD_Asterisk,
                        KEYPAD_4_LeftArrow, KEYPAD_5,           KEYPAD_6_RightArrow, KEY_q_Q, KEY_q_Q, KEYPAD_Plus,
  KEYPAD_0_Insert,      KEYPAD_1_End,       KEYPAD_2_DownArrow, KEYPAD_3_PageDown,   KEY_q_Q, KEY_q_Q, KEYPAD_Minus,
                                            0,                  0,                   0,       KEY_q_Q, KEY_q_Q,
  0, 0,
  0, 0, 0,
  0, 0, 0
),

// LAYER 2
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  3,       KEY_F11, KEY_F12, KEY_F13, KEY_F14, KEY_F15, 0,
  4,       KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, 0,
  5,       KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A,
  6,       KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, 0,
  KEY_a_A, KEY_a_A, 0,       0,       0,
                                                            0, 0,
                                                         0, 0, 0,
                                                         0, 0, 0,
  // right hand
  KEY_a_A,      KEY_F16, KEY_F17, KEY_F18, KEY_F19, KEY_F20, KEY_F21,
  KEY_a_A,      KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_F22,
                KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_F23,
  KEY_a_A,      KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_a_A, KEY_F24,
                         0,       0,       0,       KEY_a_A, KEY_a_A,
  0, 0,
  0, 0, 0,
  0, 0, 0
),

// LAYER 3
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  KEY_GraveAccent_Tilde, KEY_1_Exclamation,           KEY_2_At,           KEY_3_Pound,            KEY_4_Dollar, KEY_5_Percent, 0,
  KEY_Tab,               KEY_SingleQuote_DoubleQuote, KEY_Comma_LessThan, KEY_Period_GreaterThan, KEY_p_P,      KEY_y_Y,       0,
  KEY_Escape,            KEY_a_A,                     KEY_o_O,            KEY_e_E,                KEY_u_U,      KEY_i_I,
  KEY_LeftShift,         KEY_Semicolon_Colon,         KEY_q_Q,            KEY_j_J,                KEY_k_K,      KEY_x_X,       0,
  0x2F,                  0x30,                        0,                  0,                      0,
                                                                                                                            0, 0,
                                                                                                                         0, 0, 0,
                                                                                                                         0, 0, 0,
  // right hand
  KEY_LeftBracket_LeftBrace, KEY_6_Caret, KEY_7_Ampersand, KEY_8_Asterisk, KEY_9_LeftParenthesis, KEY_0_RightParenthesis, KEY_RightBracket_RightBrace,
  KEY_Slash_Question,        KEY_f_F,     KEY_g_G,         KEY_c_C,        KEY_r_R,               KEY_l_L,                KEY_Equal_Plus,
                             KEY_d_D,     KEY_h_H,         KEY_t_T,        KEY_n_N,               KEY_s_S,                KEY_Dash_Underscore,
  KEY_Backslash_Pipe,        KEY_b_B,     KEY_m_M,         KEY_w_W,        KEY_v_V,               KEY_z_Z,                KEY_LeftShift,
                                          0,               0,              0,                     0x33,                   0x37,
  0, 0,
  0, 0, 0,
  0, 0, 0
),
// LAYER 4
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, 0,
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, 0,
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z,
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, 0,
  KEY_z_Z, KEY_z_Z, 0,       0,       0,
                                                     0, 0,
                                                  0, 0, 0,
                                                  0, 0, 0,
  // right hand
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z,
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z,
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z,
  KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z, KEY_z_Z,
                    0,       0,       0,       KEY_z_Z, KEY_z_Z,
  0, 0,
  0, 0, 0,
  0, 0, 0
),
// LAYER 5
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, 0,
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, 0,
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W,
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, 0,
  KEY_w_W, KEY_w_W, 0,       0,       0,
                                                     0, 0,
                                                  0, 0, 0,
                                                  0, 0, 0,
  // right hand
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W,
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W,
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W,
  KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W, KEY_w_W,
                    0,       0,       0,       KEY_w_W, KEY_w_W,
  0, 0,
  0, 0, 0,
  0, 0, 0
),
// LAYER 6
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, 0,
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, 0,
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S,
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, 0,
  KEY_s_S, KEY_s_S, 0,       0,       0,
                                                     0, 0,
                                                  0, 0, 0,
                                                  0, 0, 0,
  // right hand
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S,
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S,
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S,
  KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S, KEY_s_S,
                    0,       0,       0,       KEY_s_S, KEY_s_S,
  0, 0,
  0, 0, 0,
  0, 0, 0

),
// LAYER 7
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0,
  0, 0, 0,
  0, 0, 0,
  // right hand
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0,
  0, 0, 0,
  0, 0, 0
),
// LAYER 8
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0,
  0, 0, 0,
  0, 0, 0,
  // right hand
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0,
  0, 0, 0,
  0, 0, 0
),
// LAYER 9
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0,
  0, 0, 0,
  0, 0, 0,
  // right hand
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0,
  0, 0, 0,
  0, 0, 0
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpop,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush2,
  sshprre, sshprre, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, sshprre, sshprre,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  dbtldr, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, ktrans, ktrans, ktrans,
  ktrans, ktrans,
  NULL, NULL, ktrans,
  ktrans, ktrans, ktrans,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  ktrans, ktrans, ktrans, kprrel, kprrel,
  ktrans, ktrans,
  ktrans, NULL, NULL,
  ktrans, ktrans, ktrans
),
// LAYER 2
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  lpush3, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  lpush4, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  lpush5, kprrel, kprrel, kprrel, kprrel, kprrel,
  lpush6, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, ktrans, ktrans, ktrans,
  ktrans, ktrans,
  NULL, NULL, ktrans,
  ktrans, ktrans, ktrans,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  ktrans, ktrans, ktrans, kprrel, kprrel,
  ktrans, ktrans,
  ktrans, NULL, NULL,
  ktrans, ktrans, ktrans
),
// LAYER 3
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  sshprre, sshprre, ktrans, ktrans, ktrans,
  ktrans, ktrans,
  NULL, NULL, ktrans,
  ktrans, ktrans, ktrans,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  ktrans, ktrans, ktrans, sshprre, sshprre,
  ktrans, ktrans,
  ktrans, NULL, NULL,
  ktrans, ktrans, ktrans
),
// LAYER 4
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, ktrans, ktrans, ktrans,
  ktrans, ktrans,
  NULL, NULL, ktrans,
  ktrans, ktrans, ktrans,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  ktrans, ktrans, ktrans, kprrel, kprrel,
  ktrans, ktrans,
  ktrans, NULL, NULL,
  ktrans, ktrans, ktrans
),
// LAYER 5
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, ktrans, ktrans, ktrans,
  ktrans, ktrans,
  NULL, NULL, ktrans,
  ktrans, ktrans, ktrans,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  ktrans, ktrans, ktrans, kprrel, kprrel,
  ktrans, ktrans,
  ktrans, NULL, NULL,
  ktrans, ktrans, ktrans
),
// LAYER 6
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, ktrans, ktrans, ktrans,
  ktrans, ktrans,
  NULL, NULL, ktrans,
  ktrans, ktrans, ktrans,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  ktrans, ktrans, ktrans, kprrel, kprrel,
  ktrans, ktrans,
  ktrans, NULL, NULL,
  ktrans, ktrans, ktrans
),
// LAYER 7
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL,
  // right hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL
),
// LAYER 8
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL,
  // right hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL
),
// LAYER 9
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL,
  // right hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  sshprre, sshprre, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, sshprre, sshprre,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 2
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel,
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 3
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  sshprre, sshprre, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, sshprre, sshprre,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 4
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 5
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 6
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  NULL, NULL, kprrel,
  kprrel, kprrel, kprrel,
  // right hand
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel, kprrel, kprrel, kprrel,
  kprrel, kprrel,
  kprrel, NULL, NULL,
  kprrel, kprrel, kprrel
),
// LAYER 7
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL,
  // right hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL
),
// LAYER 8
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL,
  // right hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL
),
// LAYER 9
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL,
  // right hand
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL, NULL, NULL,
  NULL, NULL, NULL, NULL, NULL,
  NULL, NULL,
  NULL, NULL, NULL,
  NULL, NULL, NULL
),
};
// ----------------------------------------------------------------------------
