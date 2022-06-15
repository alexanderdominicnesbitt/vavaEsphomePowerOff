#pragma once

#include <BleKeyboard.h>
#include <string.h>
#include <map>

const std::map<std::string, uint8_t> BLE_KEYBOARD_KEY_MAP = {
    {"KEY_LEFT_CTRL", KEY_LEFT_CTRL},
    {"KEY_LEFT_SHIFT", KEY_LEFT_SHIFT},
    {"KEY_LEFT_ALT", KEY_LEFT_ALT},
    {"KEY_LEFT_GUI", KEY_LEFT_GUI},
    {"KEY_RIGHT_CTRL", KEY_RIGHT_CTRL},
    {"KEY_RIGHT_SHIFT", KEY_RIGHT_SHIFT},
    {"KEY_RIGHT_ALT", KEY_RIGHT_ALT},
    {"KEY_RIGHT_GUI", KEY_RIGHT_GUI},
    
    {"KEY_UP_ARROW", KEY_UP_ARROW},
    {"KEY_DOWN_ARROW", KEY_DOWN_ARROW},
    {"KEY_LEFT_ARROW", KEY_LEFT_ARROW},
    {"KEY_RIGHT_ARROW", KEY_RIGHT_ARROW},
    {"KEY_BACKSPACE", KEY_BACKSPACE},
    {"KEY_TAB", KEY_TAB},
    {"KEY_RETURN", KEY_RETURN},
    {"KEY_ESC", KEY_ESC},
    {"KEY_INSERT", KEY_INSERT},
    {"KEY_DELETE", KEY_DELETE},
    {"KEY_PAGE_UP", KEY_PAGE_UP},
    {"KEY_PAGE_DOWN", KEY_PAGE_DOWN},
    {"KEY_HOME", KEY_HOME},
    {"KEY_END", KEY_END},
    {"KEY_CAPS_LOCK", KEY_CAPS_LOCK},

    {"KEY_F1", KEY_F1},
    {"KEY_F2", KEY_F2},
    {"KEY_F3", KEY_F3},
    {"KEY_F4", KEY_F4},
    {"KEY_F5", KEY_F5},
    {"KEY_F6", KEY_F6},
    {"KEY_F7", KEY_F7},
    {"KEY_F8", KEY_F8},
    {"KEY_F9", KEY_F9},
    {"KEY_F10", KEY_F10},
    {"KEY_F11", KEY_F11},
    {"KEY_F12", KEY_F12},
    {"KEY_F13", KEY_F13},
    {"KEY_F14", KEY_F14},
    {"KEY_F15", KEY_F15},
    {"KEY_F16", KEY_F16},
    {"KEY_F17", KEY_F17},
    {"KEY_F18", KEY_F18},
    {"KEY_F19", KEY_F19},
    {"KEY_F20", KEY_F20},
    {"KEY_F21", KEY_F21},
    {"KEY_F22", KEY_F22},
    {"KEY_F23", KEY_F23},
    {"KEY_F24", KEY_F24}
};

struct MediaKeyStruct {
    uint8_t left;
    uint8_t right;

    MediaKeyStruct(uint8_t _left, uint8_t _right) {
        left = _left;
        right = _right;
    }
};

const std::map<std::string, MediaKeyStruct> BLE_KEYBOARD_MEDIA_KEY_MAP = {
    {"KEY_MEDIA_NEXT_TRACK", MediaKeyStruct(KEY_MEDIA_NEXT_TRACK[0], KEY_MEDIA_NEXT_TRACK[1])},
    {"KEY_MEDIA_PREVIOUS_TRACK", MediaKeyStruct(KEY_MEDIA_PREVIOUS_TRACK[0], KEY_MEDIA_PREVIOUS_TRACK[1])},
    {"KEY_MEDIA_POWER", MediaKeyStruct(KEY_MEDIA_POWER[0], KEY_MEDIA_POWER[1])},
    {"KEY_MEDIA_PLAY_PAUSE", MediaKeyStruct(KEY_MEDIA_PLAY_PAUSE[0], KEY_MEDIA_PLAY_PAUSE[1])},
    {"KEY_MEDIA_MUTE", MediaKeyStruct(KEY_MEDIA_MUTE[0], KEY_MEDIA_MUTE[1])},
    {"KEY_MEDIA_VOLUME_UP", MediaKeyStruct(KEY_MEDIA_VOLUME_UP[0], KEY_MEDIA_VOLUME_UP[1])},
    {"KEY_MEDIA_VOLUME_DOWN", MediaKeyStruct(KEY_MEDIA_VOLUME_DOWN[0], KEY_MEDIA_VOLUME_DOWN[1])},
    {"KEY_MEDIA_WWW_HOME", MediaKeyStruct(KEY_MEDIA_WWW_HOME[0], KEY_MEDIA_WWW_HOME[1])},
    {"KEY_MEDIA_LOCAL_MACHINE_BROWSER", MediaKeyStruct(KEY_MEDIA_LOCAL_MACHINE_BROWSER[0], KEY_MEDIA_LOCAL_MACHINE_BROWSER[1])}, // Opens "My Computer" on Windows
    {"KEY_MEDIA_CALCULATOR", MediaKeyStruct(KEY_MEDIA_CALCULATOR[0], KEY_MEDIA_CALCULATOR[1])},
    {"KEY_MEDIA_WWW_BOOKMARKS", MediaKeyStruct(KEY_MEDIA_WWW_BOOKMARKS[0], KEY_MEDIA_WWW_BOOKMARKS[1])},
    {"KEY_MEDIA_WWW_SEARCH", MediaKeyStruct(KEY_MEDIA_WWW_SEARCH[0], KEY_MEDIA_WWW_SEARCH[1])},
    {"KEY_MEDIA_WWW_STOP", MediaKeyStruct(KEY_MEDIA_WWW_STOP[0], KEY_MEDIA_WWW_STOP[1])},
    {"KEY_MEDIA_WWW_BACK", MediaKeyStruct(KEY_MEDIA_WWW_BACK[0], KEY_MEDIA_WWW_BACK[1])},
    {"KEY_MEDIA_CONSUMER_CONTROL_CONFIGURATION", MediaKeyStruct(KEY_MEDIA_CONSUMER_CONTROL_CONFIGURATION[0], KEY_MEDIA_CONSUMER_CONTROL_CONFIGURATION[1])}, // Media Selection
    {"KEY_MEDIA_EMAIL_READER", MediaKeyStruct(KEY_MEDIA_EMAIL_READER[0], KEY_MEDIA_EMAIL_READER[1])}
};