inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Deck" );
  set_long( "This is a very hot deck, what with the City sewers' incinerator just located to your north. The black metal shell is actually glowing from the vast amount of heat it is generating to burn the trash being transported inside, and you are feeling the unfavourable results of all that heat. The deck you are on is just a wiremesh, allowing you to see conveyor belts below you bringing trash to the incinerator for incineration. \n\nYou can go to the other incinerator decks by leaving east or west." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-40y-80z-10.c",
  "west" : DIR+"/rooms/sewer/x-60y-80z-10.c"
  ]) );
}
