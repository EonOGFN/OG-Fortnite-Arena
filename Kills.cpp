// ClientOnPawnDied
auto Kills = KillerPlayerState->Get<int>(MemberOffsets::FortPlayerStateAthena::TeamKillScore);
KillerPlayerState->ClientReportTeamKill(Kills);

// FortPlayerStateAthena
void ClientReportTeamKill(int32 TeamKills)
{
  static auto ClientReportTeamKillFN = FindObject<UFunction>(L"/Script/FortniteGame.FortPlayerStateAthena.ClientReportTeamKill");
  this->ProcessEvent(ClientReportTeamKillFN, &TeamKills);
}
