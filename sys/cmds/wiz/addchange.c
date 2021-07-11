inherit M_COMMAND;

string *usage(void)
{
string *lines;

lines = ({"Usage: addchange <string>"});
lines+=({"Adds a change to the changes command. It's visible for players!"});
return lines;
}

static void main(string str)
{
int i;
if (empty_str(str))
{
this_player()->more(usage());
return;
}
"/daemons/changes_d"->add_change(this_player()->query_name(), str);
write ("Change sent.");

for (i = 0; i < sizeof(players()); i++) {
if (query_wizard(players()[i])) players()[i]->message("*** New change by "+this_player()->query_name()+": "+str+"\n");
}
}
