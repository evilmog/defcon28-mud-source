inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waste Monitoring" );
  set_long( "Air filters prevent the horrible smell of the sewers from pervading this room. This results in a highly hygienic room with clean white walls, bright lighting and the faint smell of lemons in the air. This is where the waste going through the City sewers are monitored via a complex variety of gauges, digital pressure holds and other detection devices located throughout the sewers. \n\nExits leading out of the waste monitoring section lead northeast, northwest, southeast and southwest. " );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x10y10z-10.c",
  "northwest" : DIR+"/rooms/sewer/x-10y10z-10.c",
  "southeast" : DIR+"/rooms/sewer/x10y-10z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-10y-10z-10.c"
  ]) );
}
