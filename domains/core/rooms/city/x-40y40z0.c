inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Generator Monitoring Center" );
  set_long( "You are in the monitoring center of the City Dome's fusion generator. This is a vast room with a dome-shaped ceiling. Dials and monitors are all over the place, mainly for the convenience of the techs and reactor crew who frequent in the course of their duties. Here, the whole room has been reinforced with antivib alloy which prevents the vibrations from the generator directly below you from penetrating through.\n\nAccess walkways lead to your north, south, east and west. Doors to your northeast and southwest will take you to the generator access points." );


  set_objects( 
 DIR+"/monsters/grunt.c", 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y50z0.c",
  "south" : DIR+"/rooms/city/x-40y30z0.c",
  "east" : DIR+"/rooms/city/x-30y40z0.c",
  "west" : DIR+"/rooms/city/x-50y40z0.c",
  "northeast" : DIR+"/rooms/city/x-30y50z0.c",
  "southwest" : DIR+"/rooms/city/x-50y30z0.c"
  ]) );
}
