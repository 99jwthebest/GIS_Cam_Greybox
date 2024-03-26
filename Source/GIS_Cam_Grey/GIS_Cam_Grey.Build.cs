// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GIS_Cam_Grey : ModuleRules
{
	public GIS_Cam_Grey(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
