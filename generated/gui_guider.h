/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_BACK;
	lv_obj_t *screen_BACK_config;
	lv_obj_t *screen_BACK_panel;
	lv_obj_t *screen_language;
	lv_obj_t *screen_timezone;
	lv_obj_t *screen_autolock;
	lv_obj_t *screen_bright;
	lv_obj_t *screen_wifi;
	lv_obj_t *screen_ethernet;
	lv_obj_t *screen_cont_1;
	lv_obj_t *screen_img_21;
	lv_obj_t *screen_img_22;
	lv_obj_t *screen_tileview_1;
	lv_obj_t *screen_tileview_1_tile_1;
	lv_obj_t *screen_tileview_1_tile_2;
	lv_obj_t *screen_tileview_1_tile_3;
	lv_obj_t *screen_frame_2;
	lv_obj_t *screen_frame_1;
	lv_obj_t *screen_frame_4;
	lv_obj_t *screen_frame_3;
	lv_obj_t *screen_sun;
	lv_obj_t *screen_smile;
	lv_obj_t *screen_device;
	lv_obj_t *screen_warning;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_label_2;
	lv_obj_t *screen_label_4;
	lv_obj_t *screen_label_3;
	lv_obj_t *screen_label_6;
	lv_obj_t *screen_label_5;
	lv_obj_t *screen_label_7;
	lv_obj_t *screen_label_8;
	lv_obj_t *screen_frame_5;
	lv_obj_t *screen_frame_7;
	lv_obj_t *screen_frame_6;
	lv_obj_t *screen_frame_8;
	lv_obj_t *screen_img_14;
	lv_obj_t *screen_img_15;
	lv_obj_t *screen_img_16;
	lv_obj_t *screen_img_17;
	lv_obj_t *screen_img_18;
	lv_obj_t *screen_img_19;
	lv_obj_t *screen_img_20;
	lv_obj_t *screen_img_1;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;

void setup_scr_screen(lv_ui *ui);
LV_IMG_DECLARE(_languages_alpha_547x88);
LV_IMG_DECLARE(_timezone_alpha_547x88);
LV_IMG_DECLARE(_autolock_alpha_547x88);
LV_IMG_DECLARE(_brighless_alpha_547x88);
LV_IMG_DECLARE(_wifi_alpha_547x88);
LV_IMG_DECLARE(_ethernet_alpha_547x88);
LV_IMG_DECLARE(_thanh_themtb_alpha_471x52);
LV_IMG_DECLARE(_tentb_alpha_600x500);
LV_IMG_DECLARE(_Button_alpha_270x270);
LV_IMG_DECLARE(_Button_alpha_270x270);
LV_IMG_DECLARE(_Button_alpha_270x270);
LV_IMG_DECLARE(_Button_alpha_270x270);
LV_IMG_DECLARE(_mattroi_alpha_125x125);
LV_IMG_DECLARE(_khongkhi_alpha_100x100);
LV_IMG_DECLARE(_thiebi_alpha_100x100);
LV_IMG_DECLARE(_khongph_alpha_103x100);
LV_IMG_DECLARE(_Device_base_black_alpha_270x125);
LV_IMG_DECLARE(_Device_base_black_alpha_270x125);
LV_IMG_DECLARE(_Device_base_black_alpha_270x125);
LV_IMG_DECLARE(_Device_base_black_alpha_270x125);
LV_IMG_DECLARE(_love_alpha_225x55);
LV_IMG_DECLARE(_party_alpha_225x55);
LV_IMG_DECLARE(_mua_alpha_225x55);
LV_IMG_DECLARE(_add_alpha_189x66);
LV_IMG_DECLARE(_device2_alpha_270x180);
LV_IMG_DECLARE(_device1_alpha_270x180);
LV_IMG_DECLARE(_add_devicce_alpha_270x180);
LV_IMG_DECLARE(_BackGround_alpha_600x600);

LV_FONT_DECLARE(lv_font_arial_20)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_Alatsi_Regular_30)


#ifdef __cplusplus
}
#endif
#endif
