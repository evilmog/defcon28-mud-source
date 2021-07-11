inherit M_COMMAND;

string *usage(void) /*will be empty now */
{
string *lines;
lines = ({"Usage: changes [n]"});
lines+=({"Without argument, displays the last 10 changes from the changelog. With an argument it displays the last n changes."});
return lines;
}

static void main(string str)
{
string *lines;
string **changes;
int num, i;
lines = ({});

if(str == "-h") {
this_player()->more(usage());
return;
}

if (sscanf(str, "%d", num) != 1)
{
num = 10;
}

if (num <= 0)
{
write ("You can't do that.");
return;
}

changes = "/daemons/changes_d"->query_changes(num);

for (i = 0; i < sizeof(changes); i++)
{
lines+=({"["+changes[i][0]+"] "+
changes[i][1]+": "+
changes[i][2]+" - "+
changes[i][3]});
}
this_player()->more(lines);
}
