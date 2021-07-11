inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Larder" );
  set_long( "The stench of rot and decay in this room is extremely strong. Strewn on the walls of this chamber are corpses of humans and carcasses of huge animals in many various states of decay. Upon closer inspection, you see that most of the bodies are missing their vital organs, namely their heart, brain, kidneys, livers and such. Something has been using this place as a larder. With all those things on the walls, you feel like you're visiting a butcher's shop. \n\nYou may continue to your east and southwest." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-20y70z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-40y60z-10.c"
  ]) );
}
