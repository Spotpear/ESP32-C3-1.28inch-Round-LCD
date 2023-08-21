

#include "ui.h"

///////////////////// VARIABLES ////////////////////
void A0logo_in_Animation(lv_obj_t *TargetObject, int delay);
void A0_label_Animation(lv_obj_t *TargetObject, int delay);
void A1Rs_Animation(lv_obj_t *TargetObject, int delay);
void A1showM_Animation(lv_obj_t *TargetObject, int delay);
void A1showH_Animation(lv_obj_t *TargetObject, int delay);
void A2_top_Animation(lv_obj_t *TargetObject, int delay);
void A2_bottom_Animation(lv_obj_t *TargetObject, int delay);
void A3_pos1_Animation(lv_obj_t *TargetObject, int delay);
void A3_top_in_Animation(lv_obj_t *TargetObject, int delay);
void A3_top_bottom_Animation(lv_obj_t *TargetObject, int delay);
void A7_0_Animation(lv_obj_t *TargetObject, int delay);
void A5_0_Animation(lv_obj_t *TargetObject, int delay);
void A5_1_Animation(lv_obj_t *TargetObject, int delay);
void A6_0_Animation(lv_obj_t *TargetObject, int delay);
void A6_1_Animation(lv_obj_t *TargetObject, int delay);
void ui_event_Screen3(lv_event_t *e);
lv_obj_t *ui_Screen3;
void ui_event_Screen1(lv_event_t *e);
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Smart_Watch;
lv_obj_t *ui_Image8;
void ui_event_Screen2(lv_event_t *e);
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Image5;
void ui_event_Screen4(lv_event_t *e);
lv_obj_t *ui_Screen4;
lv_obj_t *ui_Image9;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Label5;
void ui_event_Screen7(lv_event_t *e);
lv_obj_t *ui_Screen7;
lv_obj_t *ui_Image12;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Arc1;
lv_obj_t *ui_Arc3;
void ui_event_Screen11(lv_event_t *e);
lv_obj_t *ui_Screen11;
lv_obj_t *ui_Image16;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Image18;
lv_obj_t *ui_Image17;
lv_obj_t *ui_Label7;
void ui_event_Screen5(lv_event_t *e);
lv_obj_t *ui_Screen5;
lv_obj_t *ui_Image10;
lv_obj_t *ui_Image19;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Image20;
void ui_event_Button2(lv_event_t *e);
lv_obj_t *ui_Button2;
void ui_event_Screen6(lv_event_t *e);
lv_obj_t *ui_Screen6;
lv_obj_t *ui_Image11;
lv_obj_t *ui_Button7;
lv_obj_t *ui_Arc2;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Label12;
lv_obj_t *ui_Label13;
void ui_event_Button1(lv_event_t *e);
lv_obj_t *ui_Button1;
lv_obj_t *ui_Image24;
void ui_event_Screen8(lv_event_t *e);
lv_obj_t *ui_Screen8;
lv_obj_t *ui_Image13;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Image21;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Label18;
void ui_event_Button3(lv_event_t *e);
lv_obj_t *ui_Button3;
void ui_event_Screen9(lv_event_t *e);
lv_obj_t *ui_Screen9;
lv_obj_t *ui_Image14;
lv_obj_t *ui_Image22;
lv_obj_t *ui_Label19;
void ui_event_Button4(lv_event_t *e);
lv_obj_t *ui_Button4;
void ui_event_Screen10(lv_event_t *e);
lv_obj_t *ui_Screen10;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Image23;
lv_obj_t *ui_Label20;
lv_obj_t *ui_Label21;
lv_obj_t *ui_Label22;
void ui_event_Button5(lv_event_t *e);
lv_obj_t *ui_Button5;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *watch_back__array[10] = {&ui_img_watch_back_0_png, &ui_img_watch_back_1_png, &ui_img_watch_back_2_png, &ui_img_watch_back_3_png, &ui_img_watch_back_4_png, &ui_img_watch_back_5_png, &ui_img_watch_back_6_png, &ui_img_watch_back_7_png, &ui_img_watch_back_8_png, &ui_img_watch_back_9_png};
const lv_img_dsc_t *watch_back_2__array[1] = {&ui_img_watch_back_2_1_png};
const lv_img_dsc_t *watch_back___array[1] = {&ui_img_watch_back_2_2_png};
const lv_img_dsc_t *watch_back_6__array[1] = {&ui_img_watch_back_6_1_png};
const lv_img_dsc_t *watch_back_7__array[1] = {&ui_img_watch_back_7_1_png};
const lv_img_dsc_t *watch_back_8__array[1] = {&ui_img_watch_back_8_1_png};
const lv_img_dsc_t *watch_back_9__array[2] = {&ui_img_watch_back_9_1_png, &ui_img_watch_back_9_2_png};
const lv_img_dsc_t *watch_back_3__array[1] = {&ui_img_watch_back_3_0_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void A0logo_in_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
    ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_1_user_data->target = TargetObject;
    PropertyAnimation_1_user_data->val = -1;
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 500);
    lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_1, 255, 355);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_1, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);
}
void A0_label_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);
}
void A1Rs_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 60000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void A1showM_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 1200);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void A1showH_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 300);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A2_top_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -80, -29);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A2_bottom_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 50, 38);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A3_pos1_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 24000);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 350, -350);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A3_top_in_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -120, -75);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A3_top_bottom_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 145, 60);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A7_0_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);
}
void A5_0_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -150, -103);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_1_user_data->target = TargetObject;
    PropertyAnimation_1_user_data->val = -1;
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 500);
    lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_1, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);
}
void A5_1_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 150, 65);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
}
void A6_0_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -100, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
    ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_1_user_data->target = TargetObject;
    PropertyAnimation_1_user_data->val = -1;
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 500);
    lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_1, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);
}
void A6_1_Animation(lv_obj_t *TargetObject, int delay)
{
    ui_anim_user_data_t *PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 50, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
    ui_anim_user_data_t *PropertyAnimation_1_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_1_user_data->target = TargetObject;
    PropertyAnimation_1_user_data->val = -1;
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 500);
    lv_anim_set_user_data(&PropertyAnimation_1, PropertyAnimation_1_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    // lv_anim_set_deleted_cb(&PropertyAnimation_1, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);
}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen3(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 500);
    }
}
void ui_change_play_icon1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_clear_flag(ui_Image24, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_change_play_icon2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        lv_obj_add_flag(ui_Image24, LV_OBJ_FLAG_HIDDEN);
    }
}
void ui_event_Screen1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A0_label_Animation(ui_Smart_Watch, 0);
        A0_label_Animation(ui_Label1, 0);
        A0_label_Animation(ui_Label2, 0);
        A0logo_in_Animation(ui_Image6, 0);
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 2000);
    }
}
void ui_event_Screen2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A1Rs_Animation(ui_Image4, 0);
        A1showM_Animation(ui_Image3, 0);
        A1showH_Animation(ui_Image5, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT)
    {
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen4(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A2_top_Animation(ui_Label4, 0);
        A2_bottom_Animation(ui_Label5, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT)
    {
        _ui_screen_change(ui_Screen7, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen7(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT)
    {
        _ui_screen_change(ui_Screen11, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A7_0_Animation(ui_Label9, 0);
    }
}
void ui_event_Screen11(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A3_top_in_Animation(ui_Label7, 0);
        A3_top_bottom_Animation(ui_Image17, 0);
        A3_pos1_Animation(ui_Image18, 500);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_Screen7, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen5(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A5_0_Animation(ui_Image19, 0);
        A5_1_Animation(ui_Image20, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        _ui_screen_change(ui_Screen10, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen6(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen8, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A6_0_Animation(ui_Label12, 0);
        A6_0_Animation(ui_Label11, 0);
        A6_0_Animation(ui_Arc2, 0);
        A6_1_Animation(ui_Label13, 0);
    }
}
void ui_event_Button1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen8(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen9, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A5_0_Animation(ui_Image21, 0);
        A6_0_Animation(ui_Label6, 0);
        A6_0_Animation(ui_Label18, 0);
        A6_1_Animation(ui_Label14, 0);
        A6_1_Animation(ui_Label15, 0);
    }
}
void ui_event_Button3(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen9(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        _ui_screen_change(ui_Screen8, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen10, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A5_0_Animation(ui_Image22, 0);
    }
}
void ui_event_Button4(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Screen10(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM)
    {
        _ui_screen_change(ui_Screen9, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED)
    {
        A5_0_Animation(ui_Image23, 0);
        A6_0_Animation(ui_Label21, 0);
        A6_1_Animation(ui_Label22, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP)
    {
        _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button5(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    lv_obj_add_event_cb(ui_Screen3, ui_event_Screen3, LV_EVENT_ALL, NULL);
}
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_watch_back_0_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image6 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image6, &ui_img_watch_logo_png);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);  /// 100
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT); /// 100
    lv_obj_set_x(ui_Image6, 0);
    lv_obj_set_y(ui_Image6, -33);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 94);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "GUITION");
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 60);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Powered By");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x838383), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Smart_Watch = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Smart_Watch, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Smart_Watch, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Smart_Watch, 0);
    lv_obj_set_y(ui_Smart_Watch, 38);
    lv_obj_set_align(ui_Smart_Watch, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Smart_Watch, "Smart Watch");
    lv_obj_set_style_text_font(ui_Smart_Watch, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image8 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image8, &ui_img_watch_logo_png);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);  /// 100
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT); /// 100
    lv_obj_set_x(ui_Image8, 0);
    lv_obj_set_y(ui_Image8, -33);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);
}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image2 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image2, &ui_img_watch_back_1_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image3 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image3, &ui_img_watch_back_1_m_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT); /// 240
    lv_obj_set_x(ui_Image3, 25);
    lv_obj_set_y(ui_Image3, 43);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image3, -3, -10);
    lv_img_set_angle(ui_Image3, 1800);

    ui_Image4 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image4, &ui_img_watch_back_1_s_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT); /// 240
    lv_obj_set_x(ui_Image4, 16);
    lv_obj_set_y(ui_Image4, 37);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image4, 10, 11);
    lv_img_set_angle(ui_Image4, 1800);

    ui_Image5 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image5, &ui_img_watch_back_1_h_png);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT); /// 240
    lv_obj_set_x(ui_Image5, -13);
    lv_obj_set_y(ui_Image5, 30);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_Image5, 26, -8);
    lv_img_set_angle(ui_Image5, 1800);

    lv_obj_add_event_cb(ui_Screen2, ui_event_Screen2, LV_EVENT_ALL, NULL);
}
void ui_Screen4_screen_init(void)
{
    ui_Screen4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image9 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image9, &ui_img_watch_back_4_png);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label4 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label4, -3);
    lv_obj_set_y(ui_Label4, -29);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "15");
    lv_obj_set_style_text_font(ui_Label4, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, 38);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "32");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFF5D18), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &ui_font_FontBottom, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen4, ui_event_Screen4, LV_EVENT_ALL, NULL);
}
void ui_Screen7_screen_init(void)
{
    ui_Screen7 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen7, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image12 = lv_img_create(ui_Screen7);
    lv_img_set_src(ui_Image12, &ui_img_watch_back_5_png);
    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label9 = lv_label_create(ui_Screen7);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label9, -5);
    lv_obj_set_y(ui_Label9, 13);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "13:18");
    lv_obj_set_style_text_font(ui_Label9, &ui_font_FontTop, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Screen7);
    lv_obj_set_width(ui_Arc1, 227);
    lv_obj_set_height(ui_Arc1, 227);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc1, 0, 60);
    lv_arc_set_value(ui_Arc1, 30);
    lv_arc_set_bg_angles(ui_Arc1, 150, 210);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x31CEAC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x31CEAC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Arc3 = lv_arc_create(ui_Screen7);
    lv_obj_set_width(ui_Arc3, 195);
    lv_obj_set_height(ui_Arc3, 225);
    lv_obj_set_x(ui_Arc3, 15);
    lv_obj_set_y(ui_Arc3, 11);
    lv_obj_set_align(ui_Arc3, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc3, 0, 60);
    lv_arc_set_value(ui_Arc3, 30);
    lv_arc_set_bg_angles(ui_Arc3, 330, 27);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x31CEAC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0xF6495D), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen7, ui_event_Screen7, LV_EVENT_ALL, NULL);
}
void ui_Screen11_screen_init(void)
{
    ui_Screen11 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen11, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image16 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image16, &ui_img_watch_back_9_png);
    lv_obj_set_width(ui_Image16, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image16, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image16, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image16, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image16, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label3 = lv_label_create(ui_Screen11);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label3, 34);
    lv_obj_set_y(ui_Label3, -17);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "23°");
    lv_obj_set_style_text_font(ui_Label3, &ui_font_FontBottom, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image18 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image18, &ui_img_watch_back_9_2_png);
    lv_obj_set_width(ui_Image18, LV_SIZE_CONTENT);  /// 434
    lv_obj_set_height(ui_Image18, LV_SIZE_CONTENT); /// 39
    lv_obj_set_x(ui_Image18, 350);
    lv_obj_set_y(ui_Image18, 80);
    lv_obj_set_align(ui_Image18, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image18, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image18, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_zoom(ui_Image18, 1000);

    ui_Image17 = lv_img_create(ui_Screen11);
    lv_img_set_src(ui_Image17, &ui_img_watch_back_9_1_png);
    lv_obj_set_width(ui_Image17, LV_SIZE_CONTENT);  /// 79
    lv_obj_set_height(ui_Image17, LV_SIZE_CONTENT); /// 64
    lv_obj_set_x(ui_Image17, 1);
    lv_obj_set_y(ui_Image17, 60);
    lv_obj_set_align(ui_Image17, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image17, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image17, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label7 = lv_label_create(ui_Screen11);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, -75);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "New York");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Screen11, ui_event_Screen11, LV_EVENT_ALL, NULL);
}
void ui_Screen5_screen_init(void)
{
    ui_Screen5 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen5, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image10 = lv_img_create(ui_Screen5);
    lv_img_set_src(ui_Image10, &ui_img_watch_back_2_png);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image19 = lv_img_create(ui_Screen5);
    lv_img_set_src(ui_Image19, &ui_img_watch_back_2_2_png);
    lv_obj_set_width(ui_Image19, LV_SIZE_CONTENT);  /// 153
    lv_obj_set_height(ui_Image19, LV_SIZE_CONTENT); /// 39
    lv_obj_set_x(ui_Image19, 0);
    lv_obj_set_y(ui_Image19, -103);
    lv_obj_set_align(ui_Image19, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image19, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image19, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label10 = lv_label_create(ui_Image19);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "Lap info");

    ui_Image20 = lv_img_create(ui_Screen5);
    lv_img_set_src(ui_Image20, &ui_img_watch_back_2_1_png);
    lv_obj_set_width(ui_Image20, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image20, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image20, 0);
    lv_obj_set_y(ui_Image20, 65);
    lv_obj_set_align(ui_Image20, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image20, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image20, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Button2 = lv_btn_create(ui_Screen5);
    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 50);
    lv_obj_set_x(ui_Button2, 109);
    lv_obj_set_y(ui_Button2, 62);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen5, ui_event_Screen5, LV_EVENT_ALL, NULL);
}
void ui_Screen6_screen_init(void)
{
    ui_Screen6 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen6, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image11 = lv_img_create(ui_Screen6);
    lv_img_set_src(ui_Image11, &ui_img_watch_back_3_png);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Arc2 = lv_arc_create(ui_Screen6);
    lv_obj_set_width(ui_Arc2, 230);
    lv_obj_set_height(ui_Arc2, 230);
    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc2, 80);
    lv_arc_set_bg_angles(ui_Arc2, 130, 320);
    lv_obj_set_style_arc_width(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0xE7E7E7), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc2, 5, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Screen6);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, -61);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Erica Smith");
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Screen6);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, -37);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "Dance on the moon");

    ui_Label13 = lv_label_create(ui_Screen6);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label13, 0);
    lv_obj_set_y(ui_Label13, 46);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "01:24 | 02:15");

    ui_Button1 = lv_btn_create(ui_Screen6);
    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 50);
    lv_obj_set_x(ui_Button1, 109);
    lv_obj_set_y(ui_Button1, 62);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_Screen6);
    lv_obj_set_width(ui_Button7, 46);
    lv_obj_set_height(ui_Button7, 42);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image24 = lv_img_create(ui_Screen6);
    lv_img_set_src(ui_Image24, &ui_img_watch_back_3_0_png);
    lv_obj_set_width(ui_Image24, LV_SIZE_CONTENT);  /// 57
    lv_obj_set_height(ui_Image24, LV_SIZE_CONTENT); /// 60
    lv_obj_set_align(ui_Image24, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Image24, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_add_flag(ui_Image24, LV_OBJ_FLAG_CLICKABLE);       /// Flags
    lv_obj_add_flag(ui_Image24, LV_OBJ_FLAG_HIDDEN);       /// Flags

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen6, ui_event_Screen6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button7, ui_change_play_icon1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Image24, ui_change_play_icon2, LV_EVENT_ALL, NULL);
}
void ui_Screen8_screen_init(void)
{
    ui_Screen8 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen8, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image13 = lv_img_create(ui_Screen8);
    lv_img_set_src(ui_Image13, &ui_img_watch_back_6_png);
    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label14 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 70);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "200M");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label15, 0);
    lv_obj_set_y(ui_Label15, 95);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Turn Right");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x9F9F9F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image21 = lv_img_create(ui_Screen8);
    lv_img_set_src(ui_Image21, &ui_img_watch_back_6_1_png);
    lv_obj_set_width(ui_Image21, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image21, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image21, 0);
    lv_obj_set_y(ui_Image21, -103);
    lv_obj_set_align(ui_Image21, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image21, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image21, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label16 = lv_label_create(ui_Image21);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Navigation");

    ui_Label6 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, -67);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Ed Bluest Blvd");

    ui_Label18 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label18, 0);
    lv_obj_set_y(ui_Label18, -51);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "Next: West Higgins Rd.");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xCECECE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_Screen8);
    lv_obj_set_width(ui_Button3, 100);
    lv_obj_set_height(ui_Button3, 50);
    lv_obj_set_x(ui_Button3, 109);
    lv_obj_set_y(ui_Button3, 62);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen8, ui_event_Screen8, LV_EVENT_ALL, NULL);
}
void ui_Screen9_screen_init(void)
{
    ui_Screen9 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen9, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image14 = lv_img_create(ui_Screen9);
    lv_img_set_src(ui_Image14, &ui_img_watch_back_7_png);
    lv_obj_set_width(ui_Image14, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image14, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image14, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image14, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image14, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image22 = lv_img_create(ui_Screen9);
    lv_img_set_src(ui_Image22, &ui_img_watch_back_7_1_png);
    lv_obj_set_width(ui_Image22, LV_SIZE_CONTENT);  /// 153
    lv_obj_set_height(ui_Image22, LV_SIZE_CONTENT); /// 38
    lv_obj_set_x(ui_Image22, 0);
    lv_obj_set_y(ui_Image22, -103);
    lv_obj_set_align(ui_Image22, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image22, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image22, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label19 = lv_label_create(ui_Image22);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "Hour forecast");

    ui_Button4 = lv_btn_create(ui_Screen9);
    lv_obj_set_width(ui_Button4, 100);
    lv_obj_set_height(ui_Button4, 50);
    lv_obj_set_x(ui_Button4, 109);
    lv_obj_set_y(ui_Button4, 62);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen9, ui_event_Screen9, LV_EVENT_ALL, NULL);
}
void ui_Screen10_screen_init(void)
{
    ui_Screen10 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen10, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image7 = lv_img_create(ui_Screen10);
    lv_img_set_src(ui_Image7, &ui_img_watch_back_8_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);  /// 240
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT); /// 240
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image23 = lv_img_create(ui_Screen10);
    lv_img_set_src(ui_Image23, &ui_img_watch_back_8_1_png);
    lv_obj_set_width(ui_Image23, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image23, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image23, 0);
    lv_obj_set_y(ui_Image23, -103);
    lv_obj_set_align(ui_Image23, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image23, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image23, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label20 = lv_label_create(ui_Image23);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "Wi-Fi Setting");

    ui_Label21 = lv_label_create(ui_Screen10);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label21, 0);
    lv_obj_set_y(ui_Label21, -64);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "Input SSID and password");
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Screen10);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label22, 0);
    lv_obj_set_y(ui_Label22, 88);
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "by GUITION");

    ui_Button5 = lv_btn_create(ui_Screen10);
    lv_obj_set_width(ui_Button5, 100);
    lv_obj_set_height(ui_Button5, 50);
    lv_obj_set_x(ui_Button5, 109);
    lv_obj_set_y(ui_Button5, 62);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen10, ui_event_Screen10, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen3_screen_init();
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen4_screen_init();
    ui_Screen7_screen_init();
    ui_Screen11_screen_init();
    ui_Screen5_screen_init();
    ui_Screen6_screen_init();
    ui_Screen8_screen_init();
    ui_Screen9_screen_init();
    ui_Screen10_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen3);
}
