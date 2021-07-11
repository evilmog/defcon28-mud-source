inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Filtering" );
  set_long( "A huge filtering machine is located in the middle of the water tunnel. From your vantage site on a pathway by the side of the tunnel, you notice that the filtering process is located entirely in the machine. You have no idea whatsoever is lying inside, but you do see that the water coming out is crystal clear as opposed to the dark murky water going into it. \n\nThe chemical purification part is to your east. To the west is a sluice. " );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y30z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y30z-10.c"
  ]) );
}
