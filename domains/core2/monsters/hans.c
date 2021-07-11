inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Hans");
add_id("hans");
  set_short( "Hans, the Director of Employee Affairs" );
  set_long( "No one knows more about having affairs with employees than the lecherous Hans!  Hans finds that the teary eyed women who come to his office complaining about being sexually harassed by her co-workers needs much comfort and consoling.  This usually involves a bottle of chilled chardonay and some oysters." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
