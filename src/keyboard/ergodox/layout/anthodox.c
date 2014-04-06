/* ----------------------------------------------------------------------------
* ergoDOX layout : AnthoDOX
* -----------------------------------------------------------------------------
* Copyright (c) 2014 Anthony Sellitti <anthony.ergodox@asellitt.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/asellitt/ergodox-firmware>
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
#define  mprrel   &kbfun_mediakey_press_release
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
  KB_MATRIX_LAYER( // layout - layer 0: qwerty
    // unused
    0,
    // left hand
    _grave,    _1,        _2,      _3,      _4,    _5, 0,
    _tab,      _Q,        _W,      _E,      _R,    _T, 1,
    _esc,      _A,        _S,      _D,      _F,    _G,
    _shiftL,   _Z,        _X,      _C,      _V,    _B, 2,
    _bracketL, _bracketR, _arrowL, _arrowR, _guiL,
                                           _ctrlL, _altL,
                                        0,      0, _home,
                                      _bs,   _del,  _end,
    // right hand
    _dash,     _6, _7,    _8,      _9,      _0,         _equal,
    _bracketL, _Y, _U,    _I,      _O,      _P,         _bracketR,
               _H, _J,    _K,      _L,      _semicolon, _backslash,
    _quote,    _N, _M,    _comma,  _period, _slash,     _shiftR,
                   _guiR, _arrowU, _arrowD, _semicolon, _period,
    _altR,  _ctrlR,
    _pageU, 0,      0,
    _pageD, _enter, _space
  ),

  KB_MATRIX_LAYER( // layout - layer 1: function and numpad
    // unused
    0,
    // left hand
    0,        _F1,    _F2,  _F3,  _F4,  _F5,  0,
    _mute,    _Q,     _Q,   _Q,   _Q,   _Q,   0,
    _volumeU, _Q,     _Q,   _Q,   _Q,   _Q,
    _volumeD, _Q,     _Q,   _Q,   _Q,   _Q,   0,
    _skipP,   _skipN, 0,    0,    0,
                                         0, 0,
                                      0, 0, 0,
                                      0, 0, 0,
    // right hand
    _play,       _F6,   _F7,   _F8,   _F9, _F10,   _div_kp,
    _dec_del_kp, _7_kp, _8_kp, _9_kp, _Q,  _Q,     _mul_kp,
                 _4_kp, _5_kp, _6_kp, _Q,  _Q,     _add_kp,
    _0_kp,       _1_kp, _2_kp, _3_kp, _Q,  _Q,     _sub_kp,
                        0,     0,     0,   _wake, _sleep,
    0, 0,
    0, 0, 0,
    0, 0, 0
  ),

  KB_MATRIX_LAYER( // layout - layer 2: function keys
    // unused
    0,
    // left hand
    3,  _F11, _F12, _F13, _F14, _F15, 0,
    4,  _A,   _A,   _A,   _A,   _A,   0,
    5,  _A,   _A,   _A,   _A,   _A,
    6,  _A,   _A,   _A,   _A,   _A,   0,
    _A, _A,   0,    0,    0,
                                   0, 0,
                                0, 0, 0,
                                0, 0, 0,
    // right hand
    _A, _F16, _F17, _F18, _F19, _F20, _F21,
    _A, _A,   _A,   _A,   _A,   _A,   _F22,
        _A,   _A,   _A,   _A,   _A,   _F23,
    _A, _A,   _A,   _A,   _A,   _A,   _F24,
               0,   0,    0,    _A,   _A,
    0, 0,
    0, 0, 0,
    0, 0, 0
  ),

  KB_MATRIX_LAYER( // layout - layer 3: dvorak
    // unused
    0,
    // left hand
    _grave,    _1,         _2,     _3,      _4, _5, 0,
    _tab,      _quote,     _comma, _period, _P, _Y, 0,
    _esc,      _A,         _O,     _E,      _U, _I,
    _shiftL,   _semicolon, _Q,     _J,      _K, _X, 0,
    _bracketL, _bracketR,       0,      0,       0,
                                                 0, 0,
                                              0, 0, 0,
                                              0, 0, 0,
    // right hand
    _bracketL,  _6, _7, _8, _9, _0,         _bracketR,
    _slash,     _F, _G, _C, _R, _L,         _equal,
                _D, _H, _T, _N, _S,         _dash,
    _backslash, _B, _M, _W, _V, _Z,         _shiftR,
                    0,  0,  0,  _semicolon, _period,
    0, 0,
    0, 0, 0,
    0, 0, 0
  ),

  KB_MATRIX_LAYER( // layout - layer 4: unused
    // unused
    0,
    // left hand
    _Z, _Z, _Z, _Z, _Z, _Z, 0,
    _Z, _Z, _Z, _Z, _Z, _Z, 0,
    _Z, _Z, _Z, _Z, _Z, _Z,
    _Z, _Z, _Z, _Z, _Z, _Z, 0,
    _Z, _Z, 0,  0,  0,
                         0, 0,
                      0, 0, 0,
                      0, 0, 0,
    // right hand
    _Z, _Z, _Z, _Z, _Z, _Z, _Z,
    _Z, _Z, _Z, _Z, _Z, _Z, _Z,
    _Z, _Z, _Z, _Z, _Z, _Z,
    _Z, _Z, _Z, _Z, _Z, _Z, _Z,
             0, 0,  0,  _Z, _Z,
    0, 0,
    0, 0, 0,
    0, 0, 0
  ),

  KB_MATRIX_LAYER( // layout - layer 5: unused
    // unused
    0,
    // left hand
    _W, _W, _W, _W, _W, _W, 0,
    _W, _W, _W, _W, _W, _W, 0,
    _W, _W, _W, _W, _W, _W,
    _W, _W, _W, _W, _W, _W, 0,
    _W, _W, 0,  0,  0,
                         0, 0,
                      0, 0, 0,
                      0, 0, 0,
    // right hand
    _W, _W, _W, _W, _W, _W, _W,
    _W, _W, _W, _W, _W, _W, _W,
    _W, _W, _W, _W, _W, _W,
    _W, _W, _W, _W, _W, _W, _W,
             0, 0,  0,  _W, _W,
    0, 0,
    0, 0, 0,
    0, 0, 0
  ),

  KB_MATRIX_LAYER( // layout - layer 6: unused
    // unused
    0,
    // left hand
    _S, _S, _S, _S, _S, _S, 0,
    _S, _S, _S, _S, _S, _S, 0,
    _S, _S, _S, _S, _S, _S,
    _S, _S, _S, _S, _S, _S, 0,
    _S, _S, 0,  0,  0,
                         0, 0,
                      0, 0, 0,
                      0, 0, 0,
    // right hand
    _S, _S, _S, _S, _S, _S, _S,
    _S, _S, _S, _S, _S, _S, _S,
    _S, _S, _S, _S, _S, _S,
    _S, _S, _S, _S, _S, _S, _S,
             0, 0,  0,  _S, _S,
    0, 0,
    0, 0, 0,
    0, 0, 0

  ),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
  KB_MATRIX_LAYER( // press - layer 0: qwerty
    // unused
    NULL,
    // left hand
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, lpop,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, lpush1,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, lpush2,
    sshprre, sshprre, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, sshprre, sshprre,
    kprrel, kprrel,
    kprrel, NULL,   NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // press - layer 1: function and numpad
    // unused
    NULL,
    // left hand
    dbtldr, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    mprrel, mprrel, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL,   NULL,   ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    mprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, mprrel, mprrel,
    ktrans, ktrans,
    ktrans, NULL,   NULL,
    ktrans, ktrans, ktrans
  ),

  KB_MATRIX_LAYER( // press - layer 2: function keys
    // unused
    NULL,
    // left hand
    lpush3, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    lpush4, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    lpush5, kprrel, kprrel, kprrel, kprrel, kprrel,
    lpush6, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL,   NULL,   ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, kprrel, kprrel,
    ktrans, ktrans,
    ktrans, NULL,   NULL,
    ktrans, ktrans, ktrans
  ),

  KB_MATRIX_LAYER( // press - layer 3: dvorak
    // unused
    NULL,
    // left hand
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, ktrans,
    sshprre, sshprre, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL,   NULL,   ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    ktrans, ktrans, ktrans, sshprre, sshprre,
    ktrans, ktrans,
    ktrans, NULL,   NULL,
    ktrans, ktrans, ktrans
  ),

  KB_MATRIX_LAYER( // press - layer 4: unused
    // unused
    NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL,   NULL,   ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, kprrel, kprrel,
    ktrans, ktrans,
    ktrans, NULL,   NULL,
    ktrans, ktrans, ktrans
  ),

  KB_MATRIX_LAYER( // press - layer 5: unused
    // unused
    NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL,   NULL,   ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    ktrans, ktrans, ktrans, kprrel, kprrel,
    ktrans, ktrans,
    ktrans, NULL,   NULL,
    ktrans, ktrans, ktrans
  ),

  KB_MATRIX_LAYER( // press - layer 6: unused
    // unused
    NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, ktrans, ktrans, ktrans,
    ktrans, ktrans,
    NULL,   NULL,   ktrans,
    ktrans, ktrans, ktrans,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
    ktrans, ktrans, ktrans, kprrel, kprrel,
    ktrans, ktrans,
    ktrans, NULL,   NULL,
    ktrans, ktrans, ktrans
  ),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
  KB_MATRIX_LAYER( // release - layer 0: qwerty
    // unused
    NULL,
    // left hand
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, NULL,
    sshprre, sshprre, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, sshprre, sshprre,
    kprrel, kprrel,
    kprrel, NULL,  NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // release - layer 1: function and numpad
    // unused
    NULL,
    // left hand
    NULL,   kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    mprrel, mprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    mprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, mprrel, mprrel,
    kprrel, kprrel,
    kprrel, NULL,   NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // release - layer 2: function keys
    // unused
    NULL,
    // left hand
    NULL,   kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    NULL,   kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    NULL,   kprrel, kprrel, kprrel, kprrel, kprrel,
    NULL,   kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,  kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    kprrel, NULL,   NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // release - layer 3: dvorak
    // unused
    NULL,
    // left hand
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel,
    kprrel,  kprrel,  kprrel, kprrel, kprrel, kprrel, NULL,
    sshprre, sshprre, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel,
    kprrel, kprrel, kprrel, kprrel,  kprrel,  kprrel, kprrel,
    kprrel, kprrel, kprrel, sshprre, sshprre,
    kprrel, kprrel,
    kprrel, NULL,  NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // release - layer 4: unused
    // unused
    NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    kprrel, NULL,   NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // release - layer 5: unused
    // unused
    NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    kprrel, NULL,   NULL,
    kprrel, kprrel, kprrel
  ),

  KB_MATRIX_LAYER( // release - layer 6: unused
    // unused
    NULL,
    // left hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    NULL,   NULL,   kprrel,
    kprrel, kprrel, kprrel,
    // right hand
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel, kprrel, kprrel, kprrel,
    kprrel, kprrel,
    kprrel, NULL,   NULL,
    kprrel, kprrel, kprrel
  ),
};
// ----------------------------------------------------------------------------

