// This file was generated based on /Users/malmgren/Documents/PublicKnowledge/FbTest/build/Android/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FbTest_bundle.h>
#include <_root.FbTest_FuseControlsTextControl_Value_Property.h>
#include <_root.FbTest_FuseControlsWebView_Url_Property.h>
#include <_root.FbTest_FuseDrawingImageFill_Url_Property.h>
#include <_root.FbTest_FuseElementsElement_Opacity_Property.h>
#include <_root.FbTest_FuseTriggersActionsDebugAction_Message_Property.h>
#include <_root.FbTest_FuseTriggersWhileBool_Value_Property.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[17];
static uType* TYPES[13];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :21
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"nvh"*/], ::STRINGS[1/*"webView"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Url"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"Message"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"nvh"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"webView"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("nvh");
    ::STRINGS[1] = uString::Const("webView");
    ::STRINGS[2] = uString::Const("Url");
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("Message");
    ::STRINGS[6] = uString::Const("pageLoaded");
    ::STRINGS[7] = uString::Const("url");
    ::STRINGS[8] = uString::Const("showWebView");
    ::STRINGS[9] = uString::Const("myPicture");
    ::STRINGS[10] = uString::Const("myName");
    ::STRINGS[11] = uString::Const("hasProfile");
    ::STRINGS[12] = uString::Const("login");
    ::STRINGS[13] = uString::Const("MainView.ux");
    ::STRINGS[14] = uString::Const("return { url : document.location.href };");
    ::STRINGS[15] = uString::Const("Welcome");
    ::STRINGS[16] = uString::Const("Login with facebook");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::NativeViewHost_typeof(), offsetof(::g::MainView, nvh), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, nvh_Opacity_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp1_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp2_Message_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, temp5_Value_inst), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::MainView, webView), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, webView_Url_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 29;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :25
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :29
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :25
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;

// public MainView() [instance] :25
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :29
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::Http* temp6 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp7 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Triggers::BusyTaskModule* temp8 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp9 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp10 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp11 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp12 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp13 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp14 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp15 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp16 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp17 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp18 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    webView = ::g::Fuse::Controls::WebView::New4();
    webView_Url_inst = ::g::FbTest_FuseControlsWebView_Url_Property::New1(webView, MainView::__selector0());
    nvh = ::g::Fuse::Controls::NativeViewHost::New3();
    nvh_Opacity_inst = ::g::FbTest_FuseElementsElement_Opacity_Property::New1(nvh, MainView::__selector1());
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::FbTest_FuseTriggersWhileBool_Value_Property::New1(temp, MainView::__selector2());
    ::g::Fuse::Drawing::ImageFill* temp1 = ::g::Fuse::Drawing::ImageFill::New2();
    temp1_Url_inst = ::g::FbTest_FuseDrawingImageFill_Url_Property::New1(temp1, MainView::__selector0());
    ::g::Fuse::Triggers::Actions::DebugAction* temp2 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    temp2_Message_inst = ::g::FbTest_FuseTriggersActionsDebugAction_Message_Property::New1(temp2, MainView::__selector3());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::FbTest_FuseControlsTextControl_Value_Property::New1(temp3, MainView::__selector2());
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp4_Value_inst = ::g::FbTest_FuseTriggersWhileBool_Value_Property::New1(temp4, MainView::__selector2());
    ::g::Fuse::Triggers::WhileFalse* temp5 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp5_Value_inst = ::g::FbTest_FuseTriggersWhileBool_Value_Property::New1(temp5, MainView::__selector2());
    ::g::Fuse::Controls::DockPanel* temp19 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Reactive::JavaScript* temp20 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StatusBarBackground* temp21 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp22 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp23 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Triggers::PageLoaded* temp25 = ::g::Fuse::Triggers::PageLoaded::New2();
    ::g::Fuse::Triggers::Actions::EvaluateJS* temp26 = ::g::Fuse::Triggers::Actions::EvaluateJS::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"pageLoaded"*/]);
    ::g::Fuse::Reactive::DataBinding* temp27 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], webView_Url_inst, ::STRINGS[7/*"url"*/]);
    ::g::Fuse::Triggers::AddingAnimation* temp28 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp29 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], nvh_Opacity_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp30 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp31 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp_Value_inst, ::STRINGS[8/*"showWebView"*/]);
    ::g::Fuse::Controls::Panel* temp32 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp35 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp36 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Controls::Panel* temp38 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Circle* temp39 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp40 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp41 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp42 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Url_inst, ::STRINGS[9/*"myPicture"*/]);
    ::g::Fuse::Gestures::Clicked* temp43 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp44 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp2_Message_inst, ::STRINGS[9/*"myPicture"*/]);
    ::g::Fuse::Controls::StackPanel* temp45 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp46 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp47 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[10/*"myName"*/]);
    ::g::Fuse::Triggers::AddingAnimation* temp48 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp49 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp50 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp4_Value_inst, ::STRINGS[11/*"hasProfile"*/]);
    ::g::Fuse::Controls::DockPanel* temp51 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp52 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp53 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.2313726f, 0.3490196f, 0.5960785f, 1.0f));
    ::g::Fuse::Controls::Image* temp54 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp55 = ::g::Fuse::Controls::Text::New3();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[12/*"login"*/]);
    ::g::Fuse::Reactive::DataBinding* temp56 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[3/*Fuse.Reactive.DataBinding<bool>*/], temp5_Value_inst, ::STRINGS[11/*"hasProfile"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp20->LineNumber(4);
    temp20->FileName(::STRINGS[13/*"MainView.ux"*/]);
    temp20->File(::g::Uno::UX::BundleFileSource::New1(::g::FbTest_bundle::MainView320358cd()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp21, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp22, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    uPtr(nvh)->Name(MainView::__selector4());
    uPtr(nvh)->Background(temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nvh)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    uPtr(webView)->Name(MainView::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(webView)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp26->JavaScript(::STRINGS[14/*"return { ur...*/]);
    temp26->add_Handler(uDelegate::New(::TYPES[7/*Fuse.Triggers.Actions.JSEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Fuse::Animations::Change__set_Value_fn(temp29, uCRef(0.0f));
    temp29->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    temp33->Alignment(4);
    temp33->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp34->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp34->Layer(1);
    temp34->Fill(temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp35);
    temp35->Width(2.0f);
    temp35->Brush(temp36);
    temp38->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Fills()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Strokes()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp42);
    temp40->Width(4.0f);
    temp40->Brush(temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp44);
    temp45->Alignment(10);
    temp45->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp46->Value(::STRINGS[15/*"Welcome"*/]);
    temp46->FontSize(22.0f);
    temp46->TextAlignment(1);
    temp3->FontSize(26.0f);
    temp3->TextAlignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Animators()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp49);
    temp49->Y(1.0f);
    temp49->Duration(1.5);
    temp49->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp49->Easing(::g::Fuse::Animations::Easing::BackIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Nodes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp56);
    temp51->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp51->Alignment(10);
    temp51->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 15.0f, 5.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp51, uDelegate::New(::TYPES[11/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp52->CornerRadius(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    temp52->Layer(1);
    temp52->Fill(temp53);
    temp54->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 10.0f, 8.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp54, 0);
    temp54->File(::g::Uno::UX::BundleFileSource::New1(::g::FbTest_bundle::FBfLogo__white_5126c5f8368()));
    temp55->Value(::STRINGS[16/*"Login with ...*/]);
    temp55->FontSize(20.0f);
    temp55->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp55->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), nvh);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), webView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public MainView New() [static] :25
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
