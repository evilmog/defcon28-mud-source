inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 450);
  set_property("y", -640);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Lets be honest evilmog is running out of material, first clowns then zombies, then vampires and goths. What's it going to be next? Evil Cats? A button is on the wall. Oh Wait they are doing a movie based on cats, and its terrible. No you do not see dancing cats in this nightclub, not happening on my watch, thats how you get furries, if you wanted furries you would be in another dome." );

  add_item("button", "A purple button, it says 'push me'");

  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/child.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/nympho/x460y-640z0.c",
  "west" : DIR+"/rooms/nympho/x440y-640z0.c"
  ]) );
}
