inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Maintenance Access Point" );
  set_long( "Here at this maintenance access point, reactor techs scurry around carrying out their reactor-related jobs like repairing the wear and tear of the reactor, making sure that the reaction levels are at a safe level and assuring that the coolant levels are high enough. Anyone with good tech skills may help with the maintenance here at this access point. A large monitor on the wall shows you the status of the generator here.\n\nNorth will take you to the access point corridor." );


  set_objects( 
 DIR+"/monsters/tech.c", 
 DIR+"/monsters/tech.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y30z0.c"
  ]) );
}
