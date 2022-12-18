// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: POS

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void FadeOn_Animation(lv_obj_t * TargetObject, int delay);
void BGOn_Animation(lv_obj_t * TargetObject, int delay);
void FadeOnOpa_Animation(lv_obj_t * TargetObject, int delay);
void FadeOnUp_Animation(lv_obj_t * TargetObject, int delay);
void FadeOff_Animation(lv_obj_t * TargetObject, int delay);
void Keyboard_Animation(lv_obj_t * TargetObject, int delay);
void BGAnim_Animation(lv_obj_t * TargetObject, int delay);
void Ready_Animation(lv_obj_t * TargetObject, int delay);
void ReadyOpa_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_POS_S1(lv_event_t * e);
lv_obj_t * ui_POS_S1;
lv_obj_t * ui_IMG_S1_BG;
lv_obj_t * ui_Circle_1;
lv_obj_t * ui_Circle_2;
lv_obj_t * ui_IMG_POS;
lv_obj_t * ui_Label_card_and_crypto;
lv_obj_t * ui_Label_Lets_get;
void ui_event_BTN_Next(lv_event_t * e);
lv_obj_t * ui_BTN_Next;
lv_obj_t * ui_IMG_Arrow;
void ui_event_POS_S2(lv_event_t * e);
lv_obj_t * ui_POS_S2;
lv_obj_t * ui_IMG_S2_Bg_1;
lv_obj_t * ui_IMG_S2_Bg_2;
lv_obj_t * ui_Label_Enter_Amount;
lv_obj_t * ui_Label_Want_to_pay;
lv_obj_t * ui_Panel_Amount;
lv_obj_t * ui_TextArea1;
lv_obj_t * ui_Panel_Amount_table;
lv_obj_t * ui_Label_Amount_1;
lv_obj_t * ui_Label_Amount_Pirce;
void ui_event_BTN_Continue(lv_event_t * e);
lv_obj_t * ui_BTN_Continue;
lv_obj_t * ui_Label_Continue;
lv_obj_t * ui_Keyboard1;
void ui_event_POS_S3(lv_event_t * e);
lv_obj_t * ui_POS_S3;
lv_obj_t * ui_IMG_S2_Bg_3;
lv_obj_t * ui_IMG_S2_Bg_4;
lv_obj_t * ui_Label_Select_Payment;
lv_obj_t * ui_Label_Ony_BTC;
lv_obj_t * ui_Panel_List_BTC;
void ui_event_Panel_List_Bg(lv_event_t * e);
lv_obj_t * ui_Panel_List_Bg;
lv_obj_t * ui_Panel_BTC_table;
lv_obj_t * ui_Label_Bitcoin;
lv_obj_t * ui_Label_BTC;
lv_obj_t * ui_IMG_BTC;
lv_obj_t * ui_IMG_Arrow_List_1;
lv_obj_t * ui_Panel_List_ETH;
lv_obj_t * ui_Panel_List_Bg1;
lv_obj_t * ui_Label_ETH;
lv_obj_t * ui_IMG_ETH;
lv_obj_t * ui_IMG_Arrow_List_2;
lv_obj_t * ui_Panel_ETH_table;
lv_obj_t * ui_Label_Ethereum;
lv_obj_t * ui_Panel_List_XRP;
lv_obj_t * ui_Panel_List_Bg2;
lv_obj_t * ui_Label_XRP;
lv_obj_t * ui_IMG_XRP;
lv_obj_t * ui_IMG_Arrow_List_3;
lv_obj_t * ui_Panel_XRP_table;
lv_obj_t * ui_Label_Ripple;
lv_obj_t * ui_Panel_List_Card;
lv_obj_t * ui_Panel_List_Bg3;
lv_obj_t * ui_Label_Card;
lv_obj_t * ui_IMG_XRP1;
lv_obj_t * ui_IMG_Arrow_List_4;
lv_obj_t * ui_Panel_Caed_table;
lv_obj_t * ui_Label_Card1;
void ui_event_POS_S4(lv_event_t * e);
lv_obj_t * ui_POS_S4;
lv_obj_t * ui_IMG_S2_Bg_5;
lv_obj_t * ui_IMG_S2_Bg_6;
lv_obj_t * ui_Label_Amount_Pirce2;
lv_obj_t * ui_Label_Amount_Title;
lv_obj_t * ui_Label_QR_ready;
void ui_event_IMG_QR_Code(lv_event_t * e);
lv_obj_t * ui_IMG_QR_Code;
lv_obj_t * ui_Label_BTC_Address;
void ui_event_Label_Cancel(lv_event_t * e);
lv_obj_t * ui_Label_Cancel;
void ui_event_POS_S5(lv_event_t * e);
lv_obj_t * ui_POS_S5;
lv_obj_t * ui_IMG_S5_BG;
lv_obj_t * ui_IMG_Ok_1;
lv_obj_t * ui_IMG_Ok_2;
lv_obj_t * ui_Label_Succesful;
lv_obj_t * ui_Label_press_contimue;
void ui_event_BTN_Next_2(lv_event_t * e);
lv_obj_t * ui_BTN_Next_2;
lv_obj_t * ui_IMG_Arrow1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void FadeOn_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -20, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_1);

}
void BGOn_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

}
void FadeOnOpa_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 30);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -30, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_1);

}
void FadeOnUp_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 20, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_start(&PropertyAnimation_1);

}
void FadeOff_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);

}
void Keyboard_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_height);
    lv_anim_set_values(&PropertyAnimation_1, 150, 220);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}
void BGAnim_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 4000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_1, 300, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_1);

}
void Ready_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 400);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_1, -450, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);

}
void ReadyOpa_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 150);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 150, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 300);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);
    lv_anim_t PropertyAnimation_2;
    lv_anim_init(&PropertyAnimation_2);
    lv_anim_set_time(&PropertyAnimation_2, 1000);
    lv_anim_set_user_data(&PropertyAnimation_2, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_2, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_2, 255, 500);
    lv_anim_set_path_cb(&PropertyAnimation_2, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_2, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_2, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_2, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_2, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_2, 0);
    lv_anim_set_early_apply(&PropertyAnimation_2, false);
    lv_anim_start(&PropertyAnimation_2);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_POS_S1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        BGAnim_Animation(ui_IMG_S1_BG, 0);
        FadeOnOpa_Animation(ui_Circle_2, 50);
        FadeOnUp_Animation(ui_Circle_1, 200);
        FadeOn_Animation(ui_IMG_POS, 350);
        FadeOnUp_Animation(ui_Label_card_and_crypto, 0);
        FadeOnUp_Animation(ui_Label_Lets_get, 150);
        FadeOnUp_Animation(ui_BTN_Next, 300);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        FadeOff_Animation(ui_IMG_S1_BG, 0);
        FadeOff_Animation(ui_Circle_1, 50);
        FadeOff_Animation(ui_IMG_POS, 150);
        FadeOff_Animation(ui_Label_card_and_crypto, 200);
        FadeOff_Animation(ui_Label_Lets_get, 250);
        _ui_opacity_set(ui_Circle_2, 0);
        FadeOff_Animation(ui_BTN_Next, 300);
    }
}
void ui_event_BTN_Next(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_POS_S2, LV_SCR_LOAD_ANIM_FADE_ON, 50, 400);
    }
}
void ui_event_POS_S2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        BGOn_Animation(ui_IMG_S2_Bg_1, 0);
        BGOn_Animation(ui_IMG_S2_Bg_2, 100);
        FadeOn_Animation(ui_Label_Enter_Amount, 0);
        FadeOn_Animation(ui_Label_Want_to_pay, 100);
        FadeOn_Animation(ui_Panel_Amount, 150);
        FadeOnUp_Animation(ui_BTN_Continue, 200);
        Keyboard_Animation(ui_POS_S1, 250);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        FadeOff_Animation(ui_IMG_S2_Bg_1, 0);
        FadeOff_Animation(ui_IMG_S2_Bg_2, 100);
        FadeOff_Animation(ui_POS_S1, 0);
        FadeOff_Animation(ui_BTN_Continue, 100);
        FadeOff_Animation(ui_Panel_Amount, 150);
        FadeOff_Animation(ui_Label_Want_to_pay, 200);
        FadeOff_Animation(ui_Label_Enter_Amount, 250);
    }
}
void ui_event_BTN_Continue(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_POS_S3, LV_SCR_LOAD_ANIM_FADE_ON, 50, 400);
    }
}
void ui_event_POS_S3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        BGOn_Animation(ui_IMG_S2_Bg_3, 0);
        BGOn_Animation(ui_IMG_S2_Bg_4, 200);
        FadeOn_Animation(ui_Label_Select_Payment, 0);
        FadeOn_Animation(ui_Label_Ony_BTC, 100);
        FadeOnUp_Animation(ui_Panel_List_Card, 0);
        FadeOnUp_Animation(ui_Panel_List_XRP, 100);
        FadeOnUp_Animation(ui_Panel_List_ETH, 200);
        FadeOnUp_Animation(ui_Panel_List_BTC, 300);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        FadeOff_Animation(ui_IMG_S2_Bg_3, 0);
        FadeOff_Animation(ui_IMG_S2_Bg_4, 100);
        FadeOff_Animation(ui_Label_Select_Payment, 0);
        FadeOff_Animation(ui_Label_Ony_BTC, 50);
        FadeOff_Animation(ui_Panel_List_BTC, 100);
        FadeOff_Animation(ui_Panel_List_ETH, 150);
        FadeOff_Animation(ui_Panel_List_XRP, 200);
        FadeOff_Animation(ui_Panel_List_Card, 250);
    }
}
void ui_event_Panel_List_Bg(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_POS_S4, LV_SCR_LOAD_ANIM_FADE_ON, 50, 400);
    }
}
void ui_event_POS_S4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        BGOn_Animation(ui_IMG_S2_Bg_5, 0);
        BGOn_Animation(ui_IMG_S2_Bg_6, 200);
        FadeOn_Animation(ui_Label_Amount_Title, 0);
        FadeOn_Animation(ui_Label_Amount_Pirce2, 100);
        FadeOn_Animation(ui_Label_QR_ready, 150);
        FadeOnUp_Animation(ui_IMG_QR_Code, 200);
        FadeOnUp_Animation(ui_Label_Cancel, 0);
        FadeOnUp_Animation(ui_Label_BTC_Address, 100);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        FadeOff_Animation(ui_IMG_S2_Bg_5, 0);
        FadeOff_Animation(ui_IMG_S2_Bg_6, 100);
        FadeOff_Animation(ui_Label_Amount_Title, 0);
        FadeOff_Animation(ui_Label_Amount_Pirce2, 50);
        FadeOff_Animation(ui_Label_QR_ready, 100);
        FadeOff_Animation(ui_IMG_QR_Code, 150);
        FadeOff_Animation(ui_Label_BTC_Address, 200);
        FadeOff_Animation(ui_Label_Cancel, 250);
    }
}
void ui_event_IMG_QR_Code(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_POS_S5, LV_SCR_LOAD_ANIM_FADE_ON, 50, 400);
    }
}
void ui_event_Label_Cancel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_POS_S1, LV_SCR_LOAD_ANIM_FADE_ON, 50, 400);
    }
}
void ui_event_POS_S5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        BGAnim_Animation(ui_IMG_S5_BG, 0);
        Ready_Animation(ui_IMG_Ok_2, 200);
        ReadyOpa_Animation(ui_IMG_Ok_1, 300);
        FadeOnUp_Animation(ui_BTN_Next_2, 0);
        FadeOnUp_Animation(ui_Label_press_contimue, 100);
        FadeOnUp_Animation(ui_Label_Succesful, 200);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        FadeOff_Animation(ui_IMG_S5_BG, 0);
        FadeOff_Animation(ui_IMG_Ok_2, 50);
        FadeOff_Animation(ui_Label_Succesful, 100);
        FadeOff_Animation(ui_Label_press_contimue, 150);
        FadeOff_Animation(ui_BTN_Next_2, 200);
    }
}
void ui_event_BTN_Next_2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_POS_S1, LV_SCR_LOAD_ANIM_FADE_ON, 50, 400);
    }
}

///////////////////// SCREENS ////////////////////
void ui_POS_S1_screen_init(void)
{
    ui_POS_S1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_POS_S1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_POS_S1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_POS_S1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S1_BG = lv_img_create(ui_POS_S1);
    lv_img_set_src(ui_IMG_S1_BG, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S1_BG, 272);
    lv_obj_set_height(ui_IMG_S1_BG, 336);
    lv_obj_set_align(ui_IMG_S1_BG, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_IMG_S1_BG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S1_BG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_IMG_S1_BG, 136, 168);

    ui_Circle_1 = lv_obj_create(ui_POS_S1);
    lv_obj_set_width(ui_Circle_1, 170);
    lv_obj_set_height(ui_Circle_1, 170);
    lv_obj_set_x(ui_Circle_1, 0);
    lv_obj_set_y(ui_Circle_1, -100);
    lv_obj_set_align(ui_Circle_1, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Circle_1, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Circle_1, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Circle_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Circle_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Circle_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Circle_2 = lv_obj_create(ui_POS_S1);
    lv_obj_set_width(ui_Circle_2, 200);
    lv_obj_set_height(ui_Circle_2, 200);
    lv_obj_set_x(ui_Circle_2, 0);
    lv_obj_set_y(ui_Circle_2, -100);
    lv_obj_set_align(ui_Circle_2, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Circle_2, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Circle_2, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Circle_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Circle_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Circle_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Circle_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Circle_2, 30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_POS = lv_img_create(ui_POS_S1);
    lv_img_set_src(ui_IMG_POS, &ui_img_img_pos_png);
    lv_obj_set_width(ui_IMG_POS, 124);
    lv_obj_set_height(ui_IMG_POS, 165);
    lv_obj_set_x(ui_IMG_POS, 0);
    lv_obj_set_y(ui_IMG_POS, 50);
    lv_obj_set_align(ui_IMG_POS, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_IMG_POS, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_POS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_card_and_crypto = lv_label_create(ui_POS_S1);
    lv_obj_set_width(ui_Label_card_and_crypto, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_card_and_crypto, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_card_and_crypto, 0);
    lv_obj_set_y(ui_Label_card_and_crypto, -150);
    lv_obj_set_align(ui_Label_card_and_crypto, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_card_and_crypto, "Card and Crypto\nPayment Solution");
    lv_obj_set_style_text_color(ui_Label_card_and_crypto, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_card_and_crypto, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_card_and_crypto, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_card_and_crypto, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Lets_get = lv_label_create(ui_POS_S1);
    lv_obj_set_width(ui_Label_Lets_get, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Lets_get, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Lets_get, 0);
    lv_obj_set_y(ui_Label_Lets_get, -110);
    lv_obj_set_align(ui_Label_Lets_get, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_Lets_get, "Let's get to work");
    lv_obj_set_style_text_color(ui_Label_Lets_get, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Lets_get, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Lets_get, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Lets_get, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_Next = lv_obj_create(ui_POS_S1);
    lv_obj_set_width(ui_BTN_Next, 60);
    lv_obj_set_height(ui_BTN_Next, 60);
    lv_obj_set_x(ui_BTN_Next, 0);
    lv_obj_set_y(ui_BTN_Next, -20);
    lv_obj_set_align(ui_BTN_Next, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_radius(ui_BTN_Next, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Next, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Next, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_BTN_Next, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_BTN_Next, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BTN_Next, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Next, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Next, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Next, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Next, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_IMG_Arrow = lv_img_create(ui_BTN_Next);
    lv_img_set_src(ui_IMG_Arrow, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_IMG_Arrow, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_Arrow, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_BTN_Next, ui_event_BTN_Next, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_POS_S1, ui_event_POS_S1, LV_EVENT_ALL, NULL);

}
void ui_POS_S2_screen_init(void)
{
    ui_POS_S2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_POS_S2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_POS_S2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_POS_S2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S2_Bg_1 = lv_img_create(ui_POS_S2);
    lv_img_set_src(ui_IMG_S2_Bg_1, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_1, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_1, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_1, -81);
    lv_obj_set_y(ui_IMG_S2_Bg_1, -267);
    lv_obj_set_align(ui_IMG_S2_Bg_1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_S2_Bg_2 = lv_img_create(ui_POS_S2);
    lv_img_set_src(ui_IMG_S2_Bg_2, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_2, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_2, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_2, 158);
    lv_obj_set_y(ui_IMG_S2_Bg_2, 77);
    lv_obj_set_align(ui_IMG_S2_Bg_2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Enter_Amount = lv_label_create(ui_POS_S2);
    lv_obj_set_width(ui_Label_Enter_Amount, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Enter_Amount, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Enter_Amount, 0);
    lv_obj_set_y(ui_Label_Enter_Amount, 15);
    lv_obj_set_align(ui_Label_Enter_Amount, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Enter_Amount, "Enter\nAmount");
    lv_obj_set_style_text_color(ui_Label_Enter_Amount, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Enter_Amount, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Enter_Amount, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Enter_Amount, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Want_to_pay = lv_label_create(ui_POS_S2);
    lv_obj_set_width(ui_Label_Want_to_pay, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Want_to_pay, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Want_to_pay, 0);
    lv_obj_set_y(ui_Label_Want_to_pay, 70);
    lv_obj_set_align(ui_Label_Want_to_pay, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Want_to_pay, "Enter the amount you want to pay");
    lv_obj_set_style_text_color(ui_Label_Want_to_pay, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Want_to_pay, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Want_to_pay, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Want_to_pay, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_Amount = lv_obj_create(ui_POS_S2);
    lv_obj_set_height(ui_Panel_Amount, 80);
    lv_obj_set_width(ui_Panel_Amount, lv_pct(100));
    lv_obj_set_x(ui_Panel_Amount, 0);
    lv_obj_set_y(ui_Panel_Amount, 106);
    lv_obj_set_align(ui_Panel_Amount, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_Amount, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_Amount, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_Amount, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_Amount, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_Amount, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_Amount, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextArea1 = lv_textarea_create(ui_Panel_Amount);
    lv_obj_set_height(ui_TextArea1, 56);
    lv_obj_set_width(ui_TextArea1, lv_pct(100));
    lv_obj_set_align(ui_TextArea1, LV_ALIGN_CENTER);
    if("0123456789.+-" == "") lv_textarea_set_accepted_chars(ui_TextArea1, NULL);
    else lv_textarea_set_accepted_chars(ui_TextArea1, "0123456789.+-");
    lv_textarea_set_max_length(ui_TextArea1, 16);
    lv_textarea_set_placeholder_text(ui_TextArea1, "1.99");
    lv_obj_set_style_text_font(ui_TextArea1, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TextArea1, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TextArea1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_TextArea1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_TextArea1, 35, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_TextArea1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_TextArea1, 14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_TextArea1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_Amount_table = lv_obj_create(ui_Panel_Amount);
    lv_obj_set_height(ui_Panel_Amount_table, 20);
    lv_obj_set_width(ui_Panel_Amount_table, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_Amount_table, 18);
    lv_obj_set_y(ui_Panel_Amount_table, -10);
    lv_obj_clear_flag(ui_Panel_Amount_table, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_Amount_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_Amount_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_Amount_table, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_Amount_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_Amount_table, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Amount_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Amount_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Amount_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Amount_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Amount_1 = lv_label_create(ui_Panel_Amount_table);
    lv_obj_set_width(ui_Label_Amount_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Amount_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Amount_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Amount_1, "Amount");
    lv_obj_set_style_text_color(ui_Label_Amount_1, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Amount_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Amount_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Amount_1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Amount_Pirce = lv_label_create(ui_Panel_Amount);
    lv_obj_set_width(ui_Label_Amount_Pirce, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Amount_Pirce, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Amount_Pirce, -127);
    lv_obj_set_y(ui_Label_Amount_Pirce, 4);
    lv_obj_set_align(ui_Label_Amount_Pirce, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Amount_Pirce, "$");
    lv_obj_set_style_text_font(ui_Label_Amount_Pirce, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_Continue = lv_obj_create(ui_POS_S2);
    lv_obj_set_width(ui_BTN_Continue, 246);
    lv_obj_set_height(ui_BTN_Continue, 50);
    lv_obj_set_x(ui_BTN_Continue, 0);
    lv_obj_set_y(ui_BTN_Continue, 196);
    lv_obj_set_align(ui_BTN_Continue, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_BTN_Continue, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Continue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_BTN_Continue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_BTN_Continue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BTN_Continue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Continue, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Continue, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Continue, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Continue, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label_Continue = lv_label_create(ui_BTN_Continue);
    lv_obj_set_width(ui_Label_Continue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Continue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Continue, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Continue, "CONTINUE");
    lv_obj_set_style_text_color(ui_Label_Continue, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Continue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Continue, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Continue, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard1 = lv_keyboard_create(ui_POS_S2);
    lv_keyboard_set_mode(ui_Keyboard1, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_height(ui_Keyboard1, 220);
    lv_obj_set_width(ui_Keyboard1, lv_pct(100));
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_event_cb(ui_BTN_Continue, ui_event_BTN_Continue, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard1, ui_TextArea1);
    lv_obj_add_event_cb(ui_POS_S2, ui_event_POS_S2, LV_EVENT_ALL, NULL);

}
void ui_POS_S3_screen_init(void)
{
    ui_POS_S3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_POS_S3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_POS_S3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_POS_S3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S2_Bg_3 = lv_img_create(ui_POS_S3);
    lv_img_set_src(ui_IMG_S2_Bg_3, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_3, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_3, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_3, -114);
    lv_obj_set_y(ui_IMG_S2_Bg_3, -308);
    lv_obj_set_align(ui_IMG_S2_Bg_3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_S2_Bg_4 = lv_img_create(ui_POS_S3);
    lv_img_set_src(ui_IMG_S2_Bg_4, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_4, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_4, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_4, 145);
    lv_obj_set_y(ui_IMG_S2_Bg_4, 214);
    lv_obj_set_align(ui_IMG_S2_Bg_4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Select_Payment = lv_label_create(ui_POS_S3);
    lv_obj_set_width(ui_Label_Select_Payment, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Select_Payment, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Select_Payment, 0);
    lv_obj_set_y(ui_Label_Select_Payment, 15);
    lv_obj_set_align(ui_Label_Select_Payment, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Select_Payment, "Select Payment\nMetod");
    lv_obj_set_style_text_color(ui_Label_Select_Payment, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Select_Payment, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Select_Payment, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Select_Payment, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Ony_BTC = lv_label_create(ui_POS_S3);
    lv_obj_set_width(ui_Label_Ony_BTC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Ony_BTC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Ony_BTC, 0);
    lv_obj_set_y(ui_Label_Ony_BTC, 70);
    lv_obj_set_align(ui_Label_Ony_BTC, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Ony_BTC, "Only BTC payment is possible");
    lv_obj_set_style_text_color(ui_Label_Ony_BTC, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Ony_BTC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Ony_BTC, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Ony_BTC, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_BTC = lv_obj_create(ui_POS_S3);
    lv_obj_set_height(ui_Panel_List_BTC, 84);
    lv_obj_set_width(ui_Panel_List_BTC, lv_pct(100));
    lv_obj_set_x(ui_Panel_List_BTC, 0);
    lv_obj_set_y(ui_Panel_List_BTC, 106);
    lv_obj_set_align(ui_Panel_List_BTC, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_List_BTC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_List_BTC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_BTC, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_BTC, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_BTC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_BTC, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Bg = lv_obj_create(ui_Panel_List_BTC);
    lv_obj_set_height(ui_Panel_List_Bg, 70);
    lv_obj_set_width(ui_Panel_List_Bg, lv_pct(100));
    lv_obj_set_align(ui_Panel_List_Bg, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg, lv_color_hex(0xF1F1F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Bg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_List_Bg, lv_color_hex(0x9B9DA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Bg, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg, lv_color_hex(0xFFCEB0), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_border_color(ui_Panel_List_Bg, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel_BTC_table = lv_obj_create(ui_Panel_List_BTC);
    lv_obj_set_height(ui_Panel_BTC_table, 20);
    lv_obj_set_width(ui_Panel_BTC_table, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_BTC_table, 18);
    lv_obj_set_y(ui_Panel_BTC_table, -10);
    lv_obj_clear_flag(ui_Panel_BTC_table, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_BTC_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_BTC_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_BTC_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_BTC_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_BTC_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_BTC_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_BTC_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Bitcoin = lv_label_create(ui_Panel_BTC_table);
    lv_obj_set_width(ui_Label_Bitcoin, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Bitcoin, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Bitcoin, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Bitcoin, "Bitcoin");
    lv_obj_set_style_text_color(ui_Label_Bitcoin, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Bitcoin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Bitcoin, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Bitcoin, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_BTC = lv_label_create(ui_Panel_List_BTC);
    lv_obj_set_width(ui_Label_BTC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_BTC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_BTC, 68);
    lv_obj_set_y(ui_Label_BTC, 6);
    lv_obj_set_align(ui_Label_BTC, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_BTC, "BTC");
    lv_obj_set_style_text_color(ui_Label_BTC, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_BTC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_BTC, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_BTC, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_BTC = lv_img_create(ui_Panel_List_BTC);
    lv_img_set_src(ui_IMG_BTC, &ui_img_img_btc_png);
    lv_obj_set_width(ui_IMG_BTC, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_BTC, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_BTC, 20);
    lv_obj_set_y(ui_IMG_BTC, 6);
    lv_obj_set_align(ui_IMG_BTC, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_IMG_BTC, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_BTC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_Arrow_List_1 = lv_img_create(ui_Panel_List_BTC);
    lv_img_set_src(ui_IMG_Arrow_List_1, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow_List_1, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow_List_1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_Arrow_List_1, -10);
    lv_obj_set_y(ui_IMG_Arrow_List_1, 6);
    lv_obj_set_align(ui_IMG_Arrow_List_1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_IMG_Arrow_List_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow_List_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_IMG_Arrow_List_1, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_IMG_Arrow_List_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_ETH = lv_obj_create(ui_POS_S3);
    lv_obj_set_height(ui_Panel_List_ETH, 84);
    lv_obj_set_width(ui_Panel_List_ETH, lv_pct(100));
    lv_obj_set_x(ui_Panel_List_ETH, 0);
    lv_obj_set_y(ui_Panel_List_ETH, 195);
    lv_obj_set_align(ui_Panel_List_ETH, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_List_ETH, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_List_ETH, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_ETH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_ETH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_ETH, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_ETH, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Bg1 = lv_obj_create(ui_Panel_List_ETH);
    lv_obj_set_height(ui_Panel_List_Bg1, 70);
    lv_obj_set_width(ui_Panel_List_Bg1, lv_pct(100));
    lv_obj_set_align(ui_Panel_List_Bg1, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg1, lv_color_hex(0xF1F1F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_List_Bg1, lv_color_hex(0x9B9DA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Bg1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel_List_Bg1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_List_Bg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_ETH = lv_label_create(ui_Panel_List_Bg1);
    lv_obj_set_width(ui_Label_ETH, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_ETH, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_ETH, 68);
    lv_obj_set_y(ui_Label_ETH, 0);
    lv_obj_set_align(ui_Label_ETH, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_ETH, "ETH");
    lv_obj_set_style_text_color(ui_Label_ETH, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_ETH, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_ETH, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_ETH, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_ETH = lv_img_create(ui_Panel_List_Bg1);
    lv_img_set_src(ui_IMG_ETH, &ui_img_img_eth_png);
    lv_obj_set_width(ui_IMG_ETH, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_ETH, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_ETH, 20);
    lv_obj_set_y(ui_IMG_ETH, 0);
    lv_obj_set_align(ui_IMG_ETH, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_IMG_ETH, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_ETH, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_Arrow_List_2 = lv_img_create(ui_Panel_List_Bg1);
    lv_img_set_src(ui_IMG_Arrow_List_2, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow_List_2, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow_List_2, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_Arrow_List_2, -10);
    lv_obj_set_y(ui_IMG_Arrow_List_2, 0);
    lv_obj_set_align(ui_IMG_Arrow_List_2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_IMG_Arrow_List_2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow_List_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_IMG_Arrow_List_2, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_IMG_Arrow_List_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_ETH_table = lv_obj_create(ui_Panel_List_ETH);
    lv_obj_set_height(ui_Panel_ETH_table, 20);
    lv_obj_set_width(ui_Panel_ETH_table, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_ETH_table, 18);
    lv_obj_set_y(ui_Panel_ETH_table, -10);
    lv_obj_clear_flag(ui_Panel_ETH_table, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_ETH_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_ETH_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_ETH_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_ETH_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_ETH_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_ETH_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_ETH_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Ethereum = lv_label_create(ui_Panel_ETH_table);
    lv_obj_set_width(ui_Label_Ethereum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Ethereum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Ethereum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Ethereum, "Ethereum");
    lv_obj_set_style_text_color(ui_Label_Ethereum, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Ethereum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Ethereum, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Ethereum, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Label_Ethereum, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_XRP = lv_obj_create(ui_POS_S3);
    lv_obj_set_height(ui_Panel_List_XRP, 84);
    lv_obj_set_width(ui_Panel_List_XRP, lv_pct(100));
    lv_obj_set_x(ui_Panel_List_XRP, 0);
    lv_obj_set_y(ui_Panel_List_XRP, 285);
    lv_obj_set_align(ui_Panel_List_XRP, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_List_XRP, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_List_XRP, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_XRP, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_XRP, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_XRP, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_XRP, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Bg2 = lv_obj_create(ui_Panel_List_XRP);
    lv_obj_set_height(ui_Panel_List_Bg2, 70);
    lv_obj_set_width(ui_Panel_List_Bg2, lv_pct(100));
    lv_obj_set_align(ui_Panel_List_Bg2, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg2, lv_color_hex(0xF1F1F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Bg2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Bg2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_List_Bg2, lv_color_hex(0x9B9DA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Bg2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel_List_Bg2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_List_Bg2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_List_Bg2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_List_Bg2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_List_Bg2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_XRP = lv_label_create(ui_Panel_List_Bg2);
    lv_obj_set_width(ui_Label_XRP, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_XRP, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_XRP, 68);
    lv_obj_set_y(ui_Label_XRP, 0);
    lv_obj_set_align(ui_Label_XRP, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_XRP, "XRP");
    lv_obj_set_style_text_color(ui_Label_XRP, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_XRP, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_XRP, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_XRP, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_XRP = lv_img_create(ui_Panel_List_Bg2);
    lv_img_set_src(ui_IMG_XRP, &ui_img_img_xrp_png);
    lv_obj_set_width(ui_IMG_XRP, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_XRP, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_XRP, 20);
    lv_obj_set_y(ui_IMG_XRP, 0);
    lv_obj_set_align(ui_IMG_XRP, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_IMG_XRP, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_XRP, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_Arrow_List_3 = lv_img_create(ui_Panel_List_Bg2);
    lv_img_set_src(ui_IMG_Arrow_List_3, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow_List_3, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow_List_3, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_Arrow_List_3, -10);
    lv_obj_set_y(ui_IMG_Arrow_List_3, 0);
    lv_obj_set_align(ui_IMG_Arrow_List_3, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_IMG_Arrow_List_3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow_List_3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_IMG_Arrow_List_3, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_IMG_Arrow_List_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_XRP_table = lv_obj_create(ui_Panel_List_XRP);
    lv_obj_set_height(ui_Panel_XRP_table, 20);
    lv_obj_set_width(ui_Panel_XRP_table, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_XRP_table, 18);
    lv_obj_set_y(ui_Panel_XRP_table, -10);
    lv_obj_clear_flag(ui_Panel_XRP_table, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_XRP_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_XRP_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_XRP_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_XRP_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_XRP_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_XRP_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_XRP_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Ripple = lv_label_create(ui_Panel_XRP_table);
    lv_obj_set_width(ui_Label_Ripple, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Ripple, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Ripple, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Ripple, "Ripple");
    lv_obj_set_style_text_color(ui_Label_Ripple, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Ripple, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Ripple, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Ripple, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Label_Ripple, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Card = lv_obj_create(ui_POS_S3);
    lv_obj_set_height(ui_Panel_List_Card, 84);
    lv_obj_set_width(ui_Panel_List_Card, lv_pct(100));
    lv_obj_set_x(ui_Panel_List_Card, 0);
    lv_obj_set_y(ui_Panel_List_Card, 375);
    lv_obj_set_align(ui_Panel_List_Card, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_Panel_List_Card, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel_List_Card, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Card, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_List_Bg3 = lv_obj_create(ui_Panel_List_Card);
    lv_obj_set_height(ui_Panel_List_Bg3, 70);
    lv_obj_set_width(ui_Panel_List_Bg3, lv_pct(100));
    lv_obj_set_align(ui_Panel_List_Bg3, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Panel_List_Bg3, lv_color_hex(0xF1F1F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel_List_Bg3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Panel_List_Bg3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_List_Bg3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel_List_Bg3, lv_color_hex(0x9B9DA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel_List_Bg3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_List_Bg3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel_List_Bg3, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_List_Bg3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_List_Bg3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_List_Bg3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_List_Bg3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Card = lv_label_create(ui_Panel_List_Bg3);
    lv_obj_set_width(ui_Label_Card, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Card, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Card, 68);
    lv_obj_set_y(ui_Label_Card, 0);
    lv_obj_set_align(ui_Label_Card, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label_Card, "Card");
    lv_obj_set_style_text_color(ui_Label_Card, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Card, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Card, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Card, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_XRP1 = lv_img_create(ui_Panel_List_Bg3);
    lv_img_set_src(ui_IMG_XRP1, &ui_img_img_card_png);
    lv_obj_set_width(ui_IMG_XRP1, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_XRP1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_XRP1, 15);
    lv_obj_set_y(ui_IMG_XRP1, 0);
    lv_obj_set_align(ui_IMG_XRP1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_IMG_XRP1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_XRP1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_Arrow_List_4 = lv_img_create(ui_Panel_List_Bg3);
    lv_img_set_src(ui_IMG_Arrow_List_4, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow_List_4, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow_List_4, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_IMG_Arrow_List_4, -10);
    lv_obj_set_y(ui_IMG_Arrow_List_4, 0);
    lv_obj_set_align(ui_IMG_Arrow_List_4, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_IMG_Arrow_List_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow_List_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_IMG_Arrow_List_4, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_IMG_Arrow_List_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel_Caed_table = lv_obj_create(ui_Panel_List_Card);
    lv_obj_set_height(ui_Panel_Caed_table, 20);
    lv_obj_set_width(ui_Panel_Caed_table, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_Panel_Caed_table, 18);
    lv_obj_set_y(ui_Panel_Caed_table, -10);
    lv_obj_clear_flag(ui_Panel_Caed_table, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_Panel_Caed_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Panel_Caed_table, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel_Caed_table, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Panel_Caed_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Panel_Caed_table, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Panel_Caed_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Panel_Caed_table, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Card1 = lv_label_create(ui_Panel_Caed_table);
    lv_obj_set_width(ui_Label_Card1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Card1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label_Card1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Card1, "Card");
    lv_obj_set_style_text_color(ui_Label_Card1, lv_color_hex(0x1D222A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Card1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Card1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Card1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Label_Card1, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Panel_List_Bg, ui_event_Panel_List_Bg, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_POS_S3, ui_event_POS_S3, LV_EVENT_ALL, NULL);

}
void ui_POS_S4_screen_init(void)
{
    ui_POS_S4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_POS_S4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_POS_S4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_POS_S4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S2_Bg_5 = lv_img_create(ui_POS_S4);
    lv_img_set_src(ui_IMG_S2_Bg_5, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_5, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_5, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_5, 95);
    lv_obj_set_y(ui_IMG_S2_Bg_5, -293);
    lv_obj_set_align(ui_IMG_S2_Bg_5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_IMG_S2_Bg_6 = lv_img_create(ui_POS_S4);
    lv_img_set_src(ui_IMG_S2_Bg_6, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S2_Bg_6, 272);
    lv_obj_set_height(ui_IMG_S2_Bg_6, 336);
    lv_obj_set_x(ui_IMG_S2_Bg_6, -178);
    lv_obj_set_y(ui_IMG_S2_Bg_6, 229);
    lv_obj_set_align(ui_IMG_S2_Bg_6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_S2_Bg_6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S2_Bg_6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label_Amount_Pirce2 = lv_label_create(ui_POS_S4);
    lv_obj_set_width(ui_Label_Amount_Pirce2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Amount_Pirce2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Amount_Pirce2, -2);
    lv_obj_set_y(ui_Label_Amount_Pirce2, -186);
    lv_obj_set_align(ui_Label_Amount_Pirce2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label_Amount_Pirce2, "$ 1.99");
    lv_obj_set_style_text_font(ui_Label_Amount_Pirce2, &ui_font_Big_Number, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Amount_Title = lv_label_create(ui_POS_S4);
    lv_obj_set_width(ui_Label_Amount_Title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Amount_Title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Amount_Title, 0);
    lv_obj_set_y(ui_Label_Amount_Title, 15);
    lv_obj_set_align(ui_Label_Amount_Title, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_Amount_Title, "Amount");
    lv_obj_set_style_text_color(ui_Label_Amount_Title, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Amount_Title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Amount_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Amount_Title, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_QR_ready = lv_label_create(ui_POS_S4);
    lv_obj_set_width(ui_Label_QR_ready, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_QR_ready, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_QR_ready, 0);
    lv_obj_set_y(ui_Label_QR_ready, 95);
    lv_obj_set_align(ui_Label_QR_ready, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label_QR_ready, "QR code ready for scanning");
    lv_obj_set_style_text_color(ui_Label_QR_ready, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_QR_ready, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_QR_ready, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_QR_ready, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_QR_Code = lv_img_create(ui_POS_S4);
    lv_img_set_src(ui_IMG_QR_Code, &ui_img_img_qr_png);
    lv_obj_set_width(ui_IMG_QR_Code, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_QR_Code, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_IMG_QR_Code, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_QR_Code, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_QR_Code, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_main_stop(ui_IMG_QR_Code, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_IMG_QR_Code, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_IMG_QR_Code, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_IMG_QR_Code, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_IMG_QR_Code, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_IMG_QR_Code, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Label_BTC_Address = lv_label_create(ui_POS_S4);
    lv_obj_set_width(ui_Label_BTC_Address, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_BTC_Address, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_BTC_Address, 0);
    lv_obj_set_y(ui_Label_BTC_Address, -75);
    lv_obj_set_align(ui_Label_BTC_Address, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_BTC_Address, "138u1Hsm1uGrDA9hG\nzKxeUEkW19Dc6t9Uq");
    lv_obj_set_style_text_color(ui_Label_BTC_Address, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_BTC_Address, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_BTC_Address, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_BTC_Address, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_Cancel = lv_label_create(ui_POS_S4);
    lv_obj_set_width(ui_Label_Cancel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Cancel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Cancel, 0);
    lv_obj_set_y(ui_Label_Cancel, -20);
    lv_obj_set_align(ui_Label_Cancel, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_Cancel, "Cancel Payment");
    lv_obj_add_flag(ui_Label_Cancel, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_Label_Cancel, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Cancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Cancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Cancel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_IMG_QR_Code, ui_event_IMG_QR_Code, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label_Cancel, ui_event_Label_Cancel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_POS_S4, ui_event_POS_S4, LV_EVENT_ALL, NULL);

}
void ui_POS_S5_screen_init(void)
{
    ui_POS_S5 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_POS_S5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_POS_S5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_POS_S5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_S5_BG = lv_img_create(ui_POS_S5);
    lv_img_set_src(ui_IMG_S5_BG, &ui_img_img_bg_1_png);
    lv_obj_set_width(ui_IMG_S5_BG, 272);
    lv_obj_set_height(ui_IMG_S5_BG, 336);
    lv_obj_set_align(ui_IMG_S5_BG, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_IMG_S5_BG, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_S5_BG, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_IMG_S5_BG, 136, 168);

    ui_IMG_Ok_1 = lv_img_create(ui_POS_S5);
    lv_img_set_src(ui_IMG_Ok_1, &ui_img_ok_png);
    lv_obj_set_width(ui_IMG_Ok_1, LV_SIZE_CONTENT);   /// 124
    lv_obj_set_height(ui_IMG_Ok_1, LV_SIZE_CONTENT);    /// 165
    lv_obj_set_x(ui_IMG_Ok_1, 0);
    lv_obj_set_y(ui_IMG_Ok_1, 80);
    lv_obj_set_align(ui_IMG_Ok_1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_IMG_Ok_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Ok_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_IMG_Ok_1, 62, 62);
    lv_obj_set_style_opa(ui_IMG_Ok_1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IMG_Ok_2 = lv_img_create(ui_POS_S5);
    lv_img_set_src(ui_IMG_Ok_2, &ui_img_ok_png);
    lv_obj_set_width(ui_IMG_Ok_2, LV_SIZE_CONTENT);   /// 124
    lv_obj_set_height(ui_IMG_Ok_2, LV_SIZE_CONTENT);    /// 165
    lv_obj_set_x(ui_IMG_Ok_2, 0);
    lv_obj_set_y(ui_IMG_Ok_2, 80);
    lv_obj_set_align(ui_IMG_Ok_2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_IMG_Ok_2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Ok_2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_IMG_Ok_2, 62, 62);

    ui_Label_Succesful = lv_label_create(ui_POS_S5);
    lv_obj_set_width(ui_Label_Succesful, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_Succesful, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_Succesful, 0);
    lv_obj_set_y(ui_Label_Succesful, -150);
    lv_obj_set_align(ui_Label_Succesful, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_Succesful, "Payment\nSuccesful!");
    lv_obj_set_style_text_color(ui_Label_Succesful, lv_color_hex(0x0B1019), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_Succesful, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_Succesful, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_Succesful, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label_press_contimue = lv_label_create(ui_POS_S5);
    lv_obj_set_width(ui_Label_press_contimue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label_press_contimue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label_press_contimue, 0);
    lv_obj_set_y(ui_Label_press_contimue, -110);
    lv_obj_set_align(ui_Label_press_contimue, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Label_press_contimue, "Press to contimue");
    lv_obj_set_style_text_color(ui_Label_press_contimue, lv_color_hex(0x7F848F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label_press_contimue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label_press_contimue, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label_press_contimue, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTN_Next_2 = lv_obj_create(ui_POS_S5);
    lv_obj_set_width(ui_BTN_Next_2, 60);
    lv_obj_set_height(ui_BTN_Next_2, 60);
    lv_obj_set_x(ui_BTN_Next_2, 0);
    lv_obj_set_y(ui_BTN_Next_2, -20);
    lv_obj_set_align(ui_BTN_Next_2, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_radius(ui_BTN_Next_2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTN_Next_2, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTN_Next_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_BTN_Next_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_BTN_Next_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BTN_Next_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_BTN_Next_2, lv_color_hex(0xFF7A28), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(ui_BTN_Next_2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui_BTN_Next_2, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(ui_BTN_Next_2, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_IMG_Arrow1 = lv_img_create(ui_BTN_Next_2);
    lv_img_set_src(ui_IMG_Arrow1, &ui_img_img_arrow_right_png);
    lv_obj_set_width(ui_IMG_Arrow1, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_IMG_Arrow1, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_IMG_Arrow1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_IMG_Arrow1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_IMG_Arrow1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_BTN_Next_2, ui_event_BTN_Next_2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_POS_S5, ui_event_POS_S5, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_POS_S1_screen_init();
    ui_POS_S2_screen_init();
    ui_POS_S3_screen_init();
    ui_POS_S4_screen_init();
    ui_POS_S5_screen_init();
    lv_disp_load_scr(ui_POS_S1);
}
