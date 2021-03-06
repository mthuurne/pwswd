
#ifndef EVENT_LISTENER_H
#define EVENT_LISTENER_H

#include <linux/input.h>

#define BUTTON_A KEY_LEFTCTRL
#define BUTTON_B KEY_LEFTALT
#define BUTTON_X KEY_SPACE
#define BUTTON_Y KEY_LEFTSHIFT
#define BUTTON_L KEY_TAB
#define BUTTON_R KEY_BACKSPACE
#define BUTTON_UP KEY_UP
#define BUTTON_DOWN KEY_DOWN
#define BUTTON_LEFT KEY_LEFT
#define BUTTON_RIGHT KEY_RIGHT
#define BUTTON_START KEY_ENTER
#define BUTTON_SELECT KEY_ESC
#define BUTTON_POWER KEY_POWER
#define BUTTON_HOLD KEY_PAUSE

#define NB_BUTTONS 14

#define BUTTON(btn) BUTTON_##btn

#define _BUTTON(btn) {#btn, BUTTON(btn), 0}


int do_listen();
int power_button_is_pressed(void);

#endif // EVENT_LISTENER_H
