#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

/* define TRNS and NO */
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Good QMK CheatSheet: https://jayliu50.github.io/qmk-cheatsheet/ */
  /* Keymap: (0 Layer) Default Layer
   * ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬───────────────┐
   * │   GEsc  │    1    │    2    │    3    │    4    │    5    │    6    │    7    │    8    │    9    │    0    │    -    │    =    │     Bkspc     │ 
   * ├─────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬────────────┤
   * │    Tab     │    Q    │    W    │    E    │    R    │    T    │    Y    │    U    │    I    │    O    │    P    │    [    │    ]    │      \     │ 
   * ├────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴────────────┤
   * │     LCtrl     │    A    │    S    │    D    │    F    │    G    │    H    │    J    │    K    │    L    │    ;    │    '    │       Enter       │ 
   * ├───────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴───────────────────┤
   * │      LShift, (     │    Z    │    X    │    C    │    V    │    B    │    N    │    M    │    ,    │    .    │    /    │       ), RShift        │ 
   * ├────────────┬───────┴────┬────┴───────┬─┴─────────┴─────────┴─────────┴─────────┴─────────┴──┬──────┴─────┬───┴────────┬┴───────────┬────────────┤
   * │   LCtrl    │    MO(1)   │    LCmd    │                           Space                      │    LAlt    │    RCmd    │    RAlt    │    RCtrl   │ 
   * └────────────┴────────────┴────────────┴──────────────────────────────────────────────────────┴────────────┴────────────┴────────────┴────────────┘
   */
		[_LAYER0] = LAYOUT( /* Base */

        KC_GESC,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,    KC_BSPC,

        KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,    KC_BSLASH,

        KC_LCTL,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,    KC_ENT,

        KC_LSPO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,    KC_RSPC,    XXXXXXX,

        KC_LCTL,    MO(1),    KC_LGUI,  KC_SPC,   XXXXXXX,  KC_LALT,  KC_RGUI,  KC_RALT,  KC_RCTL

        ),

   /* Keymap: (1 Layer) Navigation + Light Layer
   * ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬───────────────┐
   * │    ~    │    F1   │   F2    │   F3    │   F4    │   F5    │   F6    │   F7    │   F8    │   F9    │   F10   │   f11   │   F12   │               │ 
   * ├─────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬────────────┤
   * │            │ RGB_TOG │ RGB_MOD │ RGB_HUI │ RGB_HUD │ RGB_SAI │ RGB_SAD │ RGB_VAI │ RGB_VAD │ BL_STEP │ BL_BRTG │  PageUp │ PageDown│    Rest    │ 
   * ├────────────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴──┬──────┴────────────┤
   * │               │         │         │         │         │         │  Left   │  Down   │   Up    │  Right  │         │         │                   │ 
   * ├───────────────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴────┬────┴───────────────────┤
   * │                    │MS_WH_UP │ MS_C2   │  MS_C1  │MS_WH_DN │ MS_Left │ MS_Down │  MS_Up  │ MS_Right│         │         │                        │ 
   * ├────────────┬───────┴────┬────┴───────┬─┴─────────┴─────────┴─────────┴─────────┴─────────┴──┬──────┴─────┬───┴────────┬┴───────────┬────────────┤
   * │            │            │            │               Macro(Ctrl, Space)                     │            │            │            │            │ 
   * └────────────┴────────────┴────────────┴──────────────────────────────────────────────────────┴────────────┴────────────┴────────────┴────────────┘
   */
		[_LAYER1] = LAYOUT( /* FN */

        KC_GRV,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,     _______,

        _______,    RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  BL_STEP,  BL_BRTG,  KC_PGUP,    KC_PGDN,    RESET,

        _______,    _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,    _______,

        _______,    KC_MS_WH_UP,  KC_BTN2,  KC_BTN1,  KC_MS_WH_DOWN,  KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  _______,  _______,    _______,    XXXXXXX,

        _______,    _______,  _______,  LCTL(KC_SPC),  XXXXXXX, _______,  _______,  _______,  _______

        )
		};

void rgb_matrix_indicators_user(void) {
	  uint8_t this_led = host_keyboard_leds();
	  if (!g_suspend_state) {
	    switch (biton32(layer_state)) {
        case _LAYER3:
          if ( this_led & (1<<USB_LED_NUM_LOCK)) {
            rgb_matrix_set_color(13, 0xFF, 0x00, 0x00);
          } else {
            rgb_matrix_set_color(13, 0x00, 0x00, 0x00);
          }
          rgb_matrix_set_color(0, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(1, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(1, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(2, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(3, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(4, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(5, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(6, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(7, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(8, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(9, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(10, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(11, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(12, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(14, 0x00, 0x00, 0xFF);
          rgb_matrix_set_color(15, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(16, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(17, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(18, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(19, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(20, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(21, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(22, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(23, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(24, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(25, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(26, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(27, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(28, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(29, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(30, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(31, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(32, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(33, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(34, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(35, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(36, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(37, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(38, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(39, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(40, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(41, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(42, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(43, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(44, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(45, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(46, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(47, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(48, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(49, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(50, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(51, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(52, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(53, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(54, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(55, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(56, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(57, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(58, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(59, 0xFF, 0x00, 0x00);
          rgb_matrix_set_color(60, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(61, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(62, 0x00, 0x00, 0x00);
          break;
	      case _LAYER4:
	        rgb_matrix_set_color_all(0xFF, 0xFF, 0x00);
          break;
      }
    }
    if ( this_led & (1<<USB_LED_CAPS_LOCK)) {
      rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
    }
}

void matrix_init_user(void) {
  //user initialization
}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	  return true;
}
