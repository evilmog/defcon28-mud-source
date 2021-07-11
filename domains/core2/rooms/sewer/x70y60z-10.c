inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This is a service duct, one of the non-wet passages that the City's sewer engineers put in for easier access throughout the sewers. The steel walls here look rather old, and you notice that the floor of this duct is covered with the marks of many tiny footprints.\n\nThe service duct is extended to the south. To the north is the main access tunnel." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x70y70z-10.c",
  "south" : DIR+"/rooms/sewer/x70y50z-10.c"
  ]) );
}
