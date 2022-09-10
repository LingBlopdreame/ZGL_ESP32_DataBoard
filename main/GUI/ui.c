// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_dataShow0;
lv_obj_t * ui_Label2;
lv_obj_t * ui_ADCValue0;
lv_obj_t * ui_Label3;
lv_obj_t * ui_channel0;
lv_obj_t * ui_flag0;
lv_obj_t * ui_dataShow1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_ADCValue1;
lv_obj_t * ui_Label4;
lv_obj_t * ui_channel1;
lv_obj_t * ui_flag1;
lv_obj_t * ui_dataShow2;
lv_obj_t * ui_Label5;
lv_obj_t * ui_ADCValue2;
lv_obj_t * ui_Label6;
lv_obj_t * ui_channel2;
lv_obj_t * ui_flag2;
lv_obj_t * ui_dataShow3;
lv_obj_t * ui_Label7;
lv_obj_t * ui_ADCValue3;
lv_obj_t * ui_Label8;
lv_obj_t * ui_channel3;
lv_obj_t * ui_flag3;
lv_obj_t * ui_title1;
lv_obj_t * ui_title2;
lv_obj_t * ui_Button;
lv_obj_t * ui_buttonLabel;
lv_obj_t * ui_channel4;
lv_obj_t * ui_amplitude;
lv_obj_t * ui_frequency;
lv_obj_t * ui_labelApm;
lv_obj_t * ui_labelFre;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Label11;
lv_obj_t * ui_settingButton;
lv_obj_t * ui_Image2;
lv_obj_t * ui_WIFIIcon;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Keyboard1;
lv_obj_t * ui_ConnectButton;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Label13;
lv_obj_t * ui_SSID;
lv_obj_t * ui_passwordText;
lv_obj_t * ui_refreshButton;
lv_obj_t * ui_Image1;
lv_obj_t * ui_backButton;
lv_obj_t * ui_Image3;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_settingButton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
//    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 100, 0);
    }
}
static void ui_event_ConnectButton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
//    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        connectWifiFunc(e);
    }
}
static void ui_event_refreshButton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
//    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        ssidRefreshFunc(e);
    }
}
static void ui_event_backButton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
//    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_NONE, 100, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_text_color(ui_Screen1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_dataShow0

    ui_dataShow0 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_dataShow0, 241);
    lv_obj_set_height(ui_dataShow0, 40);

    lv_obj_set_x(ui_dataShow0, 16);
    lv_obj_set_y(ui_dataShow0, lv_pct(28));

    lv_obj_clear_flag(ui_dataShow0, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_dataShow0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dataShow0, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dataShow0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_dataShow0, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_dataShow0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_dataShow0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_dataShow0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_dataShow0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_dataShow0);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 0);

    lv_obj_set_align(ui_Label2, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label2, "ADC Value: ");

    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ADCValue0

    ui_ADCValue0 = lv_label_create(ui_dataShow0);

    lv_obj_set_width(ui_ADCValue0, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ADCValue0, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_ADCValue0, 0);
    lv_obj_set_x(ui_ADCValue0, lv_pct(-55));

    lv_obj_set_align(ui_ADCValue0, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_ADCValue0, "0000");

    lv_obj_set_style_text_color(ui_ADCValue0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ADCValue0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ADCValue0, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ADCValue0, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ADCValue0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ADCValue0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ADCValue0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ADCValue0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_dataShow0);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Label3, 0);
    lv_obj_set_x(ui_Label3, lv_pct(-44));

    lv_obj_set_align(ui_Label3, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label3, "mV");

    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_channel0

    ui_channel0 = lv_dropdown_create(ui_dataShow0);
    lv_dropdown_set_options(ui_channel0, "None\nGPIO34\nGPIO35");

    lv_obj_set_width(ui_channel0, 71);
    lv_obj_set_height(ui_channel0, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_channel0, 0);
    lv_obj_set_x(ui_channel0, lv_pct(-13));

    lv_obj_set_align(ui_channel0, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_channel0, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_color(ui_channel0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_channel0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_channel0, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_channel0, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_channel0, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_channel0, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_channel0, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_channel0, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_flag0

    ui_flag0 = lv_checkbox_create(ui_dataShow0);
    lv_checkbox_set_text(ui_flag0, "");

    lv_obj_set_width(ui_flag0, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_flag0, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_flag0, 111);
    lv_obj_set_y(ui_flag0, 0);

    lv_obj_set_align(ui_flag0, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_flag0, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    // ui_dataShow1

    ui_dataShow1 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_dataShow1, 241);
    lv_obj_set_height(ui_dataShow1, 40);

    lv_obj_set_x(ui_dataShow1, 16);
    lv_obj_set_y(ui_dataShow1, lv_pct(44));

    lv_obj_clear_flag(ui_dataShow1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_dataShow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dataShow1, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dataShow1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_dataShow1, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_dataShow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_dataShow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_dataShow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_dataShow1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_dataShow1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 0);

    lv_obj_set_align(ui_Label1, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label1, "ADC Value: ");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ADCValue1

    ui_ADCValue1 = lv_label_create(ui_dataShow1);

    lv_obj_set_width(ui_ADCValue1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ADCValue1, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_ADCValue1, 0);
    lv_obj_set_x(ui_ADCValue1, lv_pct(-55));

    lv_obj_set_align(ui_ADCValue1, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_ADCValue1, "0000");

    lv_obj_set_style_text_color(ui_ADCValue1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ADCValue1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ADCValue1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ADCValue1, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ADCValue1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ADCValue1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ADCValue1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ADCValue1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_dataShow1);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Label4, 0);
    lv_obj_set_x(ui_Label4, lv_pct(-44));

    lv_obj_set_align(ui_Label4, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label4, "mV");

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_channel1

    ui_channel1 = lv_dropdown_create(ui_dataShow1);
    lv_dropdown_set_options(ui_channel1, "None\nGPIO34\nGPIO35");

    lv_obj_set_width(ui_channel1, 71);
    lv_obj_set_height(ui_channel1, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_channel1, 0);
    lv_obj_set_x(ui_channel1, lv_pct(-13));

    lv_obj_set_align(ui_channel1, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_channel1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_color(ui_channel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_channel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_channel1, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_channel1, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_channel1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_channel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_channel1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_channel1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_channel1, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_flag1

    ui_flag1 = lv_checkbox_create(ui_dataShow1);
    lv_checkbox_set_text(ui_flag1, "");

    lv_obj_set_width(ui_flag1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_flag1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_flag1, 111);
    lv_obj_set_y(ui_flag1, 0);

    lv_obj_set_align(ui_flag1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_flag1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_flag1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_dataShow2

    ui_dataShow2 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_dataShow2, 241);
    lv_obj_set_height(ui_dataShow2, 40);

    lv_obj_set_x(ui_dataShow2, 16);
    lv_obj_set_y(ui_dataShow2, lv_pct(60));

    lv_obj_clear_flag(ui_dataShow2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_dataShow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dataShow2, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dataShow2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_dataShow2, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_dataShow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_dataShow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_dataShow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_dataShow2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_dataShow2);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 0);

    lv_obj_set_align(ui_Label5, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label5, "ADC Value: ");

    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ADCValue2

    ui_ADCValue2 = lv_label_create(ui_dataShow2);

    lv_obj_set_width(ui_ADCValue2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ADCValue2, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_ADCValue2, 0);
    lv_obj_set_x(ui_ADCValue2, lv_pct(-55));

    lv_obj_set_align(ui_ADCValue2, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_ADCValue2, "0000");

    lv_obj_set_style_text_color(ui_ADCValue2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ADCValue2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ADCValue2, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ADCValue2, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ADCValue2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ADCValue2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ADCValue2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ADCValue2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label6

    ui_Label6 = lv_label_create(ui_dataShow2);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Label6, 0);
    lv_obj_set_x(ui_Label6, lv_pct(-44));

    lv_obj_set_align(ui_Label6, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label6, "mV");

    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_channel2

    ui_channel2 = lv_dropdown_create(ui_dataShow2);
    lv_dropdown_set_options(ui_channel2, "None\nGPIO34\nGPIO35");

    lv_obj_set_width(ui_channel2, 71);
    lv_obj_set_height(ui_channel2, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_channel2, 0);
    lv_obj_set_x(ui_channel2, lv_pct(-13));

    lv_obj_set_align(ui_channel2, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_channel2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_color(ui_channel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_channel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_channel2, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_channel2, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_channel2, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_channel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_channel2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_channel2, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_channel2, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_flag2

    ui_flag2 = lv_checkbox_create(ui_dataShow2);
    lv_checkbox_set_text(ui_flag2, "");

    lv_obj_set_width(ui_flag2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_flag2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_flag2, 111);
    lv_obj_set_y(ui_flag2, 0);

    lv_obj_set_align(ui_flag2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_flag2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_flag2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_dataShow3

    ui_dataShow3 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_dataShow3, 241);
    lv_obj_set_height(ui_dataShow3, 40);

    lv_obj_set_x(ui_dataShow3, 16);
    lv_obj_set_y(ui_dataShow3, lv_pct(76));

    lv_obj_clear_flag(ui_dataShow3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_dataShow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dataShow3, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dataShow3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_dataShow3, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_dataShow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_dataShow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_dataShow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_dataShow3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_dataShow3);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 0);

    lv_obj_set_align(ui_Label7, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label7, "ADC Value: ");

    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ADCValue3

    ui_ADCValue3 = lv_label_create(ui_dataShow3);

    lv_obj_set_width(ui_ADCValue3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_ADCValue3, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_ADCValue3, 0);
    lv_obj_set_x(ui_ADCValue3, lv_pct(-55));

    lv_obj_set_align(ui_ADCValue3, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_ADCValue3, "0000");

    lv_obj_set_style_text_color(ui_ADCValue3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ADCValue3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ADCValue3, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ADCValue3, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ADCValue3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ADCValue3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ADCValue3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ADCValue3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_dataShow3);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_Label8, 0);
    lv_obj_set_x(ui_Label8, lv_pct(-44));

    lv_obj_set_align(ui_Label8, LV_ALIGN_RIGHT_MID);

    lv_label_set_text(ui_Label8, "mV");

    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_channel3

    ui_channel3 = lv_dropdown_create(ui_dataShow3);
    lv_dropdown_set_options(ui_channel3, "None\nGPIO34\nGPIO35");

    lv_obj_set_width(ui_channel3, 71);
    lv_obj_set_height(ui_channel3, LV_SIZE_CONTENT);

    lv_obj_set_y(ui_channel3, 0);
    lv_obj_set_x(ui_channel3, lv_pct(-13));

    lv_obj_set_align(ui_channel3, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_channel3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_color(ui_channel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_channel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_channel3, LV_TEXT_ALIGN_AUTO, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_channel3, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_channel3, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_channel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_channel3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_channel3, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_channel3, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_flag3

    ui_flag3 = lv_checkbox_create(ui_dataShow3);
    lv_checkbox_set_text(ui_flag3, "");

    lv_obj_set_width(ui_flag3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_flag3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_flag3, 111);
    lv_obj_set_y(ui_flag3, 0);

    lv_obj_set_align(ui_flag3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_flag3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_flag3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_title1

    ui_title1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_title1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_title1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_title1, 60);
    lv_obj_set_y(ui_title1, 40);

    lv_label_set_text(ui_title1, "ADC DATA READ");

    lv_obj_set_style_text_color(ui_title1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_title1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_title1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_title1, &ui_font_seguisb16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_title2

    ui_title2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_title2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_title2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_title2, 325);
    lv_obj_set_y(ui_title2, 40);

    lv_label_set_text(ui_title2, "DAC OPTION");

    lv_obj_set_style_text_color(ui_title2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_title2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_title2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_title2, &ui_font_seguisb16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button

    ui_Button = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button, 95);
    lv_obj_set_height(ui_Button, 25);

    lv_obj_set_x(ui_Button, 336);
    lv_obj_set_y(ui_Button, lv_pct(44));

    lv_obj_add_flag(ui_Button, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button, LV_OBJ_FLAG_SCROLLABLE);

    // ui_buttonLabel

    ui_buttonLabel = lv_label_create(ui_Button);

    lv_obj_set_width(ui_buttonLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_buttonLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_buttonLabel, 0);
    lv_obj_set_y(ui_buttonLabel, 0);

    lv_obj_set_align(ui_buttonLabel, LV_ALIGN_CENTER);

    lv_label_set_text(ui_buttonLabel, "Open");

    lv_obj_set_style_text_color(ui_buttonLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_buttonLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_buttonLabel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_buttonLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_buttonLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_buttonLabel, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_channel4

    ui_channel4 = lv_dropdown_create(ui_Screen1);
    lv_dropdown_set_options(ui_channel4, "Channel 0\nChannel 1");

    lv_obj_set_width(ui_channel4, 95);
    lv_obj_set_height(ui_channel4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_channel4, 335);
    lv_obj_set_y(ui_channel4, lv_pct(30));

    lv_obj_add_flag(ui_channel4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_color(ui_channel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_channel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_channel4, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_channel4, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_channel4, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_channel4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_channel4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_channel4, &lv_font_montserrat_12, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_amplitude

    ui_amplitude = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_amplitude, 0, 3);

    lv_obj_set_width(ui_amplitude, 165);
    lv_obj_set_height(ui_amplitude, 5);

    lv_obj_set_x(ui_amplitude, 143);
    lv_obj_set_y(ui_amplitude, 53);

    lv_obj_set_align(ui_amplitude, LV_ALIGN_CENTER);

    // ui_frequency

    ui_frequency = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_frequency, 130, 55000);

    lv_obj_set_width(ui_frequency, 165);
    lv_obj_set_height(ui_frequency, 5);

    lv_obj_set_x(ui_frequency, 143);
    lv_obj_set_y(ui_frequency, 106);

    lv_obj_set_align(ui_frequency, LV_ALIGN_CENTER);

    // ui_labelApm

    ui_labelApm = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_labelApm, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_labelApm, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_labelApm, 143);
    lv_obj_set_y(ui_labelApm, 31);

    lv_obj_set_align(ui_labelApm, LV_ALIGN_CENTER);

    lv_label_set_text(ui_labelApm, "Amplitude");

    lv_obj_set_style_text_color(ui_labelApm, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelApm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_labelApm, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_labelFre

    ui_labelFre = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_labelFre, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_labelFre, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_labelFre, 143);
    lv_obj_set_y(ui_labelFre, 82);

    lv_obj_set_align(ui_labelFre, LV_ALIGN_CENTER);

    lv_label_set_text(ui_labelFre, "Frequency");

    lv_obj_set_style_text_color(ui_labelFre, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_labelFre, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_labelFre, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label9, 170);
    lv_obj_set_height(ui_Label9, 1);

    lv_obj_set_x(ui_Label9, 48);
    lv_obj_set_y(ui_Label9, 66);

    lv_label_set_text(ui_Label9, "");

    lv_obj_set_style_radius(ui_Label9, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label9, lv_color_hex(0x818181), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Label9, 180, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label10

    ui_Label10 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label10, 134);
    lv_obj_set_height(ui_Label10, 1);

    lv_obj_set_x(ui_Label10, 315);
    lv_obj_set_y(ui_Label10, 66);

    lv_label_set_text(ui_Label10, "");

    lv_obj_set_style_radius(ui_Label10, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label10, lv_color_hex(0x818181), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Label10, 180, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label11

    ui_Label11 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label11, 1);
    lv_obj_set_height(ui_Label11, 195);

    lv_obj_set_x(ui_Label11, 272);
    lv_obj_set_y(ui_Label11, 86);

    lv_label_set_text(ui_Label11, "");

    lv_obj_set_style_radius(ui_Label11, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label11, lv_color_hex(0x818181), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Label11, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_settingButton

    ui_settingButton = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_settingButton, 32);
    lv_obj_set_height(ui_settingButton, 32);

    lv_obj_set_x(ui_settingButton, 221);
    lv_obj_set_y(ui_settingButton, -141);

    lv_obj_set_align(ui_settingButton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_settingButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_settingButton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_settingButton, ui_event_settingButton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_settingButton, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_settingButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_settingButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_settingButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_settingButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image2

    ui_Image2 = lv_img_create(ui_settingButton);
    lv_img_set_src(ui_Image2, &ui_img_settings_png);

    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image2, 0);
    lv_obj_set_y(ui_Image2, 0);

    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_WIFIIcon

    ui_WIFIIcon = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_WIFIIcon, &ui_img_nowifi_png);

    lv_obj_set_width(ui_WIFIIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_WIFIIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_WIFIIcon, 187);
    lv_obj_set_y(ui_WIFIIcon, -141);

    lv_obj_set_align(ui_WIFIIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_WIFIIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_WIFIIcon, LV_OBJ_FLAG_SCROLLABLE);

}
void ui_Screen2_screen_init(void)
{

    // ui_Screen2

    ui_Screen2 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Keyboard1

    ui_Keyboard1 = lv_keyboard_create(ui_Screen2);

    lv_obj_set_width(ui_Keyboard1, 480);
    lv_obj_set_height(ui_Keyboard1, 150);

    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 82);

    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_set_style_text_font(ui_Keyboard1, &lv_font_montserrat_16, LV_PART_ITEMS | LV_STATE_DEFAULT);

    // ui_ConnectButton

    ui_ConnectButton = lv_btn_create(ui_Screen2);

    lv_obj_set_width(ui_ConnectButton, 96);
    lv_obj_set_height(ui_ConnectButton, 32);

    lv_obj_set_x(ui_ConnectButton, 158);
    lv_obj_set_y(ui_ConnectButton, -37);

    lv_obj_set_align(ui_ConnectButton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_ConnectButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_ConnectButton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_ConnectButton, ui_event_ConnectButton, LV_EVENT_ALL, NULL);

    // ui_Label14

    ui_Label14 = lv_label_create(ui_ConnectButton);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 0);

    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label14, "Connect");

    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_Label14, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_Label14, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel1

    ui_Panel1 = lv_obj_create(ui_Screen2);

    lv_obj_set_width(ui_Panel1, 266);
    lv_obj_set_height(ui_Panel1, 99);

    lv_obj_set_x(ui_Panel1, -40);
    lv_obj_set_y(ui_Panel1, -60);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel1, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label12

    ui_Label12 = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 23);

    lv_obj_set_align(ui_Label12, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label12, "Password: ");

    lv_obj_set_style_text_font(ui_Label12, &ui_font_seguisb20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label13

    ui_Label13 = lv_label_create(ui_Panel1);

    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label13, 0);
    lv_obj_set_y(ui_Label13, -23);

    lv_obj_set_align(ui_Label13, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_Label13, "SSID: ");

    lv_obj_set_style_text_font(ui_Label13, &ui_font_seguisb20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SSID

    ui_SSID = lv_dropdown_create(ui_Panel1);
    lv_dropdown_set_options(ui_SSID, "None");

    lv_obj_set_width(ui_SSID, 160);
    lv_obj_set_height(ui_SSID, 40);

    lv_obj_set_x(ui_SSID, 0);
    lv_obj_set_y(ui_SSID, -23);

    lv_obj_set_align(ui_SSID, LV_ALIGN_RIGHT_MID);

    lv_obj_add_flag(ui_SSID, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_text_font(ui_SSID, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_SSID, &lv_font_montserrat_16, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_passwordText

    ui_passwordText = lv_textarea_create(ui_Panel1);

    lv_obj_set_width(ui_passwordText, 160);
    lv_obj_set_height(ui_passwordText, 40);

    lv_obj_set_x(ui_passwordText, 0);
    lv_obj_set_y(ui_passwordText, 23);

    lv_obj_set_align(ui_passwordText, LV_ALIGN_RIGHT_MID);

//    if("" == "") lv_textarea_set_accepted_chars(ui_passwordText, NULL);
//    else lv_textarea_set_accepted_chars(ui_passwordText, "");

    lv_textarea_set_text(ui_passwordText, "");
    lv_textarea_set_placeholder_text(ui_passwordText, "Password");
    lv_textarea_set_password_mode(ui_passwordText, true);

    lv_obj_set_style_text_font(ui_passwordText, &ui_font_seguisb12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_passwordText, &ui_font_seguisb12, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_passwordText, &ui_font_seguisb12, LV_PART_CURSOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_passwordText, &ui_font_seguisb12, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);

    // ui_refreshButton

    ui_refreshButton = lv_btn_create(ui_Screen2);

    lv_obj_set_width(ui_refreshButton, 32);
    lv_obj_set_height(ui_refreshButton, 32);

    lv_obj_set_x(ui_refreshButton, 130);
    lv_obj_set_y(ui_refreshButton, -82);

    lv_obj_set_align(ui_refreshButton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_refreshButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_refreshButton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_refreshButton, ui_event_refreshButton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_refreshButton, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_refreshButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_refreshButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_refreshButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_refreshButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_refreshButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image1

    ui_Image1 = lv_img_create(ui_refreshButton);
    lv_img_set_src(ui_Image1, &ui_img_refresh_png);

    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image1, 0);
    lv_obj_set_y(ui_Image1, 0);

    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_backButton

    ui_backButton = lv_btn_create(ui_Screen2);

    lv_obj_set_width(ui_backButton, 32);
    lv_obj_set_height(ui_backButton, 32);

    lv_obj_set_x(ui_backButton, -221);
    lv_obj_set_y(ui_backButton, -141);

    lv_obj_set_align(ui_backButton, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_backButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_backButton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_backButton, ui_event_backButton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_backButton, lv_color_hex(0xF6F6F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_backButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_backButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_backButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_backButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image3

    ui_Image3 = lv_img_create(ui_backButton);
    lv_img_set_src(ui_Image3, &ui_img_back_png);

    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image3, 0);
    lv_obj_set_y(ui_Image3, 0);

    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard1, ui_passwordText);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

