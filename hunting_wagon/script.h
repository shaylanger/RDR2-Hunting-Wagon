/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once

#include <math.h>

#include "inc\natives.h"
#include "inc\types.h"
#include "inc\enums.h"

#include "inc\main.h"

#define SI_SUPPORT_IOSTREAMS
//#include <fstream>
#include "SimpleIni.h"

#include <functional>

#include "log.h"

#define		_STR(x) #x
#define		STR(x) _STR(x)
#define VERSION_MAJOR			1
#define VERSION_MINOR			1
#define VERSION_MAINTENANCE		0
#define VERSION_TAG				BETA

#if VERSION_MAINTENANCE == 0
#define		VERSION_STRING				STR(VERSION_MAJOR) "." STR(VERSION_MINOR) " " STR(VERSION_TAG)
#else
#define		VERSION_STRING				STR(VERSION_MAJOR) "." STR(VERSION_MINOR) "." STR(VERSION_MAINTENANCE) " " STR(VERSION_TAG)
#endif

#define CONFIG_NAME STR(hunting_wagon)

#define VERSION_CONFIG 1
#define HEADER_FONT STR($title1)
#define ITEMS_FONT STR($body)
#define COLOUR_DIVIDER 0xffffff // 255, 255, 255
#define COLOUR_BACKGROUND 0x0 // 0, 0, 0
#define COLOUR_HIGHLIGHT_BAR 0xb90000 // 185, 0, 0
#define COLOUR_HEADER_BORDER 0xffffff // 255, 255, 255
#define COLOUR_HEADER_TEXT 0xffffff // 255, 255, 255
#define COLOUR_HIGHLIGHT_TEXT 0xffffff // 255, 255, 255
#define COLOUR_NON_HIGHLIGHT_TEXT 0xffffff // 255, 255, 255
#define COLOUR_ITEMS_COUNT 0x828282 // 130, 130, 130
#define COLOUR_INFO_BACKGROUND 0x0 // 0, 0, 0
#define COLOUR_INFO_HEADER_TEXT 0xb90000 // 185, 0, 0
#define COLOUR_INFO_TEXT 0xffffff // 255, 255, 255

#define MAX_MENU_ITEMS 150
#define MAX_MENU_LEVELS 10
#define MAX_MENU_PROMPTS 20

#define TYPE_VEHICLE 1
#define TYPE_MOUNT 2

#define MAX_WAGONS 25
#define WAGON_DEFAULT STR(chuckwagon000x)
#define WAGON_ARMYSUPPLY STR(armysupplywagon)
#define WAGON_SUPPLY STR(supplywagon)
#define WAGON_GATCHUCK STR(gatchuck)
#define WAGON_UTILLIWAG STR(utilliwag)
#define WAGON_WAGON5 STR(wagon05x)
#define WAGON_WAGONCIRCUS STR(wagoncircus01x)
#define WAGON_WAGONCIRCUS2 STR(wagoncircus02x)
#define WAGON_WAGONWORK STR(wagonwork01x)
#define WAGON_CART STR(cart01)
#define WAGON_CART03 STR(cart03)
#define WAGON_CART06 STR(cart06)
#define WAGON_CART07 STR(cart07)
#define WAGON_CART08 STR(cart07)

#include "globals.h"
#include "menu.h"
#include "menu_base.h"

#include "wagon.h"

struct RGB
{
	int r;
	int g;
	int b;
};

extern bool wagon_load_pressed();
extern void wagon_catch_load_button_press();
extern void wagon_setup();
extern bool wagon_time_taken(int time1, int time2);
extern void wagon_get_ini_file_path(char* ini_file, char* ini_file_path);
extern SI_Error wagon_load_ini_file(char* ini_file, bool display_error, int menu_level_back);
extern void wagon_save_ini_file(char* ini_file = CONFIG_NAME);
extern void wagon_set_config_default_ini();
extern void wagon_get_config_default_ini();
extern struct RGB wagon_get_rgb_from_hex(int hex_val);

void ScriptMain();