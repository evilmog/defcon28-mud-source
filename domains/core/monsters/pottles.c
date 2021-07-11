inherit "/std/monster";
inherit "/std/modules/m_wander";

#include "../domain.h"

void setup(void) {
  set_name("Pottles the gerbil");
  add_id("pottles");
  add_id("gerbil");
  set_short( "Pottles the gerbil" );
  set_long( "A small light brown furry gerbil. He has a white tummy, and very sharp claws. He is very cute, and quite friendly but scared of strangers. He will probably run from you if you come near him.\n\nKill this gerbil for a flag.\n" );

  set_gender("male");
  set_race("gerbil");

  set_level(12);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 160);
  set_skill("combat/defense", 160);

  set_wander_area("sewer");
  start_wander(4, 10);

  if (next_clone()) {
    call_out("destroy_me", 0.1, "");
  }

}

void monster_died(void) {
  string POTTLES;
  POTTLES = FLAG_D->query_flag("POTTLES");
 if (killer->is_completed_quest("Pottles") == 1) {
   write("You have already completed the pottles quest.\n");
   write("Your flag is " + POTTLES + " \n");
 } else {
   CHANNEL_D->chan_send_string("announce", "", killer->query_name() +" has completed the pottles quest", 1);
   killer->add_completed_quest("Pottles");
   killer->increase_expr(20000);
   killer->set_title("$N the pottles Killer");
   write("Your flag is " + POTTLES + " \n");
 }
}

int destroy_me(string args) {
  this_object()->destruct();
  return 1;
}

