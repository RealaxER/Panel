/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"


void setup_scr_screen(lv_ui *ui)
{
	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen, 1000, 600);

	//Write style for screen, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_BACK
	ui->screen_BACK = lv_tileview_create(ui->screen);
	ui->screen_BACK_config = lv_tileview_add_tile(ui->screen_BACK, 0, 0, LV_DIR_BOTTOM);
	ui->screen_BACK_panel = lv_tileview_add_tile(ui->screen_BACK, 0, 1, LV_DIR_TOP);
	lv_obj_set_pos(ui->screen_BACK, 0, 0);
	lv_obj_set_size(ui->screen_BACK, 605, 600);
	lv_obj_set_scrollbar_mode(ui->screen_BACK, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_BACK, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_BACK, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_BACK, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_BACK, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_BACK, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_BACK, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_BACK, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_BACK, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_BACK, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//Write codes screen_language
	ui->screen_language = lv_img_create(ui->screen_BACK_config);
	lv_obj_add_flag(ui->screen_language, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_language, &_languages_alpha_547x88);
	lv_img_set_pivot(ui->screen_language, 50,50);
	lv_img_set_angle(ui->screen_language, 0);
	lv_obj_set_pos(ui->screen_language, 27, 487);
	lv_obj_set_size(ui->screen_language, 547, 88);

	//Write style for screen_language, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_language, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_timezone
	ui->screen_timezone = lv_img_create(ui->screen_BACK_config);
	lv_obj_add_flag(ui->screen_timezone, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_timezone, &_timezone_alpha_547x88);
	lv_img_set_pivot(ui->screen_timezone, 50,50);
	lv_img_set_angle(ui->screen_timezone, 0);
	lv_obj_set_pos(ui->screen_timezone, 27, 393);
	lv_obj_set_size(ui->screen_timezone, 547, 88);

	//Write style for screen_timezone, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_timezone, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_autolock
	ui->screen_autolock = lv_img_create(ui->screen_BACK_config);
	lv_obj_add_flag(ui->screen_autolock, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_autolock, &_autolock_alpha_547x88);
	lv_img_set_pivot(ui->screen_autolock, 50,50);
	lv_img_set_angle(ui->screen_autolock, 0);
	lv_obj_set_pos(ui->screen_autolock, 27, 299);
	lv_obj_set_size(ui->screen_autolock, 547, 88);

	//Write style for screen_autolock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_autolock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_bright
	ui->screen_bright = lv_img_create(ui->screen_BACK_config);
	lv_obj_add_flag(ui->screen_bright, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_bright, &_brighless_alpha_547x88);
	lv_img_set_pivot(ui->screen_bright, 50,50);
	lv_img_set_angle(ui->screen_bright, 0);
	lv_obj_set_pos(ui->screen_bright, 27, 205);
	lv_obj_set_size(ui->screen_bright, 547, 88);

	//Write style for screen_bright, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_bright, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_wifi
	ui->screen_wifi = lv_img_create(ui->screen_BACK_config);
	lv_obj_add_flag(ui->screen_wifi, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_wifi, &_wifi_alpha_547x88);
	lv_img_set_pivot(ui->screen_wifi, 50,50);
	lv_img_set_angle(ui->screen_wifi, 0);
	lv_obj_set_pos(ui->screen_wifi, 27, 111);
	lv_obj_set_size(ui->screen_wifi, 547, 88);

	//Write style for screen_wifi, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_wifi, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ethernet
	ui->screen_ethernet = lv_img_create(ui->screen_BACK_config);
	lv_obj_add_flag(ui->screen_ethernet, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_ethernet, &_ethernet_alpha_547x88);
	lv_img_set_pivot(ui->screen_ethernet, 50,50);
	lv_img_set_angle(ui->screen_ethernet, 0);
	lv_obj_set_pos(ui->screen_ethernet, 27, 17);
	lv_obj_set_size(ui->screen_ethernet, 547, 88);

	//Write style for screen_ethernet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_ethernet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes screen_cont_1
	ui->screen_cont_1 = lv_obj_create(ui->screen_BACK_panel);
	lv_obj_set_pos(ui->screen_cont_1, -1, -1);
	lv_obj_set_size(ui->screen_cont_1, 606, 601);
	lv_obj_set_scrollbar_mode(ui->screen_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_cont_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_cont_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->screen_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_cont_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_21
	ui->screen_img_21 = lv_img_create(ui->screen_cont_1);
	lv_obj_add_flag(ui->screen_img_21, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_21, &_thanh_themtb_alpha_471x52);
	lv_img_set_pivot(ui->screen_img_21, 50,50);
	lv_img_set_angle(ui->screen_img_21, 0);
	lv_obj_set_pos(ui->screen_img_21, 10, 9);
	lv_obj_set_size(ui->screen_img_21, 471, 52);

	//Write style for screen_img_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_22
	ui->screen_img_22 = lv_img_create(ui->screen_cont_1);
	lv_obj_add_flag(ui->screen_img_22, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_22, &_tentb_alpha_600x500);
	lv_img_set_pivot(ui->screen_img_22, 50,50);
	lv_img_set_angle(ui->screen_img_22, 0);
	lv_obj_set_pos(ui->screen_img_22, 2, 86);
	lv_obj_set_size(ui->screen_img_22, 600, 500);

	//Write style for screen_img_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_tileview_1
	ui->screen_tileview_1 = lv_tileview_create(ui->screen_BACK_panel);
	ui->screen_tileview_1_tile_1 = lv_tileview_add_tile(ui->screen_tileview_1, 0, 0, LV_DIR_RIGHT);
	ui->screen_tileview_1_tile_2 = lv_tileview_add_tile(ui->screen_tileview_1, 1, 0, LV_DIR_LEFT | LV_DIR_RIGHT);
	ui->screen_tileview_1_tile_3 = lv_tileview_add_tile(ui->screen_tileview_1, 2, 0, LV_DIR_LEFT);
	lv_obj_set_pos(ui->screen_tileview_1, 0, 0);
	lv_obj_set_size(ui->screen_tileview_1, 600, 600);
	lv_obj_set_scrollbar_mode(ui->screen_tileview_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_tileview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_tileview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_tileview_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_tileview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_tileview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_tileview_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_tileview_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_tileview_1, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_tileview_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//Write codes screen_frame_2
	ui->screen_frame_2 = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_frame_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_2, &_Button_alpha_270x270);
	lv_img_set_pivot(ui->screen_frame_2, 50,50);
	lv_img_set_angle(ui->screen_frame_2, 0);
	lv_obj_set_pos(ui->screen_frame_2, 309, 19);
	lv_obj_set_size(ui->screen_frame_2, 270, 270);

	//Write style for screen_frame_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame_1
	ui->screen_frame_1 = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_frame_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_1, &_Button_alpha_270x270);
	lv_img_set_pivot(ui->screen_frame_1, 50,50);
	lv_img_set_angle(ui->screen_frame_1, 0);
	lv_obj_set_pos(ui->screen_frame_1, 18, 20);
	lv_obj_set_size(ui->screen_frame_1, 270, 270);

	//Write style for screen_frame_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame_4
	ui->screen_frame_4 = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_frame_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_4, &_Button_alpha_270x270);
	lv_img_set_pivot(ui->screen_frame_4, 50,50);
	lv_img_set_angle(ui->screen_frame_4, 0);
	lv_obj_set_pos(ui->screen_frame_4, 309, 308);
	lv_obj_set_size(ui->screen_frame_4, 270, 270);

	//Write style for screen_frame_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame_3
	ui->screen_frame_3 = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_frame_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_3, &_Button_alpha_270x270);
	lv_img_set_pivot(ui->screen_frame_3, 50,50);
	lv_img_set_angle(ui->screen_frame_3, 0);
	lv_obj_set_pos(ui->screen_frame_3, 17, 308);
	lv_obj_set_size(ui->screen_frame_3, 270, 270);

	//Write style for screen_frame_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_sun
	ui->screen_sun = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_sun, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_sun, &_mattroi_alpha_125x125);
	lv_img_set_pivot(ui->screen_sun, 50,50);
	lv_img_set_angle(ui->screen_sun, 0);
	lv_obj_set_pos(ui->screen_sun, 89.5, 56.5);
	lv_obj_set_size(ui->screen_sun, 125, 125);

	//Write style for screen_sun, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_sun, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_smile
	ui->screen_smile = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_smile, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_smile, &_khongkhi_alpha_100x100);
	lv_img_set_pivot(ui->screen_smile, 50,50);
	lv_img_set_angle(ui->screen_smile, 0);
	lv_obj_set_pos(ui->screen_smile, 394, 69);
	lv_obj_set_size(ui->screen_smile, 100, 100);

	//Write style for screen_smile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_smile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_device
	ui->screen_device = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_device, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_device, &_thiebi_alpha_100x100);
	lv_img_set_pivot(ui->screen_device, 50,50);
	lv_img_set_angle(ui->screen_device, 0);
	lv_obj_set_pos(ui->screen_device, 102, 355);
	lv_obj_set_size(ui->screen_device, 100, 100);

	//Write style for screen_device, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_device, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_warning
	ui->screen_warning = lv_img_create(ui->screen_tileview_1_tile_1);
	lv_obj_add_flag(ui->screen_warning, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_warning, &_khongph_alpha_103x100);
	lv_img_set_pivot(ui->screen_warning, 50,50);
	lv_img_set_angle(ui->screen_warning, 0);
	lv_obj_set_pos(ui->screen_warning, 392.5, 355);
	lv_obj_set_size(ui->screen_warning, 103, 100);

	//Write style for screen_warning, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_warning, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_1
	ui->screen_label_1 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_1, "Không khí");
	lv_label_set_long_mode(ui->screen_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_1, 377, 183);
	lv_obj_set_size(ui->screen_label_1, 134, 28);

	//Write style for screen_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_1, lv_color_hex(0xa0a0a0), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_1, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_2
	ui->screen_label_2 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_2, "Trong lành");
	lv_label_set_long_mode(ui->screen_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_2, 339, 227);
	lv_obj_set_size(ui->screen_label_2, 210, 32);

	//Write style for screen_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_2, &lv_font_Alatsi_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_4
	ui->screen_label_4 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_4, "Không phản hồi");
	lv_label_set_long_mode(ui->screen_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_4, 355, 469);
	lv_obj_set_size(ui->screen_label_4, 179, 25);

	//Write style for screen_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_4, lv_color_hex(0xa0a0a0), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_4, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_3
	ui->screen_label_3 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_3, "0 thiết bị");
	lv_label_set_long_mode(ui->screen_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_3, 339, 514);
	lv_obj_set_size(ui->screen_label_3, 210, 32);

	//Write style for screen_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_3, &lv_font_Alatsi_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_6
	ui->screen_label_6 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_6, "Đang bật");
	lv_label_set_long_mode(ui->screen_label_6, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_6, 62.5, 469);
	lv_obj_set_size(ui->screen_label_6, 179, 25);

	//Write style for screen_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_6, lv_color_hex(0xa0a0a0), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_6, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_5
	ui->screen_label_5 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_5, "0 thiết bị");
	lv_label_set_long_mode(ui->screen_label_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_5, 47, 514);
	lv_obj_set_size(ui->screen_label_5, 210, 32);

	//Write style for screen_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_5, &lv_font_Alatsi_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_7
	ui->screen_label_7 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_7, "Trời nắng");
	lv_label_set_long_mode(ui->screen_label_7, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_7, 47, 227);
	lv_obj_set_size(ui->screen_label_7, 210, 32);

	//Write style for screen_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_7, &lv_font_Alatsi_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_8
	ui->screen_label_8 = lv_label_create(ui->screen_tileview_1_tile_1);
	lv_label_set_text(ui->screen_label_8, "28℃");
	lv_label_set_long_mode(ui->screen_label_8, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_label_8, 47, 181);
	lv_obj_set_size(ui->screen_label_8, 210, 32);

	//Write style for screen_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_label_8, &lv_font_Alatsi_Regular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_label_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes screen_frame_5
	ui->screen_frame_5 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_frame_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_5, &_Device_base_black_alpha_270x125);
	lv_img_set_pivot(ui->screen_frame_5, 50,50);
	lv_img_set_angle(ui->screen_frame_5, 0);
	lv_obj_set_pos(ui->screen_frame_5, 16, 21);
	lv_obj_set_size(ui->screen_frame_5, 270, 125);

	//Write style for screen_frame_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame_7
	ui->screen_frame_7 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_frame_7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_7, &_Device_base_black_alpha_270x125);
	lv_img_set_pivot(ui->screen_frame_7, 50,50);
	lv_img_set_angle(ui->screen_frame_7, 0);
	lv_obj_set_pos(ui->screen_frame_7, 16, 165);
	lv_obj_set_size(ui->screen_frame_7, 270, 125);

	//Write style for screen_frame_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame_6
	ui->screen_frame_6 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_frame_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_6, &_Device_base_black_alpha_270x125);
	lv_img_set_pivot(ui->screen_frame_6, 50,50);
	lv_img_set_angle(ui->screen_frame_6, 0);
	lv_obj_set_pos(ui->screen_frame_6, 307, 21);
	lv_obj_set_size(ui->screen_frame_6, 270, 125);

	//Write style for screen_frame_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_frame_8
	ui->screen_frame_8 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_frame_8, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_frame_8, &_Device_base_black_alpha_270x125);
	lv_img_set_pivot(ui->screen_frame_8, 50,50);
	lv_img_set_angle(ui->screen_frame_8, 0);
	lv_obj_set_pos(ui->screen_frame_8, 307, 165);
	lv_obj_set_size(ui->screen_frame_8, 270, 125);

	//Write style for screen_frame_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_frame_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_14
	ui->screen_img_14 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_img_14, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_14, &_love_alpha_225x55);
	lv_img_set_pivot(ui->screen_img_14, 50,50);
	lv_img_set_angle(ui->screen_img_14, 0);
	lv_obj_set_pos(ui->screen_img_14, 48, 55);
	lv_obj_set_size(ui->screen_img_14, 225, 55);

	//Write style for screen_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_15
	ui->screen_img_15 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_img_15, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_15, &_party_alpha_225x55);
	lv_img_set_pivot(ui->screen_img_15, 50,50);
	lv_img_set_angle(ui->screen_img_15, 0);
	lv_obj_set_pos(ui->screen_img_15, 46, 198);
	lv_obj_set_size(ui->screen_img_15, 225, 55);

	//Write style for screen_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_16
	ui->screen_img_16 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_img_16, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_16, &_mua_alpha_225x55);
	lv_img_set_pivot(ui->screen_img_16, 50,50);
	lv_img_set_angle(ui->screen_img_16, 0);
	lv_obj_set_pos(ui->screen_img_16, 334, 54);
	lv_obj_set_size(ui->screen_img_16, 225, 55);

	//Write style for screen_img_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_17
	ui->screen_img_17 = lv_img_create(ui->screen_tileview_1_tile_2);
	lv_obj_add_flag(ui->screen_img_17, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_17, &_add_alpha_189x66);
	lv_img_set_pivot(ui->screen_img_17, 50,50);
	lv_img_set_angle(ui->screen_img_17, 0);
	lv_obj_set_pos(ui->screen_img_17, 339, 197);
	lv_obj_set_size(ui->screen_img_17, 189, 66);

	//Write style for screen_img_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);



	//Write codes screen_img_18
	ui->screen_img_18 = lv_img_create(ui->screen_tileview_1_tile_3);
	lv_obj_add_flag(ui->screen_img_18, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_18, &_device2_alpha_270x180);
	lv_img_set_pivot(ui->screen_img_18, 50,50);
	lv_img_set_angle(ui->screen_img_18, 0);
	lv_obj_set_pos(ui->screen_img_18, 21, 18);
	lv_obj_set_size(ui->screen_img_18, 270, 180);

	//Write style for screen_img_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_19
	ui->screen_img_19 = lv_img_create(ui->screen_tileview_1_tile_3);
	lv_obj_add_flag(ui->screen_img_19, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_19, &_device1_alpha_270x180);
	lv_img_set_pivot(ui->screen_img_19, 50,50);
	lv_img_set_angle(ui->screen_img_19, 0);
	lv_obj_set_pos(ui->screen_img_19, 307, 15);
	lv_obj_set_size(ui->screen_img_19, 270, 180);

	//Write style for screen_img_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_20
	ui->screen_img_20 = lv_img_create(ui->screen_tileview_1_tile_3);
	lv_obj_add_flag(ui->screen_img_20, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_20, &_add_devicce_alpha_270x180);
	lv_img_set_pivot(ui->screen_img_20, 50,50);
	lv_img_set_angle(ui->screen_img_20, 0);
	lv_obj_set_pos(ui->screen_img_20, 19, 215);
	lv_obj_set_size(ui->screen_img_20, 270, 180);

	//Write style for screen_img_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_1
	ui->screen_img_1 = lv_img_create(ui->screen_BACK_panel);
	lv_obj_add_flag(ui->screen_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_1, &_BackGround_alpha_600x600);
	lv_img_set_pivot(ui->screen_img_1, 50,50);
	lv_img_set_angle(ui->screen_img_1, 0);
	lv_obj_set_pos(ui->screen_img_1, 0, 0);
	lv_obj_set_size(ui->screen_img_1, 600, 600);

	//Write style for screen_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Update current screen layout.
	lv_obj_update_layout(ui->screen);

	
	//Init events for screen.
	events_init_screen(ui);
}
