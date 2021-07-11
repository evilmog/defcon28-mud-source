inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Antoinnette");
add_id("antoinnette");
  set_short( "Antoinnette, Company Morale Officer" );
  set_long( "Antoinnettes delicate French looks conceal the genetically engineered human inside. She had one gene too many engineered into her during her creation, this female has been bursting with energy ever since the first day she stepped off the production line. The Company has seized the opportunity to enlist her as Core's Morale Officer, where her energy is put to very good use organizing events, planning stuff and even the occasional entertainment for the employees." );

  set_gender("female");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}
