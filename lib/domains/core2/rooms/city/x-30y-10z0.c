inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Enforcement Office" );
  set_long( "This office is small, with very little room to stand,  and a few chairs leaving even less room. There is a  small counter behind a plexiglass window, which has  a hole in it. The sign hanging above reads:\n      Warrant Applications\n       Report Crimes Here\n\n  To cut down on the need for enforcement officers,  the Company assigns certain workers special assignments,  and if they need a warrant for special access, they can  receive it here, if they have sufficient evidence.\n\nA small plaque is posted below the window. " );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-30y-20z0.c"
  ]) );
}
