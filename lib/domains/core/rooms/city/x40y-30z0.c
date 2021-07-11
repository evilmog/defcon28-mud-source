inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "Lush, jungle-like vegetation climb the walls and hang to the mesh ceiling above. Genetically altered hybrids of normally huge jungle plants fit into this small space on a dwarfed scale. The only thing missing is the plethora of animals normally in a food rich environment such as this. However, with organic matter at such a high premium, the food chain has been limited to insects and insect-eating reptilian species.\n\nSmaller stepping stones lead in narrow paths to the west and southwest. The stones are slightly larger toward the eastern end of the room." );


  set_objects( 
 DIR+"/monsters/japanesebeetle.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x50y-30z0.c",
  "west" : DIR+"/rooms/city/x30y-30z0.c",
  "southwest" : DIR+"/rooms/city/x30y-40z0.c"
  ]) );
}
