inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "This park just seems to go on and on, almost as if its cheap filler for some sort of demonic quest thought up by overlord EvilMog. This area shows no originality and its probably just here to mess with you. A shrub is somewhere in this chaos." );

  add_item("shrub", "Underneath this shrub is a purple button.");
  add_item("button", "This is a giant purple button that says 'PUSH ME'");

  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x80y-30z0.c",
  "south" : DIR+"/rooms/city/x80y-50z0.c",
  "east" : DIR+"/rooms/city/x90y-40z0.c",
  "west" : DIR+"/rooms/city/x70y-40z0.c",
  "northeast" : DIR+"/rooms/city/x90y-30z0.c",
  "northwest" : DIR+"/rooms/city/x70y-30z0.c",
  "southeast" : DIR+"/rooms/city/x90y-50z0.c",
  "southwest" : DIR+"/rooms/city/x70y-50z0.c"
  ]) );
}
