sleep 10;

[
    ["UpdateDetails",missionNameSource],
    ["UpdateState",TTTname],
    ["UpdateLargeImageKey","ttt_logo"],
    ["UpdatePartySize",count playableUnits],
    ["UpdatePartyMax",getNumber(missionConfigFile >> "Header" >> "maxPlayers")],
    ["UpdateButtons",["Webseite","https://www.tacticalteam.de/","Teamspeak","ts3server://ts3.tacticalteam.de/?port=9987"]]
] call (missionNameSpace getVariable ["DiscordRichPresence_fnc_update",{}]);
