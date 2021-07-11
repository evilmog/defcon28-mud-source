inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Boss");
add_id("sewer");
add_id("boss");
add_id("sewerboss");
  set_short( "Sewer Boss" );
  set_long( "This appears to be some sort of genetically modified humanoid, its clothes appear to be made of the skin of its enemies and it appears to be dripping in blood." );

  set_gender("male");
  set_race("human");

  set_level(10);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}

void monster_died(void) {
 string SEWERBOSS;
 SEWERBOSS = FLAG_D->query_flag("SEWERBOSS");
 if (killer->is_completed_quest("Sewer") == 1) {
   write("You have already completed the sewer quest.\n");
   write("Your flag is " + SEWERBOSS + "\n");
   killer->move("/domains/core/rooms/city/x0y0z0.c");
   call_other(killer, "do_look", this_environment());
 } else {
   CHANNEL_D->chan_send_string("announce", "", killer->query_name() +" has completed the sewer quest", 1);
   killer->add_completed_quest("Sewer");
   killer->increase_expr(20000);
   write("Congrats you beat the sewer quest.\n");
   write("Your flag is " + SEWERBOSS + "\n");
   killer->move("/domains/core/rooms/city/x0y0z0.c");
   call_other(killer, "do_look", this_environment());
 }
}
