#ifndef INCLUDED_openfl_net_IDynamicPropertyOutput
#define INCLUDED_openfl_net_IDynamicPropertyOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,IDynamicPropertyOutput)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES IDynamicPropertyOutput_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_writeDynamicProperty)(::String name, ::Dynamic value); 
		static inline void writeDynamicProperty( ::Dynamic _hx_,::String name, ::Dynamic value) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::net::IDynamicPropertyOutput_obj *>(_hx_.mPtr->_hx_getInterface(0x78651bd9)))->_hx_writeDynamicProperty)(name,value);
		}
};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_IDynamicPropertyOutput */ 
