

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "ui_helpers.h"
#include "ui_events.h"
void A0logo_in_Animation(lv_obj_t * TargetObject, int delay);
void A0_label_Animation(lv_obj_t * TargetObject, int delay);
void A1Rs_Animation(lv_obj_t * TargetObject, int delay);
void A1showM_Animation(lv_obj_t * TargetObject, int delay);
void A1showH_Animation(lv_obj_t * TargetObject, int delay);
void A2_top_Animation(lv_obj_t * TargetObject, int delay);
void A2_bottom_Animation(lv_obj_t * TargetObject, int delay);
void A3_pos1_Animation(lv_obj_t * TargetObject, int delay);
void A3_top_in_Animation(lv_obj_t * TargetObject, int delay);
void A3_top_bottom_Animation(lv_obj_t * TargetObject, int delay);
void A7_0_Animation(lv_obj_t * TargetObject, int delay);
void A5_0_Animation(lv_obj_t * TargetObject, int delay);
void A5_1_Animation(lv_obj_t * TargetObject, int delay);
void A6_0_Animation(lv_obj_t * TargetObject, int delay);
void A6_1_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Screen3(lv_event_t * e);
extern lv_obj_t * ui_Screen3;
void ui_event_Screen1(lv_event_t * e);
void ui_change_play_icon1(lv_event_t * e);
void ui_change_play_icon2(lv_event_t * e);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Smart_Watch;
extern lv_obj_t * ui_Image8;
void ui_event_Screen2(lv_event_t * e);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_Image5;
void ui_event_Screen4(lv_event_t * e);
extern lv_obj_t * ui_Screen4;
extern lv_obj_t * ui_Image9;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label5;
void ui_event_Screen7(lv_event_t * e);
extern lv_obj_t * ui_Screen7;
extern lv_obj_t * ui_Image12;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_Arc3;
void ui_event_Screen11(lv_event_t * e);
extern lv_obj_t * ui_Screen11;
extern lv_obj_t * ui_Image16;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Image18;
extern lv_obj_t * ui_Image17;
extern lv_obj_t * ui_Label7;
void ui_event_Screen5(lv_event_t * e);
extern lv_obj_t * ui_Screen5;
extern lv_obj_t * ui_Image10;
extern lv_obj_t * ui_Image19;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_Image20;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
void ui_event_Screen6(lv_event_t * e);
extern lv_obj_t * ui_Screen6;
extern lv_obj_t * ui_Image11;
extern lv_obj_t * ui_Button7;
extern lv_obj_t * ui_Arc2;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_Label13;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Image24;
void ui_event_Screen8(lv_event_t * e);
extern lv_obj_t * ui_Screen8;
extern lv_obj_t * ui_Image13;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Label15;
extern lv_obj_t * ui_Image21;
extern lv_obj_t * ui_Label16;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label18;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
void ui_event_Screen9(lv_event_t * e);
extern lv_obj_t * ui_Screen9;
extern lv_obj_t * ui_Image14;
extern lv_obj_t * ui_Image22;
extern lv_obj_t * ui_Label19;
void ui_event_Button4(lv_event_t * e);
extern lv_obj_t * ui_Button4;
void ui_event_Screen10(lv_event_t * e);
extern lv_obj_t * ui_Screen10;
extern lv_obj_t * ui_Image7;
extern lv_obj_t * ui_Image23;
extern lv_obj_t * ui_Label20;
extern lv_obj_t * ui_Label21;
extern lv_obj_t * ui_Label22;
void ui_event_Button5(lv_event_t * e);
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_watch_back_0_png);    // assets\watch_back_0.png
LV_IMG_DECLARE(ui_img_watch_logo_png);    // assets\watch_logo.png
LV_IMG_DECLARE(ui_img_watch_back_1_png);    // assets\watch_back_1.png
LV_IMG_DECLARE(ui_img_watch_back_1_m_png);    // assets\watch_back_1_m.png
LV_IMG_DECLARE(ui_img_watch_back_1_s_png);    // assets\watch_back_1_s.png
LV_IMG_DECLARE(ui_img_watch_back_1_h_png);    // assets\watch_back_1_h.png
LV_IMG_DECLARE(ui_img_watch_back_4_png);    // assets\watch_back_4.png
LV_IMG_DECLARE(ui_img_watch_back_5_png);    // assets\watch_back_5.png
LV_IMG_DECLARE(ui_img_watch_back_9_png);    // assets\watch_back_9.png
LV_IMG_DECLARE(ui_img_watch_back_9_2_png);    // assets\watch_back_9_2.png
LV_IMG_DECLARE(ui_img_watch_back_9_1_png);    // assets\watch_back_9_1.png
LV_IMG_DECLARE(ui_img_watch_back_2_png);    // assets\watch_back_2.png
LV_IMG_DECLARE(ui_img_watch_back_2_2_png);    // assets\watch_back_2_2.png
LV_IMG_DECLARE(ui_img_watch_back_2_1_png);    // assets\watch_back_2_1.png
LV_IMG_DECLARE(ui_img_watch_back_3_png);    // assets\watch_back_3.png
LV_IMG_DECLARE(ui_img_watch_back_3_0_png);    // assets\watch_back_3_0.png
LV_IMG_DECLARE(ui_img_watch_back_6_png);    // assets\watch_back_6.png
LV_IMG_DECLARE(ui_img_watch_back_6_1_png);    // assets\watch_back_6_1.png
LV_IMG_DECLARE(ui_img_watch_back_7_png);    // assets\watch_back_7.png
LV_IMG_DECLARE(ui_img_watch_back_7_1_png);    // assets\watch_back_7_1.png
LV_IMG_DECLARE(ui_img_watch_back_8_png);    // assets\watch_back_8.png
LV_IMG_DECLARE(ui_img_watch_back_8_1_png);    // assets\watch_back_8_1.png


LV_FONT_DECLARE(ui_font_FontBottom);
LV_FONT_DECLARE(ui_font_FontTop);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
