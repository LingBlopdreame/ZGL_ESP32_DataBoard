// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_dataShow0;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_ADCValue0;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_channel0;
extern lv_obj_t * ui_flag0;
extern lv_obj_t * ui_dataShow1;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_ADCValue1;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_channel1;
extern lv_obj_t * ui_flag1;
extern lv_obj_t * ui_dataShow2;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_ADCValue2;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_channel2;
extern lv_obj_t * ui_flag2;
extern lv_obj_t * ui_dataShow3;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_ADCValue3;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_channel3;
extern lv_obj_t * ui_flag3;
extern lv_obj_t * ui_title1;
extern lv_obj_t * ui_title2;
extern lv_obj_t * ui_Button;
extern lv_obj_t * ui_buttonLabel;
extern lv_obj_t * ui_channel4;
extern lv_obj_t * ui_amplitude;
extern lv_obj_t * ui_frequency;
extern lv_obj_t * ui_labelApm;
extern lv_obj_t * ui_labelFre;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_settingButton;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_WIFIIcon;
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Keyboard1;
extern lv_obj_t * ui_ConnectButton;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_SSID;
extern lv_obj_t * ui_passwordText;
extern lv_obj_t * ui_refreshButton;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_backButton;
extern lv_obj_t * ui_Image3;

void connectWifiFunc(lv_event_t * e);
void ssidRefreshFucn(lv_event_t * e);

LV_IMG_DECLARE(ui_img_settings_png);    // assets\settings.png
LV_IMG_DECLARE(ui_img_nowifi_png);    // assets\nowifi.png
LV_IMG_DECLARE(ui_img_wlan_png);    // assets\wlan.png
LV_IMG_DECLARE(ui_img_refresh_png);    // assets\refresh.png
LV_IMG_DECLARE(ui_img_back_png);    // assets\back.png


LV_FONT_DECLARE(ui_font_seguisb12);
LV_FONT_DECLARE(ui_font_seguisb16);
LV_FONT_DECLARE(ui_font_seguisb20);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
