inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "This a main access tunnel, a large sewer tunnel which would be pitch dark save for the small lights by its side. The sewage here is up to your waist, and you feel no little discomfort as you slowly wade through the garbage in the waters. Of course, the stench here is suffocatingly bad. \n\nThis main access tunnel continues to the north and south." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-50z-10.c",
  "south" : DIR+"/rooms/sewer/x10y-70z-10.c"
  ]) );
}
