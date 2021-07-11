string do_short(void) {
  string str;
  str = "Abandoned Office";
  return str;
}

string do_long(void) {
	switch(random(5)) {
		case 0:
			return "This office has been sitting idle for a while now, its almost as if the once sprawling halls of the company administration have come to a grinding halt. The floor is still kept clean, the walls are spotlesss. There is no desk, and it appears as if the ports for the autobot have been removed.";
		case 1:
			return "This might have been an office, or a shop bay, or some sort of autobot run facility. Only the wall mounts and overhead rails of the autotrack remain.";
                case 2:
			return "This appears to be the remains of an old modchip shop. The air still smells of rotting flesh and the walls are still stained with blood of various colours. The autobots have been removed but the smell remains......";
		case 3:
			return "It appears as if this bay has been abandoned long ago. The floors are dusty and the lights are off. One day something new may fill this space.  THe dust in the floor spells out \"DEFCON 28 cancelled....\" and some sort of grafiti is on the walls.";
                case 4:
			return "This bay used to be a hub of activity but no longer. Smashed terminals are in a heap, autobot track is everywhere, frayed wires come out from the walls. Whoever had this bay before definitely isn't getting their deposit back.";
		case 5:
			return "A pile of old autobot track, refuse, junk, and other stuff lies before you. It looks like the previous owners left in a hurry.";

		default:
			return "It appears as if this bay has been abandoned long ago. The floors are dusty and the lights are off. One day something new may fill this space.";
	}
}

int do_office(int arg) {
  return 1;
}
