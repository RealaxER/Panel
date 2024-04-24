/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"


static void screen_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.screen_tileview_1, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_img_21_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		lv_obj_clear_flag(guider_ui.screen_tileview_1, LV_OBJ_FLAG_HIDDEN);
		lv_obj_add_flag(guider_ui.screen_cont_1, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_2, 126, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_2, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_1, 125, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_1, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_4_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_4, 127, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_4, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_3_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_3, 125, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_3, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_5_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_5, 129, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_5, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_7_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_7, 126, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_7, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_6_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_6, 127, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_6, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_frame_8_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_8, 127, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_frame_8, 255, LV_PART_MAIN);
		break;
	}
	default:
		break;
	}
}
static void screen_img_20_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_PRESSING:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_img_20, 127, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_img_opa(guider_ui.screen_img_20, 255, LV_PART_MAIN);
		break;
	}
	case LV_EVENT_CLICKED:
	{
		lv_obj_add_flag(guider_ui.screen_tileview_1, LV_OBJ_FLAG_HIDDEN);
		lv_obj_clear_flag(guider_ui.screen_cont_1, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
static void screen_img_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_LONG_PRESSED:
	{
		lv_obj_add_flag(guider_ui.screen_img_1, LV_OBJ_FLAG_HIDDEN);
		break;
	}
	default:
		break;
	}
}
void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen, screen_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_img_21, screen_img_21_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_2, screen_frame_2_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_1, screen_frame_1_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_4, screen_frame_4_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_3, screen_frame_3_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_5, screen_frame_5_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_7, screen_frame_7_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_6, screen_frame_6_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_frame_8, screen_frame_8_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_img_20, screen_img_20_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_img_1, screen_img_1_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{

}
