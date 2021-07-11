void restore_me(void);
void save_me(void);
#define DATAFILE "/sys/daemons/data/flag_d_secure.o"

mapping flags;
mapping flags_hard;

void create(void) {

   flags =([ ]);
   flags_hard = ([ ]);

      /* Create a default list if we do not already have one. */
    flags["MEDIOCREALIGATOR"] = "flag{6Ng5g7m4B3QqLLHC}";
    flags["MEDIOCRELIZARD"] = "flag{MaN3exPwxEqfkXD5}";
    flags["MEHFERRET"] = "flag{tNwkLW4mwQ3rcw2U}";
    flags["MEHRAT"] = "flag{4Td8zNxp63pQrw6p}";
    flags["PARROT"] = "flag{w9rwGMCvYvVaYC9C}";
    flags["POTTLES"] = "flag{PFcJZt325q3YpkBB}";
    flags["SEWERBOSS"] = "flag{MXfnZtgNW7STM2Z2}";
    flags["TICKET"] = "flag{Auu2vw7hwhxLZEnv}";
    flags["UNINITIATEDEEL"] = "flag{7Yrgc2SLJJYmMavQ}";
    flags["UNINITIATEDSNAKE"] = "flag{BzvjeFAzswSEK2Nu}";
    flags["WIZARDPOTION"] = "flag{Rr5yF7fSqdLf8nxm}";
    flags["EVIL"] = "flag{vXpzemgsV243ppJx}";
    flags["WOODLAND"] = "flag{59uG2LFE5Jt7uL7s}";

    flags_hard["MEDIOCREALIGATOR"] = "flag{GFWRXdREf6whjsrk}";
    flags_hard["MEDIOCRELIZARD"] = "flag{LYbghNp8JbugcdMe}";
    flags_hard["MEHFERRET"] = "flag{Wh3xbwv73xjqaNtC}";
    flags_hard["MEHRAT"] = "flag{4wjZYwD9ur8CCdeJ}";
    flags_hard["PARROT"] = "flag{3P743YXk3p659nHH}";
    flags_hard["POTTLES"] = "flag{HpetACv7xH833KK4}";
    flags_hard["SEWERBOSS"] = "flag{rh3DYuYmFRULkaJn}";
    flags_hard["TICKET"] = "flag{pe4YSxUgz26v6KMy}";
    flags_hard["UNINITIATEDEEL"] = "flag{jdPdLHdFfKr28ZBS}";
    flags_hard["UNINITIATEDSNAKE"] = "flag{zDSUA6RP2ABNVWfC}";
    flags_hard["WIZARDPOTION"] = "flag{WQWHLquzBS69txKw}";
    flags_hard["EVIL"] = "flag{9RsY3pcAMKnLP34Q}";
    flags_hard["WOODLAND"] = "flag{6v6KLqAcwn3pGwTG}";
    save_me();
}
 
static void restore_me(void) {
   unguarded("restore_object", DATAFILE);

}

static void save_me(void) {
   unguarded("save_object", DATAFILE);
}

void set_flag(string flag, string str) {
  flags[flag] = str;
  save_me();
}

void set_flag_hard(string flag, string str) {
  flags_hard[flag] = str;
  save_me();
}

string query_flag(string str) {
   object player;
   string flag;
   player = this_player();
   if (player->cheater() == 1){
     flag = "flag{invalid}";
   } else if (this_player()->query_difficulty() > 0) {
    flag = flags_hard[str];
   } else {
     flag = flags[str];
   }
   return flag;
}


int is_flag(string flag) {
   if (flags[flag]) {
      return 1;
   } else if (flags_hard[flag]) {
      return 2;
   }

   return 0;
}

void remove_flags(string flag) {
   flags[flag] = nil;
   save_me();
}

void remove_flags_hard(string flag) {
   flags_hard[flag] = nil;
   save_me();
}

string *query_flags(void) {
   return map_indices(flags);
}

string *query_flags_hard(void) {
   return map_indices(flags_hard);
}

