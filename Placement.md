### Placement Points
- Define "Player" by looping through all players left alive in the game.
```cpp
Player->ClientReportTournamentPlacementPointsScored(1, 1);
```

### SDK (AFortPlayerControllerAthena)
```cpp
void ClientReportTournamentPlacementPointsScored(int32 Placement, int32 PointsEarned) 
{
  static auto Function = FindFunction("ClientReportTournamentPlacementPointsScored");

  struct { int32 Placement; int32 PointsEarned; }
  
  Params{ Placement, PointsEarned };

  this->ProcessEvent(Function, &Params);
}
```
