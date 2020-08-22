inherit M_COMMAND;

string *usage(void) {
   string *lines;

   lines = ({ "Usage: inventory [-h]" });
   lines += ({ "" });
   lines += ({ "Print a list of the items you currently have acquired." });
   lines += ({ "" });
   lines += ({ "Options:" });
   lines += ({ "\t-h\tHelp, this usage message." });
   lines += ({ "Examples:" });
   lines += ({ "\tinventory" });

   lines += get_alsos();

   return lines;
}

void setup_alsos() {
   add_also("player", "hp");
   add_also("player", "junk");
   add_also("player", "levels");
   add_also("player", "score");
   add_also("player", "skills");
   add_also("player", "top");

   add_also("wiz", "status");
}

static void main(string str) {
   object *inv, player;
   int i, mxp;

   string loc, *lines;

   if (!alsos) {
      setup_alsos();
   }
   player = this_player();
   if (!empty_str(str)) {
      player->more(usage());
      return;
   }

   mxp = player->query_mxp();

   inv = player->query_inventory();

   if (sizeof(inv) == 0) {
      write("You are carrying nothing.\n");
   } else {
      lines = ({ "You are carrying:" });
      for (i = 0; i < sizeof(inv); i++) {
      if (mxp == 1) {
        loc = "%^MXP_LSM%^<Itm>" + inv[i]->query_id() + "</Itm>%^MXP_LLM%^";
      } else {
        loc = "  " + inv[i]->query_short();
      }
         if (inv[i]->is_wielded() || inv[i]->is_worn()) {
            loc += " %^CYAN%^[";
               if (inv[i]->is_wielded() ) {
                  loc += inv[i]->query_wield_position();
               }
               if (inv[i]->is_worn()) {
                 loc +=  inv[i]->query_wear_position();
               }
               loc += "]%^RESET%^";
         }
         lines += ({ loc });
      }
      player->more(lines, 1);
   }
}
