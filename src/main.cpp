#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_optional.h"
#include "bn_bg_palettes.h"
#include "bn_music_actions.h"
#include "bn_sprite_actions.h"
#include "bn_sprite_text_generator.h"
#include "bn_regular_bg_ptr.h"
#include <bn_sound.h>
#include "bn_music_actions.h"

#include "bn_sprite_items_otamatone.h"
#include "bn_regular_bg_items_gba.h"
#include "bn_music_items.h"

#define BN_AUDIO_MIXING_RATE_16_KHZ


namespace
{
    /*void stop_all()
    {
        
        if (bn::keypad::left_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::up_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::down_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::right_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::a_released())
        {
            bn::music::set_volume(0);    
        }
        else if (bn::keypad::b_released())
        {
            bn::music::set_volume(0);           
        }
        else if (bn::keypad::l_released())
        {
            bn::music::set_volume(0);             
        }
        else if (bn::keypad::r_released())
        {
            bn::music::set_volume(0);            
        }

        bn::core::update();
    }*/
    
    void music_scene()
    {
        bn::sprite_ptr otamatone = bn::sprite_items::otamatone.create_sprite(56, 64);

        while (!bn::keypad::start_pressed())
        {

            if (bn::keypad::left_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::d.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::ds.play(0.5);
                }
            }
            else if (bn::keypad::right_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::f.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::fs.play(0.5);
                }
            }
            else if (bn::keypad::up_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::c.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::cs.play(0.5);
                }
            }
            else if (bn::keypad::down_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::e.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::f.play(0.5);
                }
            }
            else if (bn::keypad::a_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::c2.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::cs2.play(0.5);
                }
            }
            else if (bn::keypad::b_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::b.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::c2.play(0.5);
                }
            }
            else if (bn::keypad::l_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::g.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::gs.play(0.5);
                }
            }
            else if (bn::keypad::r_pressed())
            {
                if (!bn::keypad::select_held())
                {
                    bn::music_items::a.play(0.5);
                }
                else if (bn::keypad::select_held())
                {
                    bn::music_items::as.play(0.5);
                }
            }

        if (bn::keypad::left_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::up_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::down_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::right_released())
        {
            bn::music::set_volume(0);
        }
        else if (bn::keypad::a_released())
        {
            bn::music::set_volume(0);    
        }
        else if (bn::keypad::b_released())
        {
            bn::music::set_volume(0);           
        }
        else if (bn::keypad::l_released())
        {
            bn::music::set_volume(0);             
        }
        else if (bn::keypad::r_released())
        {
            bn::music::set_volume(0);            
        }

        bn::core::update();    
        }
    }

       
}

    int main()
    {
        bn::core::init();
        bn::regular_bg_ptr background = bn::regular_bg_items::gba.create_bg(0, 0);
        music_scene();
        /*stop_all();*/
        bn::core::update();
    }