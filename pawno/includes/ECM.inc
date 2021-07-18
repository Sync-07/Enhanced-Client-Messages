// Created by Sync07

#include <YSI\y_hooks>

static TextShown[MAX_PLAYERS];
static TextShownTimer[MAX_PLAYERS];
static PlayerText:ECMTextdraw[MAX_PLAYERS][6];

stock SendEnhancedClientMessage(playerid, caption[], string[], time = 5000) // Adjust time for the interval time the message is shown.
{
	if(TextShown[playerid])
	{
	    PlayerTextDrawHide(playerid, ECMTextdraw[playerid][0]);
		PlayerTextDrawHide(playerid, ECMTextdraw[playerid][1]);
		PlayerTextDrawHide(playerid, ECMTextdraw[playerid][2]);
		PlayerTextDrawHide(playerid, ECMTextdraw[playerid][3]);
		PlayerTextDrawHide(playerid, ECMTextdraw[playerid][4]);
		PlayerTextDrawHide(playerid, ECMTextdraw[playerid][5]);
	    KillTimer(TextShownTimer[playerid]);
	}
	PlayerTextDrawShow(playerid, ECMTextdraw[playerid][0]);
	PlayerTextDrawShow(playerid, ECMTextdraw[playerid][1]);
	PlayerTextDrawShow(playerid, ECMTextdraw[playerid][2]);
	PlayerTextDrawShow(playerid, ECMTextdraw[playerid][3]);

	new captioncount[15], stringcount[128];
	format(captioncount, sizeof(captioncount), "%s", caption);
	PlayerTextDrawSetString(playerid, ECMTextdraw[playerid][4], captioncount);
	PlayerTextDrawShow(playerid, ECMTextdraw[playerid][4]);

	format(stringcount, sizeof(stringcount), "%s", string);
	PlayerTextDrawSetString(playerid, ECMTextdraw[playerid][5], stringcount);
	PlayerTextDrawShow(playerid, ECMTextdraw[playerid][5]);

	PlayerPlaySound(playerid,1150,0.0,0.0,0.0);

	TextShown[playerid] = true;
	TextShownTimer[playerid] = SetTimerEx("HideMessage", time, false, "d", playerid);
}

forward HideMessage(playerid);
public HideMessage(playerid)
{
	if (!TextShown[playerid])
	    return 0;

	TextShown[playerid] = false;
	PlayerTextDrawHide(playerid, ECMTextdraw[playerid][0]);
	PlayerTextDrawHide(playerid, ECMTextdraw[playerid][1]);
	PlayerTextDrawHide(playerid, ECMTextdraw[playerid][2]);
	PlayerTextDrawHide(playerid, ECMTextdraw[playerid][3]);
	PlayerTextDrawHide(playerid, ECMTextdraw[playerid][4]);
	PlayerTextDrawHide(playerid, ECMTextdraw[playerid][5]);
	return 1;
}

hook OnPlayerConnect(playerid)
{
	ECMTextdraw[playerid][0] = CreatePlayerTextDraw(playerid, 553.000000, 103.000000, "_");
	PlayerTextDrawFont(playerid, ECMTextdraw[playerid][0], 1);
	PlayerTextDrawLetterSize(playerid, ECMTextdraw[playerid][0], 0.600000, 2.100000);
	PlayerTextDrawTextSize(playerid, ECMTextdraw[playerid][0], 298.500000, 122.000000);
	PlayerTextDrawSetOutline(playerid, ECMTextdraw[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, ECMTextdraw[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, ECMTextdraw[playerid][0], 2);
	PlayerTextDrawColor(playerid, ECMTextdraw[playerid][0], -1);
	PlayerTextDrawBackgroundColor(playerid, ECMTextdraw[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, ECMTextdraw[playerid][0], 135);
	PlayerTextDrawUseBox(playerid, ECMTextdraw[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, ECMTextdraw[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, ECMTextdraw[playerid][0], 0);

	ECMTextdraw[playerid][1] = CreatePlayerTextDraw(playerid, 553.000000, 106.000000, "_");
	PlayerTextDrawFont(playerid, ECMTextdraw[playerid][1], 1);
	PlayerTextDrawLetterSize(playerid, ECMTextdraw[playerid][1], 0.600000, 1.449999);
	PlayerTextDrawTextSize(playerid, ECMTextdraw[playerid][1], 298.500000, 116.500000);
	PlayerTextDrawSetOutline(playerid, ECMTextdraw[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, ECMTextdraw[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, ECMTextdraw[playerid][1], 2);
	PlayerTextDrawColor(playerid, ECMTextdraw[playerid][1], -1);
	PlayerTextDrawBackgroundColor(playerid, ECMTextdraw[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, ECMTextdraw[playerid][1], -1962934137);
	PlayerTextDrawUseBox(playerid, ECMTextdraw[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, ECMTextdraw[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, ECMTextdraw[playerid][1], 0);

	ECMTextdraw[playerid][2] = CreatePlayerTextDraw(playerid, 490.000000, 101.000000, "ld_beat:chit");
	PlayerTextDrawFont(playerid, ECMTextdraw[playerid][2], 4);
	PlayerTextDrawLetterSize(playerid, ECMTextdraw[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, ECMTextdraw[playerid][2], 23.000000, 23.000000);
	PlayerTextDrawSetOutline(playerid, ECMTextdraw[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, ECMTextdraw[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, ECMTextdraw[playerid][2], 1);
	PlayerTextDrawColor(playerid, ECMTextdraw[playerid][2], -1);
	PlayerTextDrawBackgroundColor(playerid, ECMTextdraw[playerid][2], 255);
	PlayerTextDrawBoxColor(playerid, ECMTextdraw[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, ECMTextdraw[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, ECMTextdraw[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, ECMTextdraw[playerid][2], 0);

	ECMTextdraw[playerid][3] = CreatePlayerTextDraw(playerid, 502.000000, 104.000000, "!");
	PlayerTextDrawFont(playerid, ECMTextdraw[playerid][3], 3);
	PlayerTextDrawLetterSize(playerid, ECMTextdraw[playerid][3], 0.400000, 1.699999);
	PlayerTextDrawTextSize(playerid, ECMTextdraw[playerid][3], 611.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ECMTextdraw[playerid][3], 0);
	PlayerTextDrawSetShadow(playerid, ECMTextdraw[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, ECMTextdraw[playerid][3], 2);
	PlayerTextDrawColor(playerid, ECMTextdraw[playerid][3], -16776961);
	PlayerTextDrawBackgroundColor(playerid, ECMTextdraw[playerid][3], 255);
	PlayerTextDrawBoxColor(playerid, ECMTextdraw[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, ECMTextdraw[playerid][3], 0);
	PlayerTextDrawSetProportional(playerid, ECMTextdraw[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, ECMTextdraw[playerid][3], 0);

	ECMTextdraw[playerid][4] = CreatePlayerTextDraw(playerid, 512.000000, 107.000000, "_"); // Caption
	PlayerTextDrawFont(playerid, ECMTextdraw[playerid][4], 3);
	PlayerTextDrawLetterSize(playerid, ECMTextdraw[playerid][4], 0.337500, 1.200000);
	PlayerTextDrawTextSize(playerid, ECMTextdraw[playerid][4], 611.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, ECMTextdraw[playerid][4], 0);
	PlayerTextDrawSetShadow(playerid, ECMTextdraw[playerid][4], 1);
	PlayerTextDrawAlignment(playerid, ECMTextdraw[playerid][4], 1);
	PlayerTextDrawColor(playerid, ECMTextdraw[playerid][4], -1);
	PlayerTextDrawBackgroundColor(playerid, ECMTextdraw[playerid][4], 255);
	PlayerTextDrawBoxColor(playerid, ECMTextdraw[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, ECMTextdraw[playerid][4], 0);
	PlayerTextDrawSetProportional(playerid, ECMTextdraw[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, ECMTextdraw[playerid][4], 0);

	ECMTextdraw[playerid][5] = CreatePlayerTextDraw(playerid, 492.000000, 126.500000, "_"); // String
	PlayerTextDrawFont(playerid, ECMTextdraw[playerid][5], 1);
	PlayerTextDrawLetterSize(playerid, ECMTextdraw[playerid][5], 0.258333, 1.250000);
	PlayerTextDrawTextSize(playerid, ECMTextdraw[playerid][5], 614.000000, 122.000000);
	PlayerTextDrawSetOutline(playerid, ECMTextdraw[playerid][5], 0);
	PlayerTextDrawSetShadow(playerid, ECMTextdraw[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, ECMTextdraw[playerid][5], 1);
	PlayerTextDrawColor(playerid, ECMTextdraw[playerid][5], -1);
	PlayerTextDrawBackgroundColor(playerid, ECMTextdraw[playerid][5], 255);
	PlayerTextDrawBoxColor(playerid, ECMTextdraw[playerid][5], 135);
	PlayerTextDrawUseBox(playerid, ECMTextdraw[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, ECMTextdraw[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, ECMTextdraw[playerid][5], 0);
}
