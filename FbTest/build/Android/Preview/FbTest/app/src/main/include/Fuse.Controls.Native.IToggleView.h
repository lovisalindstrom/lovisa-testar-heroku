// This file was generated based on '/Users/malmgren/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IToggleView :410
// {
uInterfaceType* IToggleView_typeof();

struct IToggleView
{
    void(*fp_set_Value)(uObject*, bool*);
    static void Value(const uInterface& __this, bool value) { __this.VTable<IToggleView>()->fp_set_Value(__this, &value); }
};
// }

}}}} // ::g::Fuse::Controls::Native
