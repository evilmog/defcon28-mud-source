inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Mei");
add_id("server");
add_id("tech");
add_id("mei");
add_id("servertech");
add_id("techmei");
add_id("servertechmei");
  set_short( "Server tech Mei" );
  set_long( "Thin and pale, Mei is one of those few people who are responsible for keeping the North Domes computer systems running. Lack of proper food and days spent perpetually in front of computer monitors has reduced this once spunky girl to a thin shadow of her former self. Dark rings under her eyes are testimony to the late nights spent maintaining the server, and a certain haggardness seem to hang over her like a dark cloud. She is so thin and anorexic, she actually seems to be two-dimensional." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
