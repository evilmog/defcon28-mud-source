inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "Warden Brocke's Office" );
  set_long( "This is the office of the Detention Center Warden, Warden Brocke. Brocke sits behind a solid oak desk, resting back in his leather chair, sifting through paperwork as you enter.  Several awards and certifications line the walls of the office, as well as pictures of several family members. " );


  set_objects( 
 DIR+"/monsters/wardenbrocke.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/prison/x220y240z0.c"
  ]) );
}
