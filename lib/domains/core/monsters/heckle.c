inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Miss Heckle");
add_id("miss");
add_id("heckle");
add_id("missheckle");
  set_short( "Miss Heckle the North Dome librarian" );
  set_long( "This dimunitive human female is the North Dome's librarian. This cheery young thing has a penchant for books, which is one of the main reasons how the Company got her to work in the North Dome's library. Here, Miss Heckle spends most of the time making idle chat with the miners who walks in and out of the place, but when no one's around, she will just whip up a book and start reading." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
