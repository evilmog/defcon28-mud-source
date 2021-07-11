inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Horace");
  set_short( "Horace Clancy the Company Accounts Inspector" );
  set_long( "Having lost his arm in an accident when he was young, Horace grew up with cybernetic limbs and the advantages which came with them. In short, he became a bully. However, he did not neglect his mental faculties, and years of diligent study have produced a sharp and mentally alert man with the strength only artificial limbs can give. Horace has muscled his way into the post of Company Accounts Inspector because he finds the mental stimulation of checking payments interesting. The fact that he occasionally administers lessons to errant payment clerks is overlooked only because this department has to be one of the Company's most efficient ones." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
