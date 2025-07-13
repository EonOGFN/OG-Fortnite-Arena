// Player should be defined by looping through all alive players inside ClientOnPawnDied.
Player->ClientReportTournamentPlacementPointsScored(1, 1);

// FortPlayerControllerAthena
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
