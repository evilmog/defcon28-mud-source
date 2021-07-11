inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Quality Control Centre" );
  set_long( "This the quality control centre. Here, the pathway you were trying not to fall off earlier has enlarged into an entire walkway. Automatic sensors detect each batch of processed water which washes through the waterway. Those rejected are flushed into a relatively large pipe to your south, while those which meet the Citys standards for clean water are channeled to the west.\n\nThe chemical stabilization area is located to your east. To your west are the retro pumps." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-20y40z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y40z-10.c"
  ]) );
}
