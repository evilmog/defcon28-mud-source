inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Director's Assistants' Offices" );
  set_long( "The HR Director has many assistants to help manage the stifling bureaucracy that HR management has become. With all of the insurance forms, pension plan tracking, medical benefit payments, training, performance reviews, promotions, union squelching, and OSHA inspections a full staff is required. Here these men and women slave away in an age where the paperless office is supposed to reign.\n\nThe exit is back to the west." );


  set_objects( 
 DIR+"/monsters/vern.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x-80y-10z0.c"
  ]) );
}
