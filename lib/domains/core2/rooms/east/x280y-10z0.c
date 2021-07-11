inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 280);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Clerical Area" );
  set_long( "Tables heaped with paper are all over this brightly-lit room in an orderly yet strangely chaotic-looking manner. Frantic clerks rush back and forth importantly, oblivious to your presence as they  hurry to complete their assignments and general duties. \n\nThe clerical head's office is located to your south. To your east is the formatting department, while the filing deparment lies to your west." );


  set_objects( 
 DIR+"/monsters/eastclerk.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x280y-20z0.c",
  "east" : DIR+"/rooms/east/x290y-10z0.c",
  "west" : DIR+"/rooms/east/x270y-10z0.c"
  ]) );
}
