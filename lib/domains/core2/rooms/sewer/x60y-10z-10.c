inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "This is a broad corridor, illuminated only by the orangish glow of the sediment in this area. The walls and floors are covered with slime, and the air is rather stagnant. \n\nA main access tunnel is located to your west. To your east the sewer passage continues. A pipe jutting out from the southern wall seems like a likely entrance into somewhere. " );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x70y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x50y-10z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x60y-20z-10.c",
  ]) );
}
