search this (in ACMD(do_user_horse_ride)):

	if (ch->IsHorseRiding() == false)

		
after before this:

	LPITEM armor = ch->GetWear(WEAR_BODY);
	if (armor)
	{
		DWORD blockWeeding[4] = {11901, 11902, 11903, 11904};
		for (auto armorVnum : blockWeeding) {
			if (armor->GetVnum() == armorVnum)
			{
				ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("you can't ride if you are in a fitted wedding suit/dress."));
				return;
			}
		}
	}

search this (in ACMD(do_ride) )

	if (ch->GetMapIndex() == 113)
		return;

before add this:

	LPITEM armor = ch->GetWear(WEAR_BODY);
	if (armor)
	{
		DWORD blockWeeding[4] = {11901, 11902, 11903, 11904};
		for (auto armorVnum : blockWeeding) {
			if (armor->GetVnum() == armorVnum)
			{
				ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("you can't ride if you are in a fitted wedding suit/dress."));
				return;
			}
		}
	}
