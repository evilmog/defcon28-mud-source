inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Production Chamber" );
  set_long( "The production chamber is where control boards which manipulate the methane gas production are housed. A white-walled room with minimal creature comforts save the occasional chair, it is mostly filled with screens and monitors for gas monitoring. Otherwise, you see row upon row of control boards used to regulate the production of methane gas from excretion. \n\nTo your west is the converter entrance. Northwest takes you to the gas absorption controls." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x-70y-40z-10.c",
  "northwest" : DIR+"/rooms/sewer/x-70y-30z-10.c"
  ]) );
}
