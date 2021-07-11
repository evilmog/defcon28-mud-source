inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Monzema");
  set_short( "Monzema, Recordkeeper" );
  set_long( "Monzema is a very old critin. After moving out of the underground burrows he originated from, Monzema slowly developed his sight before discovering his love for reading. This passion finally peaked when the Company offered the post of Recordkeeper on Core to him. Now, with his pair of spectacles, Monzema manages the archiving of accounting records in this department. Although the files aren't exactly prime reading material, Monzema is happy enough here. He of course still wishes to be made a librarian someday, but for an old critin, that day might not never come." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
