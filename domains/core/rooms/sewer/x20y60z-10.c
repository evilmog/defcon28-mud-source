inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Hydro Generator #2" );
  set_long( "All around you are transparent tubes filled with swift-flowing water from the sewers. They are spinning a waterwheel, which is used to generate gerks via a power generator for the Citys  spare gerk supply. Since the tubes and the generators are located along the perimeter of the huge room, the middle of the room is rather empty.\n\nThe exit is located to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y70z-10.c"
  ]) );
}
