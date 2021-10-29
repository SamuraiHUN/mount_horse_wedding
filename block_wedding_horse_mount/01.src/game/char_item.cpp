search this: (in bool CHARACTER::EquipItem(LPITEM item, int iCandidateCell) )

	if (item->IsRideItem())
	{
		if (IsRiding())
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("ŔĚąĚ Ĺ»°ÍŔ» ŔĚżëÁßŔÔ´Ď´Ů."));
			return false;
		}

		if (IsPolymorphed())
		{
			ChatPacket(CHAT_TYPE_INFO, LC_TEXT("şŻ˝Ĺ »óĹÂżˇĽ­´Â ¸»żˇ Ĺ» Ľö ľř˝Ŕ´Ď´Ů."));
			return false;
		}
	}

change to:

    if (item->IsRideItem())
    {
        if (IsRiding())
        {
            ChatPacket(CHAT_TYPE_INFO, LC_TEXT("ŔĚąĚ Ĺ»°ÍŔ» ŔĚżëÁßŔÔ´Ď´Ů."));
            return false;
        }

        if (IsPolymorphed())
        {
            ChatPacket(CHAT_TYPE_INFO, LC_TEXT("şŻ˝Ĺ »óĹÂżˇĽ­´Â ¸»żˇ Ĺ» Ľö ľř˝Ŕ´Ď´Ů."));
            return false;
        }
        
        if (iWearCell == (item->GetVnum() >= 11901 && item->GetVnum() <= 11904))
        {
            ChatPacket(CHAT_TYPE_INFO, LC_TEXT("¸»Ŕ» Ĺş »óĹÂżˇĽ­ żąşąŔ» ŔÔŔ» Ľö ľř˝Ŕ´Ď´Ů."));
            return false;
        }
    }