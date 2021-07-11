inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Jenny");
  set_short( "Jenny Thackery, HR Director's Personal Secretary" );
  set_long( "An aura of professionalism surrounds this 32-year-old woman. Short-cropped red hair, an elegantly conservative dress with minimal makeup and jewelry all come together to portray the ultimate working woman image. No one knows much about Jenny except that she was just transferred over from Earth recently. So far, she hasn't been winning any popularity awards due to her tough character and her stern attitude. The HR Director himself is wondering if he should perhaps transfer her over to some other department, like maybe Enforcement... " );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
