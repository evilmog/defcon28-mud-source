inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "You are standing on an incinerator deck, one of the platforms around the City sewers' incinerator. The area here is very dry, with excess heat radiating from the incinerator to your east. The floor is made of a wiremesh, and you see the chute dumping trash into a small conveyor belt below you which disappears under the incinerator. \n\nOther decks are located to your north and south. The exit from here is to your west." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y-80z-10.c",
  "west" : DIR+"/rooms/sewer/x-70y-70z-10.c"
  ]) );
}
