#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IFlxUIClickable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_set_skipButtonUpdate)(bool value); 
		static inline bool set_skipButtonUpdate( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *>(_hx_.mPtr->_hx_getInterface(0x3e998408)))->_hx_set_skipButtonUpdate)(value);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable */ 
