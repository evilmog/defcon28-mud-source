inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Large, dark and slimy, the main access tunnel is indeed a horrid place to be in. The feeling of the murky sewage up to your waist is an experience which you would rather forget. Not even the small lights by the sides of the tunnel can dampen your irrational fear of the unknown which seems to pervade from everywhere in the sewers. \n\nThe main access tunnel extends to the east and the west. You can go up to the City dome via an iron ladder. " );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x10y-40z-10.c",
  "up" : DIR+"/rooms/city/x20y-40z0.c"
  ]) );
}
