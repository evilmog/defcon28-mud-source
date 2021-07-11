inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 60);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "Mars Financial: Branch Manager Dianas Office" );
  set_long( "The office of Mars Financial Branch Manager Diana Towns. The rooms puffy purple couches and purple table emanates feminineness. The desk doesn't seem to be used very much as nothing is on it but a computer monitor. A vidscreen hangs from the ceiling by the north wall.\n\nThe door on the east wall leads back to the lobby." );

  add_item("desk", "The large desk is empty, save for the computer monitor.");
  add_item("monitor", "This is a large OLED display built into the large empty desk.");

  set_objects( 
 DIR+"/monsters/diana.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/cftc/x20y60z10.c"
  ]) );
}
