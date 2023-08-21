#include "do_mian.h"
int now_is_auto_play = 0;
void ui_mian(void)
{
    ui_init();

    if (is_auto_play)
    {
        auto_play();
    }

    xTaskCreatePinnedToCore(
        [](void *pvParameters)
        {
            while (1)
            {
                int i = digitalRead(9);
                delay(20);
                if (i == 0)
                {
                   
                    now_is_auto_play = !now_is_auto_play;
                    Serial.println("now_is_auto_play is changed to " + String(now_is_auto_play));
                 
                }
            }
        },
        "lvglpx", 4096, NULL, 1, NULL, 1);
}
void auto_play(void)
{
    xTaskCreatePinnedToCore(
        [](void *pvParameters)
        {
            while (1)
            {
                if (now_is_auto_play == 0)
                {
                    delay(1000);
                    continue;
                }
                else
                {
                    delay(2000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen7, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen11, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen6, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen8, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen9, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen10, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
                    delay(3000);
                    if (now_is_auto_play == 0)
                    {
                        continue;
                    }
                    _ui_screen_change(ui_Screen5, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
                }
            }
        },
        "lvglautoplay", 8192, NULL, 1, NULL, 1);
}
