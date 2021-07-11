inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This is a very dirty service duct. You see large puddles of dirty sewer water everywhere, not to mention the occasional piece of waste matter. You wrinkle your nose as you realize just how bad this duct smells. \n\nThe service duct continues to your east. To your west is a water tunnel. A large pipe to your north drips sewer water onto the floor." );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-70y40z-10.c",
  "west" : DIR+"/rooms/sewer/x-90y40z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-80y50z-10.c",
  ]) );
}
