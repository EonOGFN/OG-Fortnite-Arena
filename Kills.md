### Solos (Required)
```cpp
KillerPlayerState->KillScore()++;
KillerPlayerState->OnRep_Kills();
KillerPlayerState->ClientReportKill(DeadPlayerState);
```

### Teams (Optional)
- Run this only if killer and victim are on different teams, and "PlayerState" means each player on the killer’s team.
```cpp
PlayerState->TeamKillScore()++;
PlayerState->OnRep_TeamKillScore();
PlayerState->ClientReportTeamKill(PlayerState->TeamKillScore());
```

### SDK (AFortPlayerStateAthena)
```cpp
int32& KillScore()
{
  static auto KillScore = GetOffset("KillScore");
  return Get<int32>(KillScore);
}

int32& TeamKillScore()
{
  static auto TeamKillScore = GetOffset("TeamKillScore");
  return Get<int32>(TeamKillScore);
}

void ClientReportTeamKill(int32 TeamKills) 
{
  static auto Function = FindFunction("ClientReportTeamKill");
  this->ProcessEvent(Function, &TeamKills);
}

void ClientReportKill(AFortPlayerStateAthena* Player)
{
  static auto Function = FindFunction("ClientReportKill");
  this->ProcessEvent(Function, &Player);
}

void OnRep_TeamKillScore()
{
  static auto Function = FindFunction("OnRep_TeamKillScore");
  this->ProcessEvent(Function);
}

void OnRep_Kills()
{
  static auto Function = FindFunction("OnRep_Kills");
  this->ProcessEvent(Function);
}
```
