### Kill Points  
- **Note:** Points are handled automatically by the backend. Use this only if the points pop-up doesn’t show on your screen.
```cpp
auto Kills = KillerPlayerState->Get<int>(MemberOffsets::FortPlayerStateAthena::TeamKillScore);
KillerPlayerState->ClientReportTeamKill(Kills);
```
```cpp
void ClientReportTeamKill(int32 TeamKills)
{
  static auto ClientReportTeamKillFN = FindObject<UFunction>(L"/Script/FortniteGame.FortPlayerStateAthena.ClientReportTeamKill");
  this->ProcessEvent(ClientReportTeamKillFN, &TeamKills);
}
```
### Top Placement / Victory Royale Points  
- **Param Usage:** `(Placement, PointsEarned)` is for the top placement and the points to give the player.  
- **Victory Points:** Use `(1, x)` where `1` is the Victory Placement, and `x` is the points to give for a Win.  
- **Placement Points:** For Top-25, use `(25, x)` and set `x` to the points you want to award.  
```cpp
Player->ClientReportTournamentPlacementPointsScored(1, 1);
```
```cpp
void ClientReportTournamentPlacementPointsScored(int32 Placement, int32 PointsEarned)
{
  static auto ClientReportTournamentPlacementPointsScoredFN = FindObject<UFunction>(L"/Script/FortniteGame.FortPlayerControllerAthena.ClientReportTournamentPlacementPointsScored");

  struct
  {
    int32 Placement;
    int32 PointsEarned;
  } AFortPlayerControllerAthena_ClientReportTournamentPlacementPointsScored_Params{ Placement, PointsEarned };

  this->ProcessEvent(ClientReportTournamentPlacementPointsScoredFN, &AFortPlayerControllerAthena_ClientReportTournamentPlacementPointsScored_Params);
}
```
