/*daemon for tracking codebase changes*/

string **changes;
int nextch;

int restore_me(void)
{
return restore_object("/daemons/data/changes.o");
}

void save_me(void)
{
save_object("/daemons/data/changes.o");
}

void create(void)
{
int success;
success = restore_me();
if (!success)
{
changes = ({({"1", "System", "Changelog system initialized.", ctime(time())})});
nextch = 2;
save_me();
}
}

int add_change(string plr_name, string change_msg)
{
changes = changes+({({(string)nextch, capitalize(plr_name), change_msg, ctime(time())})});
nextch++;
save_me();
return 1;
}

string **query_changes(int num)
{
string **req_changes;
int start, size, i;
size = sizeof(changes);
if (num >= size)
{
return changes;
} else {
start = size-num;
/*initialization, simple + on uninitialized doesn't work, it's not like 1d arrays*/
req_changes = ({changes[start]});
for (i = start+1; i < size; i++)
{
req_changes = req_changes+({changes[i]});
}
return req_changes;
}
}

void reset_me(void)
{
changes = ({({"1", "System", "Changelog system initialized.", ctime(time())})});
nextch = 2;
save_me();
}

int query_change_num(void)
{
return nextch-1;
}
