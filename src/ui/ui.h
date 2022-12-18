// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: POS

#ifndef _POS_UI_H
#define _POS_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

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
extern lv_obj_t * ui_POS_S1;
extern lv_obj_t * ui_IMG_S1_BG;
extern lv_obj_t * ui_Circle_1;
extern lv_obj_t * ui_Circle_2;
extern lv_obj_t * ui_IMG_POS;
extern lv_obj_t * ui_Label_card_and_crypto;
extern lv_obj_t * ui_Label_Lets_get;
void ui_event_BTN_Next(lv_event_t * e);
extern lv_obj_t * ui_BTN_Next;
extern lv_obj_t * ui_IMG_Arrow;
void ui_event_POS_S2(lv_event_t * e);
extern lv_obj_t * ui_POS_S2;
extern lv_obj_t * ui_IMG_S2_Bg_1;
extern lv_obj_t * ui_IMG_S2_Bg_2;
extern lv_obj_t * ui_Label_Enter_Amount;
extern lv_obj_t * ui_Label_Want_to_pay;
extern lv_obj_t * ui_Panel_Amount;
extern lv_obj_t * ui_TextArea1;
extern lv_obj_t * ui_Panel_Amount_table;
extern lv_obj_t * ui_Label_Amount_1;
extern lv_obj_t * ui_Label_Amount_Pirce;
void ui_event_BTN_Continue(lv_event_t * e);
extern lv_obj_t * ui_BTN_Continue;
extern lv_obj_t * ui_Label_Continue;
extern lv_obj_t * ui_Keyboard1;
void ui_event_POS_S3(lv_event_t * e);
extern lv_obj_t * ui_POS_S3;
extern lv_obj_t * ui_IMG_S2_Bg_3;
extern lv_obj_t * ui_IMG_S2_Bg_4;
extern lv_obj_t * ui_Label_Select_Payment;
extern lv_obj_t * ui_Label_Ony_BTC;
extern lv_obj_t * ui_Panel_List_BTC;
void ui_event_Panel_List_Bg(lv_event_t * e);
extern lv_obj_t * ui_Panel_List_Bg;
extern lv_obj_t * ui_Panel_BTC_table;
extern lv_obj_t * ui_Label_Bitcoin;
extern lv_obj_t * ui_Label_BTC;
extern lv_obj_t * ui_IMG_BTC;
extern lv_obj_t * ui_IMG_Arrow_List_1;
extern lv_obj_t * ui_Panel_List_ETH;
extern lv_obj_t * ui_Panel_List_Bg1;
extern lv_obj_t * ui_Label_ETH;
extern lv_obj_t * ui_IMG_ETH;
extern lv_obj_t * ui_IMG_Arrow_List_2;
extern lv_obj_t * ui_Panel_ETH_table;
extern lv_obj_t * ui_Label_Ethereum;
extern lv_obj_t * ui_Panel_List_XRP;
extern lv_obj_t * ui_Panel_List_Bg2;
extern lv_obj_t * ui_Label_XRP;
extern lv_obj_t * ui_IMG_XRP;
extern lv_obj_t * ui_IMG_Arrow_List_3;
extern lv_obj_t * ui_Panel_XRP_table;
extern lv_obj_t * ui_Label_Ripple;
extern lv_obj_t * ui_Panel_List_Card;
extern lv_obj_t * ui_Panel_List_Bg3;
extern lv_obj_t * ui_Label_Card;
extern lv_obj_t * ui_IMG_XRP1;
extern lv_obj_t * ui_IMG_Arrow_List_4;
extern lv_obj_t * ui_Panel_Caed_table;
extern lv_obj_t * ui_Label_Card1;
void ui_event_POS_S4(lv_event_t * e);
extern lv_obj_t * ui_POS_S4;
extern lv_obj_t * ui_IMG_S2_Bg_5;
extern lv_obj_t * ui_IMG_S2_Bg_6;
extern lv_obj_t * ui_Label_Amount_Pirce2;
extern lv_obj_t * ui_Label_Amount_Title;
extern lv_obj_t * ui_Label_QR_ready;
void ui_event_IMG_QR_Code(lv_event_t * e);
extern lv_obj_t * ui_IMG_QR_Code;
extern lv_obj_t * ui_Label_BTC_Address;
void ui_event_Label_Cancel(lv_event_t * e);
extern lv_obj_t * ui_Label_Cancel;
void ui_event_POS_S5(lv_event_t * e);
extern lv_obj_t * ui_POS_S5;
extern lv_obj_t * ui_IMG_S5_BG;
extern lv_obj_t * ui_IMG_Ok_1;
extern lv_obj_t * ui_IMG_Ok_2;
extern lv_obj_t * ui_Label_Succesful;
extern lv_obj_t * ui_Label_press_contimue;
void ui_event_BTN_Next_2(lv_event_t * e);
extern lv_obj_t * ui_BTN_Next_2;
extern lv_obj_t * ui_IMG_Arrow1;


LV_IMG_DECLARE(ui_img_img_bg_1_png);    // assets\IMG_BG_1.png
LV_IMG_DECLARE(ui_img_img_pos_png);    // assets\IMG_pos.png
LV_IMG_DECLARE(ui_img_img_arrow_right_png);    // assets\IMG_arrow_right.png
LV_IMG_DECLARE(ui_img_img_btc_png);    // assets\IMG_BTC.png
LV_IMG_DECLARE(ui_img_img_eth_png);    // assets\IMG_ETH.png
LV_IMG_DECLARE(ui_img_img_xrp_png);    // assets\IMG_XRP.png
LV_IMG_DECLARE(ui_img_img_card_png);    // assets\IMG_Card.png
LV_IMG_DECLARE(ui_img_img_qr_png);    // assets\IMG_QR.png
LV_IMG_DECLARE(ui_img_ok_png);    // assets\ok.png


LV_FONT_DECLARE(ui_font_Big_Number);
LV_FONT_DECLARE(ui_font_Bold_Font);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
