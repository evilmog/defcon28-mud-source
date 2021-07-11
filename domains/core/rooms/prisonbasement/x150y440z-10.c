inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 150);
  set_property("y", 440);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Radiology Department" );
  set_long( "The radiology department is a vast room where all the radiologists meet to compare readings and findings. Headed by a tyrannical supervisor, you can expect that the radiologists keep this room in spick and span condition. Bright lighting is readily available here due to the fact that the personnel working here spend a lot of time going over reports. There are many chairs and tables around for the radiologists to work on.\n\nYou can leave by going east." );


  set_objects( 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1radiologist.c", 
 DIR+"/monsters/r1radsensor.c", 
 DIR+"/monsters/r1radsensor.c", 
 DIR+"/monsters/r1carmella.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/prisonbasement/x160y440z-10.c"
  ]) );
}
