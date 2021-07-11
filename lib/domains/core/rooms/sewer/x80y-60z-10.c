inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You are wading knee-deep in a waterway canal, a place which is flooded should the water level ever rises in the sewers. The cramped and narrow canal is claustrophobic. For obvious reasons, you don't feel very safe here. \n\nTo your north is a service duct. The waterway canal runs to your southwest." );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x80y-50z-10.c",
  "southwest" : DIR+"/rooms/sewer/x70y-70z-10.c"
  ]) );
}
