// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberMan_Patrones : ModuleRules
{
	public BomberMan_Patrones(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
