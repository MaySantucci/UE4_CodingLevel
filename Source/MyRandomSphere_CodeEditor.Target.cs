// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyRandomSphere_CodeEditorTarget : TargetRules
{
	public MyRandomSphere_CodeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "MyRandomSphere_Code" } );
	}
}
