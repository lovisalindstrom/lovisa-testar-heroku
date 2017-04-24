// This file was generated based on /Users/malmgren/Documents/PublicKnowledge/FbTest/FbTest.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FbTest_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[3];

namespace g{

// public static generated class FbTest_bundle :0
// {
// static FbTest_bundle() :0
static void FbTest_bundle__cctor__fn(uType* __type)
{
    FbTest_bundle::FBfLogo__white_5126c5f8368_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"FbTest"*/]))->GetFile(::STRINGS[1/*"fb-f-logo__...*/]);
    FbTest_bundle::MainView320358cd_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"FbTest"*/]))->GetFile(::STRINGS[2/*"mainview-cb...*/]);
}

static void FbTest_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FbTest");
    ::STRINGS[1] = uString::Const("fb-f-logo__white_51-773bc124.png");
    ::STRINGS[2] = uString::Const("mainview-cb8c4a65.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FbTest_bundle::FBfLogo__white_5126c5f8368_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FbTest_bundle::MainView320358cd_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("FBfLogo__white_5126c5f8368", 0),
        new uField("MainView320358cd", 1));
}

uClassType* FbTest_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FbTest_bundle", options);
    type->fp_build_ = FbTest_bundle_build;
    type->fp_cctor_ = FbTest_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FbTest_bundle::FBfLogo__white_5126c5f8368_;
uSStrong< ::g::Uno::IO::BundleFile*> FbTest_bundle::MainView320358cd_;
// }

} // ::g
