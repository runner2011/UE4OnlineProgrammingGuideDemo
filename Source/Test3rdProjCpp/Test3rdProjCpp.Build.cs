// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test3rdProjCpp : ModuleRules
{
	public Test3rdProjCpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
