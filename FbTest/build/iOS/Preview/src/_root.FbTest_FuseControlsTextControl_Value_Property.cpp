// This file was generated based on /Users/malmgren/Documents/PublicKnowledge/FbTest/build/iOS/Preview/cache/ux11/FbTest.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FbTest_FuseControlsTextControl_Value_Property.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class FbTest_FuseControlsTextControl_Value_Property :37
// {
static void FbTest_FuseControlsTextControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FbTest_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FbTest_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FbTest_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FbTest_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FbTest_FuseControlsTextControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FbTest_FuseControlsTextControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FbTest_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FbTest_FuseControlsTextControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FbTest_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FbTest_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :40
void FbTest_FuseControlsTextControl_Value_Property__ctor_2_fn(FbTest_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :42
void FbTest_FuseControlsTextControl_Value_Property__Get_fn(FbTest_FuseControlsTextControl_Value_Property* __this, uString** __retval)
{
    uStackFrame __("FbTest_FuseControlsTextControl_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FbTest_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :40
void FbTest_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FbTest_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FbTest_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void FbTest_FuseControlsTextControl_Value_Property__get_Object_fn(FbTest_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :43
void FbTest_FuseControlsTextControl_Value_Property__Set_fn(FbTest_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FbTest_FuseControlsTextControl_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :44
void FbTest_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FbTest_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FbTest_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :40
void FbTest_FuseControlsTextControl_Value_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FbTest_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :40
FbTest_FuseControlsTextControl_Value_Property* FbTest_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FbTest_FuseControlsTextControl_Value_Property* obj1 = (FbTest_FuseControlsTextControl_Value_Property*)uNew(FbTest_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
