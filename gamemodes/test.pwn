#include <a_samp>
#include <sscanf2>
#include <SeCM>
#include <zcmd>

#define COLOR_WHITE 0xFFFFFFFF

CMD:annoying1(playerid, params[])
{
	SendEnhancedClientMessage(playerid, "supercalifragilisticexpialidocious", "The big brown fox jumps over a lazy dog.");
	return 1;
}

CMD:annoying2(playerid, params[])
{
	SendEnhancedClientMessage(playerid, "Annoying error", "supercalifragilisticexpialidocious");
	return 1;
}

CMD:secm(playerid, params[])
{
	new string[128];
	if(sscanf(params, "s[128]", string))
	{
	    return SendClientMessage(playerid, COLOR_WHITE, "Usage: /secm [text]");
	}
	format(string, sizeof(string), "%s", string);
	SendEnhancedClientMessage(playerid, "", string);
	return 1;
}
