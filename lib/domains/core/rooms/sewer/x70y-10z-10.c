inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "The faint glow from the sediment around this passage gives you a pretty eerie feeling. Musty air that doesn't seem to have been ventilated for awhile brushes against you as you move around here.\n\nTo your west and southeast are other sewer passages." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x60y-10z-10.c",
  "southeast" : DIR+"/rooms/sewer/x80y-20z-10.c"
  ]) );
}
