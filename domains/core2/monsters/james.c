inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Paymaster James");
add_id("james");
add_id("paymaster");
add_id("paymasterjames");
  set_short( "James Russell, Paymaster" );
  set_long( "A rather bloated man with dark skin, James can be a slick-talking character... if he thinks you're worth it. Otherwise, you're way below his attention. However, there has been rumours lately that he has been using his position as Paymaster to relocate some Company funds. To date, no one's been able to prove anything, but certain parties in the Company would be more than glad to see the end of him here. " );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
