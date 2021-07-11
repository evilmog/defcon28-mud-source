inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 360);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Game Gambling Center" );
  set_long( "Welcome to the ruins of the Gambling center. Here you used ot be able to place bets on games and contests and other oddities. The floors are all covered in blood and it appears as if the area hasn't been used in years." );

 set_exits( ([
  "south" : DIR+"/rooms/nympho/x360y-650z0.c",
  "east" : DIR+"/rooms/nympho/x370y-640z0.c",
  "southeast" : DIR+"/rooms/nympho/x370y-650z0.c"
  ]) );
}
