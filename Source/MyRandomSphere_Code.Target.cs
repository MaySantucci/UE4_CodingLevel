// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyRandomSphere_CodeTarget : TargetRules
{
	public MyRandomSphere_CodeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "MyRandomSphere_Code" } );
	}
}
