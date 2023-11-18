// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Untitled_RTS_Game : ModuleRules
{
	public Untitled_RTS_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
