// GamePlayAbilitySystem course followed by AttackOG. Course was created by Stephen Ulibarri, founder of Druid Mechanics. Thank you!


#include "AuraAssetManager.h"
#include "AbilitySystemGlobals.h"
#include "AuraGameplayTags.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);
	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *AuraAssetManager;
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	FAuraGameplayTags::InitializeNativeGameplayTags();
	UAbilitySystemGlobals::Get().InitTargetDataScriptStructCache();
}
