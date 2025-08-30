void AddArenaWidget() 
{
    UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_ShowdownAlt_Solo.Playlist_ShowdownAlt_Solo");
    if (!Playlist)
        return;
    
    FPlaylistUIExtension UIExtension;
    UIExtension.Slot = EPlaylistUIExtensionSlot::Primary;
    UIExtension.WidgetClass.ObjectID.AssetPathName = UKismetStringLibrary::Conv_StringToName("/Game/UI/Frontend/Showdown/ShowdownScoringHUD.ShowdownScoringHUD_C"); // If it doesn't work, use "/Game/UI/Competitive/Arena/ArenaScoringHUD.ArenaScoringHUD_C"
  
    Playlist->UIExtensions.Add(UIExtension);
}
