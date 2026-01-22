// Copyright 2023 Moritz Plattner (@ebastler), Alex Havermale (@haversnail)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    // --- Macros (Defined in process_record_user) ---
    FORMAT = SAFE_RANGE,  // VSCode Format Highlighted Macro
    DISC_MUTE,            // Discord Mute Macro
    DISC_DEAF,            // Discord Deafen Macro
    TOGGLE_LINUX,         // Toggle Linux Layer and Emoji Unicode Mode
    FLAG_TW,              // 🇹🇼
    FLAG_US,              // 🇺🇸
    ARR_LEFT,             // ⬅️
    ARR_RIGHT,            // ➡️
};

enum unicode_names {
    // --- Row 1 (Top Function Row) ---
    UNAMUSED = 0,         // 😒
    DRUM,                 // 🥁
    HEART,                // ❤️
    ROLL_EYES,            // 🙄
    BAGS_UNDER_EYES,      // 🫩
    HOLDING_TEARS,        // 🥹
    DISAPPOINTED,         // 😞
    RELIEVED,             // 😌

    // --- Row 2 (Number Row) ---
    SMIRK,                // 😏
    SWEAT,                // 😅
    GAME,                 // 🎮
    HEART_EYES,           // 😍
    MONEY,                // 💵
    WAVE,                 // 👋
    CAKE,                 // 🎂
    SNAKE,                // 🐍
    COOL,                 // 😎
    SAD,                  // 😔
    SLIGHT_SMILE,         // 🙂
    NEUTRAL,              // 😐
    PURPLE_HEART,         // 💜

    // --- Row 3 (Top Alpha) ---
    SHUSH,                // 🤫
    MONEY_WINGS,          // 💸
    EXPRESSIONLESS,       // 😑
    TIRED,                // 😫
    PARTY,                // 🎉
    SHRUG,                // 🤷
    PANDA,                // 🐼
    RABBIT,               // 🐇
    SURPRISED,            // 😮
    PLEADING,             // 🥺
    BUBBLE_TEA,           // 🧋
    PIANO,                // 🎹
    SOCCER,               // ⚽
    CHECK,                // ✅

    // --- Row 4 (Home Row) ---
    CAP,                  // 🧢
    SMILING_TEARS,        // 🥲
    CRY,                  // 😭
    SKULL,                // 💀
    FACEPALM,             // 🤦
    GRIN,                 // 😃
    PRAY,                 // 🙏
    LAUGH,                // 😂
    KISS,                 // 😘
    EYES,                 // 👀
    TONGUE,               // 😛
    CRYING_FACE,          // 😢
    FLEX,                 // 💪
    CROSS,                // ❌

    // --- Row 5 (Bottom Alpha) ---
    HAPPY,                // 😊
    HEART_GIFT,           // 💝
    SPARKLING_HEART,      // 💖
    HEARTS_ROTATE,        // 💞
    FIRE,                 // 🔥
    DROP,                 // 💧
    MELTING_FACE,         // 🫠
    STUCK_TONGUE,         // 😝
    PINGPONG,             // 🏓
    THINKING,             // 🤔
    STRAWBERRY,           // 🍓
    THUMBS_UP,            // 👍
    YIKES,                // 😬

    // --- Row 6 (Space Bar Row) ---
    THUMBS_DOWN           // 👎
};

const uint32_t PROGMEM unicode_map[] = {
    // --- Row 1 ---
    [UNAMUSED]        = 0x1F612, // 😒
    [DRUM]            = 0x1F941, // 🥁
    [HEART]           = 0x2764,  // ❤️
    [ROLL_EYES]       = 0x1F644, // 🙄
    [BAGS_UNDER_EYES] = 0x1FAE9, // 🫩
    [HOLDING_TEARS]   = 0x1F979, // 🥹
    [DISAPPOINTED]    = 0x1F61E, // 😞
    [RELIEVED]        = 0x1F60C, // 😌

    // --- Row 2 ---
    [SMIRK]           = 0x1F60F, // 😏
    [SWEAT]           = 0x1F605, // 😅
    [GAME]            = 0x1F3AE, // 🎮
    [HEART_EYES]      = 0x1F60D, // 😍
    [MONEY]           = 0x1F4B5, // 💵
    [WAVE]            = 0x1F44B, // 👋
    [CAKE]            = 0x1F382, // 🎂
    [SNAKE]           = 0x1F40D, // 🐍
    [COOL]            = 0x1F60E, // 😎
    [SAD]             = 0x1F614, // 😔
    [SLIGHT_SMILE]    = 0x1F642, // 🙂
    [NEUTRAL]         = 0x1F610, // 😐
    [PURPLE_HEART]    = 0x1F49C, // 💜

    // --- Row 3 ---
    [SHUSH]           = 0x1F92B, // 🤫
    [MONEY_WINGS]     = 0x1F4B8, // 💸
    [EXPRESSIONLESS]  = 0x1F611, // 😑
    [TIRED]           = 0x1F62B, // 😫
    [PARTY]           = 0x1F389, // 🎉
    [SHRUG]           = 0x1F937, // 🤷
    [PANDA]           = 0x1F43C, // 🐼
    [RABBIT]          = 0x1F407, // 🐇
    [SURPRISED]       = 0x1F62E, // 😮
    [PLEADING]        = 0x1F97A, // 🥺
    [BUBBLE_TEA]      = 0x1F9CB, // 🧋
    [PIANO]           = 0x1F3B9, // 🎹
    [SOCCER]          = 0x26BD,  // ⚽
    [CHECK]           = 0x2705,  // ✅

    // --- Row 4 ---
    [CAP]             = 0x1F9E2, // 🧢
    [SMILING_TEARS]   = 0x1F972, // 🥲
    [CRY]             = 0x1F62D, // 😭
    [SKULL]           = 0x1F480, // 💀
    [FACEPALM]        = 0x1F926, // 🤦
    [GRIN]            = 0x1F603, // 😃
    [PRAY]            = 0x1F64F, // 🙏
    [LAUGH]           = 0x1F602, // 😂
    [KISS]            = 0x1F618, // 😘
    [EYES]            = 0x1F440, // 👀
    [TONGUE]          = 0x1F61B, // 😛
    [CRYING_FACE]     = 0x1F622, // 😢
    [FLEX]            = 0x1F4AA, // 💪
    [CROSS]           = 0x274C,  // ❌

    // --- Row 5 ---
    [HAPPY]           = 0x1F60A, // 😊
    [HEART_GIFT]      = 0x1F49D, // 💝
    [SPARKLING_HEART] = 0x1F496, // 💖
    [HEARTS_ROTATE]   = 0x1F49E, // 💞
    [FIRE]            = 0x1F525, // 🔥
    [DROP]            = 0x1F4A7, // 💧
    [MELTING_FACE]    = 0x1FAE0, // 🫠
    [STUCK_TONGUE]    = 0x1F61D, // 😝
    [PINGPONG]        = 0x1F3D3, // 🏓
    [THINKING]        = 0x1F914, // 🤔
    [STRAWBERRY]      = 0x1F353, // 🍓
    [THUMBS_UP]       = 0x1F44D, // 👍
    [YIKES]           = 0x1F62C, // 😬

    // --- Row 6 ---
    [THUMBS_DOWN]     = 0x1F44E  // 👎
};

enum layers {
    _BASE = 0,       // Windows Base
    _LINUX = 1,      // Linux Overlay (Toggle)
    _FUNCTION = 2,   // Media/Function Controls
    _EMOJI = 3,      // Emoji Keys + Debugger Knobs
    _NAV_V = 4,      // Vertical Nav
    _NAV_H = 5,      // Horizontal Nav
    _RGB   = 6       // RGB Controls
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0: Windows/Keyboard base
    * - Default main usages of keyboard
    * - Encoders:
    *   - Left:  Workspace Switch (Windows) | Click: Turn on/off RGB
    *   - Right: Volume Control             | Click: Mute
    */
    [_BASE] = LAYOUT_all(
        RM_TOGG,    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,        KC_F10,  KC_F11,  KC_F12,        KC_PSCR,          KC_MUTE,
        KC_F13,     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,         KC_0,    KC_MINS, KC_EQL,        KC_BSPC, KC_DEL,  KC_HOME,
        LGUI(KC_L), KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,         KC_P,    KC_LBRC, KC_RBRC,       KC_BSLS,          KC_PGUP,
        KC_F15,     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,         KC_SCLN, KC_QUOT, KC_NUHS,       KC_ENT,           KC_PGDN,
        KC_F16,     KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,      KC_DOT,  KC_SLSH,                KC_RSFT, KC_UP,   KC_DEL,
        KC_F17,     KC_LCTL, KC_LGUI, KC_LALT,              MO(_NAV_H),   KC_SPC,  KC_SPC,           MO(_NAV_V),   MO(_EMOJI),       MO(_FUNCTION), KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Layer 1: Linux Overlay
    * - Activated via TOGGLE_LINUX on the Function Layer (Tab Key)
    * - Contains Linux-specific shortcuts on the left macro column
    * - Encoders:
    *   - Left:  Workspace Switch (Linux) | Click: Turn on/off RGB
    *   - Right: Volume Control           | Click: Mute
    */
    [_LINUX] = LAYOUT_all(
        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        C(A(KC_T)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* Layer 2: Function Layer 
    * - Includes missing 100% keys (Application, Insert, Home, End, etc.)
    * - Includes the Linux Mode Toggle (Toggles to the Linux layer and changes Unicode Mode to Linux Mode)
    * - Includes media controls for pause/play, volume up/down, previous/next songs
    * - Includes monitor brightness down/up for MacOS on F1/F2 keys
    * - Encoders:
    *   - Left:  Move window to Workspace Left/Right (Linux) | Click: Discord Mute (CTRL + SHIFT + ALT + F10)
    *   - Right: Track Skip (Prev/Next Song)                 | Click: Discord Deafen (CTRL + SHIFT + ALT + F11)
    */
    [_FUNCTION] = LAYOUT_all(
        DISC_MUTE, KC_TRNS,      KC_BRID, KC_BRIU, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          DISC_DEAF,
        KC_TRNS,   KC_TRNS,      KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,   KC_F18,  KC_F19,  KC_F20,  KC_F21,   KC_F22,  KC_F23,  KC_TRNS, KC_INS,  KC_TRNS, KC_HOME,
        KC_TRNS,   TOGGLE_LINUX, KC_TRNS, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_INS,  KC_PAUS,  KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS,          KC_PGUP,
        KC_TRNS,   KC_CAPS,      KC_APP,  KC_SCRL, KC_TRNS, KC_TRNS, KC_TRNS,  KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_PGDN,
        KC_TRNS,   KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_CALC, KC_TRNS,  KC_TRNS, KC_NUM,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,          KC_TRNS, KC_VOLU, KC_END,
        KC_TRNS,   KC_TRNS,      KC_TRNS, KC_TRNS,                   MO(_RGB), KC_MPLY, KC_MPLY,                    KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT
    ),

    /* Layer 3: Emoji Layer 
    * - Emojis that I use regularly
    * - Encoders:
    *   - Left:  Find next/previous instance (VSCode)         | Click: Format highlighted (VSCode)
    *   - Right: Add selection/cursor to Next/Prev Find Match | Click: Mute
    */
    [_EMOJI] = LAYOUT_all(
        FORMAT,     KC_TRNS,          UC(UNAMUSED),      UC(DRUM),         UC(HEART),           UC(ROLL_EYES),      UC(BAGS_UNDER_EYES),  UC(HOLDING_TEARS),  KC_F7,             UC(DISAPPOINTED),  UC(RELIEVED),  KC_TRNS,           KC_TRNS,          KC_TRNS,        KC_TRNS,           KC_TRNS,
        KC_TRNS,    UC(SMIRK),        UC(SWEAT),         UC(GAME),         UC(HEART_EYES),      UC(MONEY),          UC(WAVE),             UC(CAKE),           UC(SNAKE),         UC(COOL),          UC(SAD),       UC(SLIGHT_SMILE),  UC(NEUTRAL),      FLAG_TW,        FLAG_US, KC_DEL,   UC(PURPLE_HEART),
        KC_TRNS,    KC_TRNS,          UC(SHUSH),         UC(MONEY_WINGS),  UC(EXPRESSIONLESS),  UC(TIRED),          UC(PARTY),            UC(SHRUG),          UC(PANDA),         UC(RABBIT),        UC(SURPRISED), UC(PLEADING),      UC(BUBBLE_TEA),   UC(PIANO),      UC(SOCCER),        UC(CHECK),
        KC_TRNS,    UC(CAP),          UC(SMILING_TEARS), UC(CRY),          UC(SKULL),           UC(FACEPALM),       UC(GRIN),             UC(PRAY),           UC(LAUGH),         UC(KISS),          UC(EYES),      UC(TONGUE),        UC(CRYING_FACE),  KC_TRNS,        UC(FLEX),          UC(CROSS),
        KC_TRNS,    KC_TRNS, KC_TRNS, UC(HAPPY),         UC(HEART_GIFT),   UC(SPARKLING_HEART), UC(HEARTS_ROTATE),  UC(FIRE),             UC(DROP),           UC(MELTING_FACE),  UC(STUCK_TONGUE),  UC(PINGPONG),  UC(THINKING),                        UC(STRAWBERRY), UC(THUMBS_UP),     UC(YIKES),
        KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS,   KC_TRNS,  KC_TRNS,           KC_TRNS,   KC_TRNS,       KC_TRNS,                                                                                                                  ARR_LEFT,       UC(THUMBS_DOWN),   ARR_RIGHT
    ),

    /* Layer 4: Vertical Nav 
    * - Navigation (WASD + Q/E for Page Up/Dn + Z/X for Home/End)
    * - Encoders:
    *   - Left:  Scroll Lines (Up/Down) | Click: Format highlighted (VSCode)
    *   - Right: Zoom (VSCode/Browsers) | Click: Mute 
    */
    [_NAV_V] = LAYOUT_all(
        FORMAT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,        
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* Layer 5: Horizontal Nav & Virtual Numpad
    * - Numpad on  [7 8 9]
    *              |U I O|
    *              |J K L|
    *            N [M , .]
    *   - N is numlock
    *   - M and ,     are 0
    *   - Y and P     are *
    *   - ; and Enter are Enter
    *   - / is /, - is -, = is +, Backspace is Backspace
    * - Encoders:
    *   - Left:  Switch Tabs (VSCode/Browsers) | Click: Format highlighted (VSCode)
    *   - Right: Skip words                    | Click: Mute
    */
    [_NAV_H] = LAYOUT_all(
        FORMAT,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_TRNS, KC_PMNS, KC_PPLS, KC_BSPC, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_TRNS, KC_TRNS, KC_PENT,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUM,  KC_P0,   KC_P0,   KC_PDOT, KC_PSLS,          KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    /* Layer 6: RGB Controls
    * - Arrows: Speed (Up/Down), Hue (Left/Right)
    * - PgUp/PgDn: Saturation (Vivid/Pastel)
    * - Encoders:
    *   - Left:  Cycle Modes (Prev/Next Effect) | Click: Turn on/off RGB
    *   - Right: Brightness (Decrease/Increase) | Click: Turn on/off RGB
    */
    [_RGB] = LAYOUT_all(
        RM_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          RM_TOGG,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          RM_SATU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          RM_SATD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, RM_SPDU, KC_TRNS,        
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, RM_HUED, RM_SPDD, RM_HUEU
    ),
};

// Encoder Map
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    
    // LAYER 0: Base (Windows Mode)
    // Left:  Workspace Switch (Windows Standard: Win + Ctrl + Left/Right)
    // Right: Volume Control
    [_BASE]     = { 
        ENCODER_CCW_CW(LWIN(LCTL(KC_LEFT)), LWIN(LCTL(KC_RIGHT))), 
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU) 
    },
    
    // LAYER 1: Linux Overlay (Ubuntu Mode)
    // Left:  Workspace Switch (Ubuntu Standard: Ctrl + Alt + Left/Right)
    // Right: Volume Control (Same as base)
    [_LINUX]    = { 
        ENCODER_CCW_CW(LCTL(LALT(KC_LEFT)), LCTL(LALT(KC_RIGHT))), 
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU) 
    },
    
    // LAYER 2: Function (Window Mover & Media)
    // Left:  Move window to Workspace Left/Right
    // Right: Track Skip (Prev/Next Song)
    [_FUNCTION] = { 
        ENCODER_CCW_CW(S(LGUI(KC_PGUP)), S(LGUI(KC_PGDN))),
        ENCODER_CCW_CW(KC_MPRV, KC_MNXT) 
    },
    
    // LAYER 3: Emoji Layer but Encoders in Coding Mode
    // Left:  Find next/prev instance
    // Right: Add selection to Next/Prev Find Match (Prev find match may need to be configured in VSCode)
    [_EMOJI]    = { 
        ENCODER_CCW_CW(S(KC_F3), KC_F3),
        ENCODER_CCW_CW(C(S(KC_D)), C(KC_D))
    },
    
    // LAYER 4: Nav Vertical
    // Left:  Scroll Lines (Up/Down)
    // Right: Zoom (Ctrl + Minus / Ctrl + Plus)
    [_NAV_V]    = { 
        ENCODER_CCW_CW(KC_UP, KC_DOWN), 
        ENCODER_CCW_CW(C(KC_MINS), C(KC_PLUS)) 
    },
    
    // LAYER 5: Nav Horizontal
    // Left:  Switch Tabs (Ctrl+Shift+Tab / Ctrl+Tab)
    // Right: Skip Words (Ctrl+Left / Ctrl+Right)
    [_NAV_H]    = { 
        ENCODER_CCW_CW(C(S(KC_TAB)), C(KC_TAB)), 
        ENCODER_CCW_CW(C(KC_LEFT), C(KC_RIGHT)) 
    },
    
    // LAYER 6: RGB Controls
    // Left:  Cycle Modes (Prev/Next Effect)
    // Right: Brightness (Decrease/Increase)
    [_RGB]      = { 
        ENCODER_CCW_CW(RM_PREV, RM_NEXT), 
        ENCODER_CCW_CW(RM_VALD, RM_VALU) 
    }
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case FORMAT:
            if (record->event.pressed) {
                tap_code16(C(KC_K));
                tap_code16(C(KC_F));
            }
            return false;
        case DISC_MUTE:
            if (record->event.pressed) {
                tap_code16(C(A(S(KC_F10))));
            }
            return false;
        case DISC_DEAF:
            if (record->event.pressed) {
                tap_code16(C(A(S(KC_F11))));
            }
            return false;
        case TOGGLE_LINUX:
            if (record->event.pressed) {
                if (layer_state_is(_LINUX)) {
                    layer_off(_LINUX);
                    set_unicode_input_mode(UNICODE_MODE_WINCOMPOSE);
                } else {
                    layer_on(_LINUX);
                    set_unicode_input_mode(UNICODE_MODE_LINUX);
                }
            }
            return false;
        case FLAG_TW:
            if (record->event.pressed) {
                send_unicode_string("\U0001F1F9\U0001F1FC"); 
            }
            return false;
        case FLAG_US:
            if (record->event.pressed) {
                send_unicode_string("\U0001F1FA\U0001F1F8");
            }
            return false;
        case ARR_LEFT:
            if (record->event.pressed) {
                send_unicode_string("\u2B05\uFE0F"); 
            }
            return false;
        case ARR_RIGHT:
            if (record->event.pressed) {
                send_unicode_string("\u27A1\uFE0F");
            }
            return false;
    }
    return true; 
}
