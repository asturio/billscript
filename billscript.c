// doperight (d) 1999 seaw0lf/seaw0lf@gmx.net
// distribute freely.
//
// advanced c programming knowledge is re-
// commended for total enjoyment. don't
// forget to check out the .h file ;)
//
// btw, this piece of shit really compiles
// with djgpp/gcc v2.8x :-)))
//
// Claudio Clemens: Compilies now using gcc 4
//

#include <stdio.h>   //standard io
#include <stdlib.h>  //system
#include "billscript.h"

some_type_whose_name_ive_forgotten main (i_think)
{
    long counter = 0L;
    int scandisk_crash = 0;
    int j = 0, k = 0;
    initialize_this_fucking_system();
    english.tea = too_hot;
    while (!english_man) {
        if (counter > 1000L)
            visit_doctor();
        else if (counter > 2000L)
            is_everything_okay_with_you();
        else if (counter > 10000L)
            start_talking_to_your_shadow();
        else if (counter > 20000L)
            get_an_overdose_cocain();
        else if (counter > 20001L)
            rehabilitate();
        else if (counter > 50000L)
            play_tennis_with_your_neighbours_cat();
        sleep(60*1);//zzzzz one hour
        // sleep(60*60);//zzzzz one hour
        if (time_overflow())
            scandisk_crash = 0;
        if (macos_installed()) {
            fprintf (stdsuck, "Error reading harddisk.\n");
            exit (OTHER_THAN_NORMAL);
        }
        else if (amigaos_installed()) {
            make_beautiful_black_screen();
            rectangle (1, 1, SCREEN_W, SCREEN_H/4, RED_FLASHING,
                    BORDER_FAT);
            gotoxy (somewhere_on_screen_x, somewhere_off_screen_y);
            fprintf (stdgogo, "GURU MEDITATION FAULT #%4d\n\n",
                    random()%0xffff);
            fprintf (stdgogo, "Press left mouse button to simulate right"
                    "mouse button press.\n");
            for (;;) ; //amiga lives
        }
        else if (windows_installed()) {
scandisk_loop:
            startup_computer();
            make_beautiful_windows_startup_logo_screen();
            set_palette (god_palette); //makes the light rays look better
            if (scandisk_crash) goto next_step;
            switch_back_to_text_mode();
            //this crashes the computer after approximately the 5th run
            run_scandisk_on_all_harddisks (RECURSIVELY); //rescans all hdds
            scandisk_crash = 1;  //when scanning the next one
            goto scandisk_loop;
next_step:
            sleep (60*2);//simulate 2 minutes of loading time
            switch (type_shit) {
                case TYPE_GATES:
                    kill_user();
                    destroy_posix_and_related();
                    destroy_ibm();
                    buy_a_lot_of_expensive_cars_for_collection();
                    buy_ten.twelve_or_hmm_let_me_think = 1;
                    buy_ten.even_fifty_villas = 2;
                    buy_intel_and_develop_senseless_bus_system();
                    standarise_bill_pascal_language();
                    set_torvalds_on_fire_and();
                    for (j=0; j<(bills_money_in_yen*4); j++) {
                        massacre_torvalds_dead_body (SHARP_KNIFE);
                        massacre_torvalds_dead_body (DOUBLE_MAGNUM);
                        massacre_torvalds_dead_body (weapon[random()%255]);
                    }
                    while (windows_doesnt_crash)
                        laugh_like_an_ill_pig_getting_slaughtered();
                    if (!take_over_world()) {
                        activate_atom_bombs (50);
                        for (k=0; k<50; k++) {
                            drop_atom_bomb (i);
                            delay(1000);//just for the taste of it
                        }
                    }
                    break;
                case TYPE_TORVALDS:
                    give_user_source_code_till_coma();
                    develop_super_mega_galactic_kernel_release();
                    that = is(able.to, make.original);
                    english.tea();
                    dont_ask_me_why_but(AND_SO_ON);
                    get_as_rich_as_bill_would_have_become();
                    if (last_case == would_have_been(TYPE_GATES) &&
                            take_over_world()) would_have_been (1);
                    kill_all_native_fishes(); //god knows why
                    buy_everything_money_cant_buy();
                    //for example: more money
                    become_world_president();
                    build_linux_television_station();
                    dictate_people_to_only_watch_linux_tv();
                    if (!take_over_world()) {
                        squish_torvalds_with_hand_mixer();
                        idle_loop (5*linux_startup_time);
                    }
                    if (os_type == OS_LINUX)
                        system ("rm /dev --recurse");
                    break;
                case TYPE_BEATLES:
                    we_all_live (in, a);
                    for (j=0; j<3; j++)
                        yellow_sub_marine();
                    idle_loop (5);
                    explode_sub_marine();  //moo
                    sadistically_kill_survivals();
                    for (;;) {
                        laugh();
                        shot_everyone (NOT_LAUGHING);  //even small
                    }          //children love this part
                    break;
                default:
                    halt_everything_immediately();
                    return 0;    //just to keep the compiler happy
            }
            make_blue_screen (USER_AND_OS_INDEPENDENT);
            set_text_output (TEXT_CENTRE);
            fprintf (stdnormal, "Windows\n");
            fprintf (stdnormal, "General protection fault in module\n");
            fprintf (stdnormal, "kernel64.dll, address DEAD:BEEF.\n\n");
            fprintf (stdnormal, "Press every key to restart Windows.");
            wait_user_to_press_every_key();//fake
            if (keypressed()) {
                delete_some_important_dlls();
                make_user_think_he_did_something_wrong();
                if (random()%2000 < 1000)
                    restart_computer();
                hang_computer();
            }
        }
        else {
            char doodoo[MAX_LILO_BOOT_ENTRY_NAME_LENGTH];
            while (!ctrl_alt_del()) {
                fprintf (stdout, "LILO boot: ");
                fgets(doodoo, MAX_LILO_BOOT_ENTRY_NAME_LENGTH, stdin);
                do_an_idle_loop_here();
                do_nothing();
                fprintf (stderr, "Unable to load %s\n", doodoo);
            }
        }
        counter = 20000L;//just for security reasons
        sleep (60*4);//simulate os2 shutdown waiting time
    }
    exit (OTHER_THAN_SUCCESS);
}
