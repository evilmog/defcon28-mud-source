inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "Slime and moss-encrusted walls meet you in this rather broad corridor. The lighting here appears to be natural, emitted by some kind of strange sediment which is all over the place. \n\nTo your south is a mass access tunnel. To the northwest continues the sewer passage. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x90y-40z-10.c",
  "northwest" : DIR+"/rooms/sewer/x80y-20z-10.c"
  ]) );
}
