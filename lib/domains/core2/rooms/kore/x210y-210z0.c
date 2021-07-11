inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", -210);
  set_property("z", 0);

  add_area( "kore" );
  set_short( "KORE Central Transit" );
  set_long( "%^RED%^      K  K   OOO    RRR    EEEE\n      K K   O   O   R  R   E\n      KK    O 0 O   RRR    EE\n      K K   O   O   R  R   E\n      K  K   OOO    R  R   EEEE\n      %^YELLOW%^*************************%^RESET%^\n         %^MAGENTA%^Tune in at 2655 mhz%^RESET%^\n\nYou are in the KORE Radio Station Dome, center transit. The dome is painted with a mix of white and bright blue. The word 'KORE' seems to be inscribed on almost every surface.\nA sign reads:\n%^BOLD%^   North:     East Housing\n   West:      South Housing\n   Southeast: KJ Booth and Guest Room\n   Northwest: Offices\n   Northeast: Television Studio\nThere also appears to be a secluded storage closet off to the southwest." );

 set_exits( ([
  "north" : DIR+"/rooms/kore/x210y-170z0.c",
  "west" : DIR+"/rooms/kore/x170y-210z0.c",
  "northeast" : DIR+"/rooms/kore/x220y-200z0.c",
  "northwest" : DIR+"/rooms/kore/x200y-200z0.c",
  "southeast" : DIR+"/rooms/kore/x220y-220z0.c",
  "southwest" : DIR+"/rooms/kore/x200y-220z0.c"
  ]) );
}
