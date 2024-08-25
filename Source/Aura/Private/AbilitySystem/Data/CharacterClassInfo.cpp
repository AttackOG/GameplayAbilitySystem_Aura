// GamePlayAbilitySystem course followed by AttackOG. Course was created by Stephen Ulibarri, founder of Druid Mechanics. Thank you!


#include "AbilitySystem/Data/CharacterClassInfo.h"

FCharacterClassDefaultInfo UCharacterClassInfo::GetClassDefaultInfo(ECharacterClass CharacterClass)
{
	return CharacterClassInfo.FindChecked(CharacterClass);
}
