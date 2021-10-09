#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIList
#include <flixel/addons/ui/FlxUIList.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_10_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",10,0xc14028ac)
HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_102_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",102,0xc14028ac)
HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_128_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",128,0xc14028ac)
HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_133_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",133,0xc14028ac)
HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_139_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",139,0xc14028ac)
HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_164_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",164,0xc14028ac)
HX_DEFINE_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_169_new,"flixel.addons.ui.FlxUIList","new",0x6509e5c5,"flixel.addons.ui.FlxUIList.new","flixel/addons/ui/FlxUIList.hx",169,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_19_set_scrollIndex,"flixel.addons.ui.FlxUIList","set_scrollIndex",0xb192314d,"flixel.addons.ui.FlxUIList.set_scrollIndex","flixel/addons/ui/FlxUIList.hx",19,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_29_set_stacking,"flixel.addons.ui.FlxUIList","set_stacking",0xb189d012,"flixel.addons.ui.FlxUIList.set_stacking","flixel/addons/ui/FlxUIList.hx",29,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_39_set_spacing,"flixel.addons.ui.FlxUIList","set_spacing",0x33b41d0b,"flixel.addons.ui.FlxUIList.set_spacing","flixel/addons/ui/FlxUIList.hx",39,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_54_set_moreString,"flixel.addons.ui.FlxUIList","set_moreString",0xc23895be,"flixel.addons.ui.FlxUIList.set_moreString","flixel/addons/ui/FlxUIList.hx",54,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_186_destroy,"flixel.addons.ui.FlxUIList","destroy",0xade358df,"flixel.addons.ui.FlxUIList.destroy","flixel/addons/ui/FlxUIList.hx",186,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_197_setSize,"flixel.addons.ui.FlxUIList","setSize",0x9b350d68,"flixel.addons.ui.FlxUIList.setSize","flixel/addons/ui/FlxUIList.hx",197,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_214_add,"flixel.addons.ui.FlxUIList","add",0x65000786,"flixel.addons.ui.FlxUIList.add","flixel/addons/ui/FlxUIList.hx",214,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_223_safeAdd,"flixel.addons.ui.FlxUIList","safeAdd",0xfdf2e6b9,"flixel.addons.ui.FlxUIList.safeAdd","flixel/addons/ui/FlxUIList.hx",223,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_229_getMoreString,"flixel.addons.ui.FlxUIList","getMoreString",0x93c9dc21,"flixel.addons.ui.FlxUIList.getMoreString","flixel/addons/ui/FlxUIList.hx",229,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_239_set_visible,"flixel.addons.ui.FlxUIList","set_visible",0x451d61fa,"flixel.addons.ui.FlxUIList.set_visible","flixel/addons/ui/FlxUIList.hx",239,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_246_onClick,"flixel.addons.ui.FlxUIList","onClick",0x67f9468e,"flixel.addons.ui.FlxUIList.onClick","flixel/addons/ui/FlxUIList.hx",246,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_252_refreshList,"flixel.addons.ui.FlxUIList","refreshList",0x4de02e3e,"flixel.addons.ui.FlxUIList.refreshList","flixel/addons/ui/FlxUIList.hx",252,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_361_get_width,"flixel.addons.ui.FlxUIList","get_width",0x89f7c182,"flixel.addons.ui.FlxUIList.get_width","flixel/addons/ui/FlxUIList.hx",361,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_366_get_height,"flixel.addons.ui.FlxUIList","get_height",0xe52108eb,"flixel.addons.ui.FlxUIList.get_height","flixel/addons/ui/FlxUIList.hx",366,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_370_set_width,"flixel.addons.ui.FlxUIList","set_width",0x6d48ad8e,"flixel.addons.ui.FlxUIList.set_width","flixel/addons/ui/FlxUIList.hx",370,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_377_set_height,"flixel.addons.ui.FlxUIList","set_height",0xe89ea75f,"flixel.addons.ui.FlxUIList.set_height","flixel/addons/ui/FlxUIList.hx",377,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_12_boot,"flixel.addons.ui.FlxUIList","boot",0xfbb8272d,"flixel.addons.ui.FlxUIList.boot","flixel/addons/ui/FlxUIList.hx",12,0xc14028ac)
HX_LOCAL_STACK_FRAME(_hx_pos_a5e703d0cd5c8e74_13_boot,"flixel.addons.ui.FlxUIList","boot",0xfbb8272d,"flixel.addons.ui.FlxUIList.boot","flixel/addons/ui/FlxUIList.hx",13,0xc14028ac)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIList_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> Widgets,::hx::Null< Float >  __o_W,::hx::Null< Float >  __o_H,::String __o_MoreString, ::Dynamic __o_Stacking, ::Dynamic __o_Spacing, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float W = __o_W.Default(0);
            		Float H = __o_H.Default(0);
            		::String MoreString = __o_MoreString;
            		if (::hx::IsNull(__o_MoreString)) MoreString = HX_("<X> more...",7b,65,54,87);
            		 ::Dynamic Stacking = __o_Stacking;
            		if (::hx::IsNull(__o_Stacking)) Stacking = 1;
            		 ::Dynamic Spacing = __o_Spacing;
            		if (::hx::IsNull(__o_Spacing)) Spacing = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_10_new)
HXLINE( 226)		this->_skipRefresh = false;
HXLINE(  16)		this->scrollIndex = 0;
HXLINE(  82)		this->_skipRefresh = true;
HXLINE(  83)		super::__construct(X,Y);
HXLINE(  84)		this->set_stacking(( (int)(Stacking) ));
HXLINE(  85)		this->set_spacing(( (Float)(Spacing) ));
HXLINE(  86)		if (::hx::IsNotNull( Widgets )) {
HXLINE(  88)			int _g = 0;
HXDLIN(  88)			while((_g < Widgets->length)){
HXLINE(  88)				::Dynamic widget = Widgets->__get(_g);
HXDLIN(  88)				_g = (_g + 1);
HXLINE(  90)				this->add(( ( ::flixel::FlxSprite)(widget) ));
            			}
            		}
HXLINE(  94)		this->prevButton = PrevButton;
HXLINE(  95)		this->nextButton = NextButton;
HXLINE(  96)		this->prevButtonOffset = PrevButtonOffset;
HXLINE(  97)		this->nextButtonOffset = NextButtonOffset;
HXLINE(  98)		this->set_moreString(MoreString);
HXLINE( 100)		if (::hx::IsNull( this->prevButton )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,_g,int,i) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_102_new)
HXLINE( 102)				_g(i);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 102)			 ::Dynamic _g = this->onClick_dyn();
HXDLIN( 102)			int i = -1;
HXDLIN( 102)			 ::flixel::addons::ui::FlxUIButton pButton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,HX_(" ",20,00,00,00), ::Dynamic(new _hx_Closure_0(_g,i)),null(),null(),null());
HXLINE( 103)			if ((this->stacking == 0)) {
HXLINE( 105)				pButton->loadGraphicsUpOverDown(HX_("flixel/flixel-ui/img/button_arrow_left.png",7c,5a,70,a6),null(),null());
HXLINE( 106)				 ::flixel::addons::ui::FlxUIText pButton1 = ( ( ::flixel::addons::ui::FlxUIText)(pButton->label) );
HXDLIN( 106)				pButton1->set_width(( ( ::flixel::text::FlxText)(pButton->label) )->set_fieldWidth(( (Float)(100) )));
HXLINE( 107)				 ::flixel::addons::ui::FlxUIText pButton2 = ( ( ::flixel::addons::ui::FlxUIText)(pButton->label) );
HXDLIN( 107)				pButton2->set_text(this->getMoreString(0));
HXLINE( 109)				Float _hx_tmp = pButton->get_width();
HXDLIN( 109)				Float _hx_tmp1 = (_hx_tmp - ( ( ::flixel::text::FlxText)(pButton->label) )->get_width());
HXDLIN( 109)				pButton->setAllLabelOffsets(_hx_tmp1,(pButton->get_height() + 2));
HXLINE( 110)				( ( ::flixel::text::FlxText)(pButton->label) )->set_alignment(HX_("right",dc,0b,64,e9));
            			}
            			else {
HXLINE( 114)				pButton->loadGraphicsUpOverDown(HX_("flixel/flixel-ui/img/button_arrow_up.png",50,b0,49,c1),null(),null());
HXLINE( 115)				 ::flixel::addons::ui::FlxUIText pButton1 = ( ( ::flixel::addons::ui::FlxUIText)(pButton->label) );
HXDLIN( 115)				pButton1->set_width(( ( ::flixel::text::FlxText)(pButton->label) )->set_fieldWidth(( (Float)(100) )));
HXLINE( 116)				 ::flixel::addons::ui::FlxUIText pButton2 = ( ( ::flixel::addons::ui::FlxUIText)(pButton->label) );
HXDLIN( 116)				pButton2->set_text(this->getMoreString(0));
HXLINE( 117)				pButton->setAllLabelOffsets(( (Float)(0) ),( (Float)(0) ));
HXLINE( 118)				Float _hx_tmp = (pButton->get_width() + 2);
HXDLIN( 118)				Float _hx_tmp1 = pButton->get_height();
HXDLIN( 118)				pButton->setCenterLabelOffset(_hx_tmp,(_hx_tmp1 - ( ( ::flixel::text::FlxText)(pButton->label) )->get_height()));
HXLINE( 119)				( ( ::flixel::text::FlxText)(pButton->label) )->set_alignment(HX_("left",07,08,b0,47));
            			}
HXLINE( 121)			this->prevButton = pButton;
            		}
            		else {
HXLINE( 125)			if (::Std_obj::isOfType(this->prevButton,::hx::ClassOf< ::flixel::addons::ui::FlxUIButton >())) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,_g,int,i) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_128_new)
HXLINE( 128)					_g(i);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 127)				 ::flixel::addons::ui::FlxUIButton fuib = ( ( ::flixel::addons::ui::FlxUIButton)(this->prevButton) );
HXLINE( 128)				 ::Dynamic _g = this->onClick_dyn();
HXDLIN( 128)				int i = -1;
HXDLIN( 128)				 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_1(_g,i));
HXDLIN( 128)				fuib->onUp->callback = _hx_tmp;
            			}
HXLINE( 130)			if (::Std_obj::isOfType(this->prevButton,::hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >())) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,_g,int,i) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_133_new)
HXLINE( 133)					_g(i);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 132)				 ::flixel::addons::ui::FlxUISpriteButton fusb = ( ( ::flixel::addons::ui::FlxUISpriteButton)(this->prevButton) );
HXLINE( 133)				 ::Dynamic _g = this->onClick_dyn();
HXDLIN( 133)				int i = -1;
HXDLIN( 133)				 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_2(_g,i));
HXDLIN( 133)				fusb->onUp->callback = _hx_tmp;
            			}
            		}
HXLINE( 137)		if (::hx::IsNull( this->nextButton )) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,_g,int,i) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_139_new)
HXLINE( 139)				_g(i);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 139)			 ::Dynamic _g = this->onClick_dyn();
HXDLIN( 139)			int i = 1;
HXDLIN( 139)			 ::flixel::addons::ui::FlxUIButton nButton =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,0,0,HX_(" ",20,00,00,00), ::Dynamic(new _hx_Closure_3(_g,i)),null(),null(),null());
HXLINE( 140)			if ((this->stacking == 0)) {
HXLINE( 142)				nButton->loadGraphicsUpOverDown(HX_("flixel/flixel-ui/img/button_arrow_right.png",1d,44,0c,52),null(),null());
HXLINE( 143)				 ::flixel::addons::ui::FlxUIText nButton1 = ( ( ::flixel::addons::ui::FlxUIText)(nButton->label) );
HXDLIN( 143)				nButton1->set_width(( ( ::flixel::text::FlxText)(nButton->label) )->set_fieldWidth(( (Float)(100) )));
HXLINE( 144)				 ::flixel::addons::ui::FlxUIText nButton2 = ( ( ::flixel::addons::ui::FlxUIText)(nButton->label) );
HXDLIN( 144)				nButton2->set_text(this->getMoreString(0));
HXLINE( 145)				nButton->setAllLabelOffsets(( (Float)(0) ),(nButton->get_height() + 2));
HXLINE( 146)				( ( ::flixel::text::FlxText)(nButton->label) )->set_alignment(HX_("left",07,08,b0,47));
            			}
            			else {
HXLINE( 150)				nButton->loadGraphicsUpOverDown(HX_("flixel/flixel-ui/img/button_arrow_down.png",57,14,5d,d4),null(),null());
HXLINE( 151)				 ::flixel::addons::ui::FlxUIText nButton1 = ( ( ::flixel::addons::ui::FlxUIText)(nButton->label) );
HXDLIN( 151)				nButton1->set_width(( ( ::flixel::text::FlxText)(nButton->label) )->set_fieldWidth(( (Float)(100) )));
HXLINE( 152)				 ::flixel::addons::ui::FlxUIText nButton2 = ( ( ::flixel::addons::ui::FlxUIText)(nButton->label) );
HXDLIN( 152)				nButton2->set_text(this->getMoreString(0));
HXLINE( 153)				nButton->setAllLabelOffsets(( (Float)(0) ),( (Float)(0) ));
HXLINE( 154)				nButton->setCenterLabelOffset((nButton->get_width() + 2),( (Float)(0) ));
HXLINE( 155)				( ( ::flixel::text::FlxText)(nButton->label) )->set_alignment(HX_("left",07,08,b0,47));
            			}
HXLINE( 157)			this->nextButton = nButton;
            		}
            		else {
HXLINE( 161)			if (::Std_obj::isOfType(this->nextButton,::hx::ClassOf< ::flixel::addons::ui::FlxUIButton >())) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_4, ::Dynamic,_g,int,i) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_164_new)
HXLINE( 164)					_g(i);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 163)				 ::flixel::addons::ui::FlxUIButton fuib = ( ( ::flixel::addons::ui::FlxUIButton)(this->nextButton) );
HXLINE( 164)				 ::Dynamic _g = this->onClick_dyn();
HXDLIN( 164)				int i = 1;
HXDLIN( 164)				 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_4(_g,i));
HXDLIN( 164)				fuib->onUp->callback = _hx_tmp;
            			}
HXLINE( 166)			if (::Std_obj::isOfType(this->nextButton,::hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >())) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_5, ::Dynamic,_g,int,i) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_169_new)
HXLINE( 169)					_g(i);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 168)				 ::flixel::addons::ui::FlxUISpriteButton fusb = ( ( ::flixel::addons::ui::FlxUISpriteButton)(this->nextButton) );
HXLINE( 169)				 ::Dynamic _g = this->onClick_dyn();
HXDLIN( 169)				int i = 1;
HXDLIN( 169)				 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_5(_g,i));
HXDLIN( 169)				fusb->onUp->callback = _hx_tmp;
            			}
            		}
HXLINE( 173)		if (::hx::IsNull( this->prevButtonOffset )) {
HXLINE( 175)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 175)			point->_inPool = false;
HXDLIN( 175)			this->prevButtonOffset = point;
            		}
HXLINE( 177)		if (::hx::IsNull( this->nextButtonOffset )) {
HXLINE( 179)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN( 179)			point->_inPool = false;
HXDLIN( 179)			this->nextButtonOffset = point;
            		}
HXLINE( 181)		this->_skipRefresh = false;
HXLINE( 182)		this->setSize(W,H);
            	}

Dynamic FlxUIList_obj::__CreateEmpty() { return new FlxUIList_obj; }

void *FlxUIList_obj::_hx_vtable = 0;

Dynamic FlxUIList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIList_obj > _hx_result = new FlxUIList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11]);
	return _hx_result;
}

bool FlxUIList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x398eb8dc) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x398eb8dc;
		}
	} else {
		if (inClassId<=(int)0x7dab0655) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
		} else {
			return inClassId==(int)0x7ebfc95d;
		}
	}
}

int FlxUIList_obj::set_scrollIndex(int i){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_19_set_scrollIndex)
HXLINE(  20)		this->scrollIndex = i;
HXLINE(  21)		this->refreshList();
HXLINE(  22)		return i;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_scrollIndex,return )

int FlxUIList_obj::set_stacking(int Stacking){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_29_set_stacking)
HXLINE(  30)		this->stacking = Stacking;
HXLINE(  31)		this->refreshList();
HXLINE(  32)		return Stacking;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_stacking,return )

Float FlxUIList_obj::set_spacing(Float Spacing){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_39_set_spacing)
HXLINE(  40)		this->spacing = Spacing;
HXLINE(  41)		this->refreshList();
HXLINE(  42)		return Spacing;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_spacing,return )

::String FlxUIList_obj::set_moreString(::String str){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_54_set_moreString)
HXLINE(  55)		this->moreString = str;
HXLINE(  56)		this->refreshList();
HXLINE(  57)		return this->moreString;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,set_moreString,return )

void FlxUIList_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_186_destroy)
HXLINE( 187)		this->prevButton = null();
HXLINE( 188)		this->nextButton = null();
HXLINE( 189)		this->prevButtonOffset->put();
HXLINE( 190)		this->nextButtonOffset->put();
HXLINE( 191)		this->prevButtonOffset = null();
HXLINE( 192)		this->nextButtonOffset = null();
HXLINE( 193)		this->super::destroy();
            	}


void FlxUIList_obj::setSize(Float W,Float H){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_197_setSize)
HXLINE( 198)		bool flip = false;
HXLINE( 199)		if ((this->_skipRefresh == false)) {
HXLINE( 201)			this->_skipRefresh = true;
HXLINE( 202)			flip = true;
            		}
HXLINE( 204)		this->set_width(W);
HXLINE( 205)		this->set_height(H);
HXLINE( 206)		if (flip) {
HXLINE( 208)			this->_skipRefresh = false;
            		}
HXLINE( 210)		this->refreshList();
            	}


 ::Dynamic FlxUIList_obj::add( ::Dynamic _tmp_Object){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_214_add)
HXLINE( 215)		 ::flixel::FlxSprite Object = ( ( ::flixel::FlxSprite)(_tmp_Object) );
HXDLIN( 215)		this->super::add(Object);
HXLINE( 216)		this->refreshList();
HXLINE( 217)		return Object;
            	}


 ::flixel::FlxSprite FlxUIList_obj::safeAdd( ::flixel::FlxSprite Object){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_223_safeAdd)
HXDLIN( 223)		return ( ( ::flixel::FlxSprite)(this->super::add(Object)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,safeAdd,return )

::String FlxUIList_obj::getMoreString(int i){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_229_getMoreString)
HXLINE( 230)		::String newString = this->moreString;
HXLINE( 231)		while((newString.indexOf(HX_("<X>",22,d4,2d,00),null()) != -1)){
HXLINE( 233)			newString = ::StringTools_obj::replace(newString,HX_("<X>",22,d4,2d,00),::Std_obj::string(i));
            		}
HXLINE( 235)		return newString;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,getMoreString,return )

bool FlxUIList_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_239_set_visible)
HXLINE( 240)		this->super::set_visible(Value);
HXLINE( 241)		this->refreshList();
HXLINE( 242)		return Value;
            	}


void FlxUIList_obj::onClick(int i){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_246_onClick)
HXLINE( 247)		this->set_scrollIndex((this->scrollIndex + i));
HXLINE( 248)		this->refreshList();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIList_obj,onClick,(void))

void FlxUIList_obj::refreshList(){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_252_refreshList)
HXLINE( 253)		if (this->_skipRefresh) {
HXLINE( 255)			return;
            		}
HXLINE( 258)		this->autoBounds = false;
HXLINE( 260)		if ((this->group->members->indexOf(( ( ::flixel::FlxSprite)(this->prevButton) ),null()) != -1)) {
HXLINE( 262)			this->remove(( ( ::flixel::FlxSprite)(this->prevButton) ),true);
            		}
HXLINE( 264)		if ((this->group->members->indexOf(( ( ::flixel::FlxSprite)(this->nextButton) ),null()) != -1)) {
HXLINE( 266)			this->remove(( ( ::flixel::FlxSprite)(this->nextButton) ),true);
            		}
HXLINE( 269)		Float XX = ( (Float)(0) );
HXLINE( 270)		Float YY = ( (Float)(0) );
HXLINE( 272)		int i = 0;
HXLINE( 273)		bool inBounds = true;
HXLINE( 275)		if ((this->stacking == 0)) {
HXLINE( 277)			::Dynamic _hx_tmp = this->prevButton;
HXDLIN( 277)			Float _hx_tmp1 = this->prevButtonOffset->x;
HXDLIN( 277)			::flixel::IFlxSprite_obj::set_x(_hx_tmp,((_hx_tmp1 - ::flixel::addons::ui::interfaces::IFlxUIWidget_obj::get_width(this->prevButton)) - ( (Float)(2) )));
HXLINE( 278)			::flixel::IFlxSprite_obj::set_y(this->prevButton,this->prevButtonOffset->y);
HXLINE( 279)			::Dynamic _hx_tmp2 = this->nextButton;
HXDLIN( 279)			Float _hx_tmp3 = this->nextButtonOffset->x;
HXDLIN( 279)			::flixel::IFlxSprite_obj::set_x(_hx_tmp2,((_hx_tmp3 + this->get_width()) + 2));
HXLINE( 280)			::flixel::IFlxSprite_obj::set_y(this->nextButton,this->nextButtonOffset->y);
            		}
            		else {
HXLINE( 284)			::flixel::IFlxSprite_obj::set_x(this->prevButton,this->prevButtonOffset->x);
HXLINE( 285)			::Dynamic _hx_tmp = this->prevButton;
HXDLIN( 285)			Float _hx_tmp1 = this->prevButtonOffset->y;
HXDLIN( 285)			::flixel::IFlxSprite_obj::set_y(_hx_tmp,((_hx_tmp1 - ::flixel::addons::ui::interfaces::IFlxUIWidget_obj::get_height(this->prevButton)) - ( (Float)(2) )));
HXLINE( 286)			::flixel::IFlxSprite_obj::set_x(this->nextButton,this->nextButtonOffset->x);
HXLINE( 287)			::Dynamic _hx_tmp2 = this->nextButton;
HXDLIN( 287)			Float _hx_tmp3 = this->nextButtonOffset->y;
HXDLIN( 287)			::flixel::IFlxSprite_obj::set_y(_hx_tmp2,((_hx_tmp3 + this->get_height()) + 2));
            		}
HXLINE( 290)		::Dynamic _hx_tmp = this->prevButton;
HXDLIN( 290)		::flixel::IFlxSprite_obj::set_x(_hx_tmp,::Std_obj::_hx_int(( (Float)(this->prevButton->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) )));
HXLINE( 291)		::Dynamic _hx_tmp1 = this->prevButton;
HXDLIN( 291)		::flixel::IFlxSprite_obj::set_y(_hx_tmp1,::Std_obj::_hx_int(( (Float)(this->prevButton->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )));
HXLINE( 292)		::Dynamic _hx_tmp2 = this->nextButton;
HXDLIN( 292)		::flixel::IFlxSprite_obj::set_x(_hx_tmp2,::Std_obj::_hx_int(( (Float)(this->nextButton->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) )));
HXLINE( 293)		::Dynamic _hx_tmp3 = this->nextButton;
HXDLIN( 293)		::flixel::IFlxSprite_obj::set_y(_hx_tmp3,::Std_obj::_hx_int(( (Float)(this->nextButton->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )));
HXLINE( 295)		int highestIndex = 0;
HXLINE( 297)		{
HXLINE( 297)			int _g = 0;
HXDLIN( 297)			::Array< ::Dynamic> _g1 = this->group->members;
HXDLIN( 297)			while((_g < _g1->length)){
HXLINE( 297)				 ::flixel::FlxSprite widget = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 297)				_g = (_g + 1);
HXLINE( 299)				inBounds = false;
HXLINE( 300)				if ((i >= this->scrollIndex)) {
HXLINE( 302)					if ((this->stacking == 1)) {
HXLINE( 304)						Float inBounds1 = (YY + widget->get_height());
HXDLIN( 304)						if (!((inBounds1 <= this->get_height()))) {
HXLINE( 304)							inBounds = (this->get_height() <= 0);
            						}
            						else {
HXLINE( 304)							inBounds = true;
            						}
            					}
            					else {
HXLINE( 308)						Float inBounds1 = (XX + widget->get_width());
HXDLIN( 308)						if (!((inBounds1 <= this->get_width()))) {
HXLINE( 308)							inBounds = (this->get_width() <= 0);
            						}
            						else {
HXLINE( 308)							inBounds = true;
            						}
            					}
            				}
HXLINE( 311)				if (inBounds) {
HXLINE( 313)					highestIndex = i;
HXLINE( 314)					widget->set_visible(widget->set_active(true));
HXLINE( 315)					widget->set_x((this->x + XX));
HXLINE( 316)					widget->set_y((this->y + YY));
HXLINE( 317)					if ((this->stacking == 1)) {
HXLINE( 319)						Float YY1 = widget->get_height();
HXDLIN( 319)						YY = (YY + (YY1 + this->spacing));
            					}
            					else {
HXLINE( 323)						Float XX1 = widget->get_width();
HXDLIN( 323)						XX = (XX + (XX1 + this->spacing));
            					}
            				}
            				else {
HXLINE( 328)					widget->set_x(widget->set_y(( (Float)(0) )));
HXLINE( 329)					widget->set_visible(widget->set_active(false));
            				}
HXLINE( 331)				i = (i + 1);
            			}
            		}
HXLINE( 334)		this->amountPrevious = this->scrollIndex;
HXLINE( 335)		this->amountNext = (this->group->members->get_length() - (highestIndex + 1));
HXLINE( 337)		 ::flixel::addons::ui::FlxUIButton fuibutton;
HXLINE( 339)		if ((this->amountPrevious > 0)) {
HXLINE( 341)			this->safeAdd(( ( ::flixel::FlxSprite)(this->prevButton) ));
HXLINE( 342)			if (::Std_obj::isOfType(this->prevButton,::hx::ClassOf< ::flixel::addons::ui::FlxUIButton >())) {
HXLINE( 344)				fuibutton = ( ( ::flixel::addons::ui::FlxUIButton)(this->prevButton) );
HXLINE( 345)				 ::flixel::addons::ui::FlxUIText fuibutton1 = ( ( ::flixel::addons::ui::FlxUIText)(fuibutton->label) );
HXDLIN( 345)				fuibutton1->set_text(this->getMoreString(this->amountPrevious));
            			}
            		}
HXLINE( 348)		if ((this->amountNext > 0)) {
HXLINE( 350)			this->safeAdd(( ( ::flixel::FlxSprite)(this->nextButton) ));
HXLINE( 351)			if (::Std_obj::isOfType(this->nextButton,::hx::ClassOf< ::flixel::addons::ui::FlxUIButton >())) {
HXLINE( 353)				fuibutton = ( ( ::flixel::addons::ui::FlxUIButton)(this->nextButton) );
HXLINE( 354)				 ::flixel::addons::ui::FlxUIText fuibutton1 = ( ( ::flixel::addons::ui::FlxUIText)(fuibutton->label) );
HXDLIN( 354)				fuibutton1->set_text(this->getMoreString(this->amountNext));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIList_obj,refreshList,(void))

Float FlxUIList_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_361_get_width)
HXDLIN( 361)		return this->width;
            	}


Float FlxUIList_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_366_get_height)
HXDLIN( 366)		return this->height;
            	}


Float FlxUIList_obj::set_width(Float W){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_370_set_width)
HXLINE( 371)		this->width = W;
HXLINE( 372)		this->refreshList();
HXLINE( 373)		return W;
            	}


Float FlxUIList_obj::set_height(Float H){
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_377_set_height)
HXLINE( 378)		this->height = H;
HXLINE( 379)		this->refreshList();
HXLINE( 380)		return H;
            	}


int FlxUIList_obj::STACK_HORIZONTAL;

int FlxUIList_obj::STACK_VERTICAL;


::hx::ObjectPtr< FlxUIList_obj > FlxUIList_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> Widgets,::hx::Null< Float >  __o_W,::hx::Null< Float >  __o_H,::String __o_MoreString, ::Dynamic __o_Stacking, ::Dynamic __o_Spacing, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton) {
	::hx::ObjectPtr< FlxUIList_obj > __this = new FlxUIList_obj();
	__this->__construct(__o_X,__o_Y,Widgets,__o_W,__o_H,__o_MoreString,__o_Stacking,__o_Spacing,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
	return __this;
}

::hx::ObjectPtr< FlxUIList_obj > FlxUIList_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> Widgets,::hx::Null< Float >  __o_W,::hx::Null< Float >  __o_H,::String __o_MoreString, ::Dynamic __o_Stacking, ::Dynamic __o_Spacing, ::flixel::math::FlxPoint PrevButtonOffset, ::flixel::math::FlxPoint NextButtonOffset,::Dynamic PrevButton,::Dynamic NextButton) {
	FlxUIList_obj *__this = (FlxUIList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIList_obj), true, "flixel.addons.ui.FlxUIList"));
	*(void **)__this = FlxUIList_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Widgets,__o_W,__o_H,__o_MoreString,__o_Stacking,__o_Spacing,PrevButtonOffset,NextButtonOffset,PrevButton,NextButton);
	return __this;
}

FlxUIList_obj::FlxUIList_obj()
{
}

void FlxUIList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIList);
	HX_MARK_MEMBER_NAME(scrollIndex,"scrollIndex");
	HX_MARK_MEMBER_NAME(stacking,"stacking");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(prevButtonOffset,"prevButtonOffset");
	HX_MARK_MEMBER_NAME(nextButtonOffset,"nextButtonOffset");
	HX_MARK_MEMBER_NAME(prevButton,"prevButton");
	HX_MARK_MEMBER_NAME(nextButton,"nextButton");
	HX_MARK_MEMBER_NAME(moreString,"moreString");
	HX_MARK_MEMBER_NAME(amountPrevious,"amountPrevious");
	HX_MARK_MEMBER_NAME(amountNext,"amountNext");
	HX_MARK_MEMBER_NAME(_skipRefresh,"_skipRefresh");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scrollIndex,"scrollIndex");
	HX_VISIT_MEMBER_NAME(stacking,"stacking");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(prevButtonOffset,"prevButtonOffset");
	HX_VISIT_MEMBER_NAME(nextButtonOffset,"nextButtonOffset");
	HX_VISIT_MEMBER_NAME(prevButton,"prevButton");
	HX_VISIT_MEMBER_NAME(nextButton,"nextButton");
	HX_VISIT_MEMBER_NAME(moreString,"moreString");
	HX_VISIT_MEMBER_NAME(amountPrevious,"amountPrevious");
	HX_VISIT_MEMBER_NAME(amountNext,"amountNext");
	HX_VISIT_MEMBER_NAME(_skipRefresh,"_skipRefresh");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return ::hx::Val( spacing ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return ::hx::Val( setSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"safeAdd") ) { return ::hx::Val( safeAdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return ::hx::Val( onClick_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stacking") ) { return ::hx::Val( stacking ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"prevButton") ) { return ::hx::Val( prevButton ); }
		if (HX_FIELD_EQ(inName,"nextButton") ) { return ::hx::Val( nextButton ); }
		if (HX_FIELD_EQ(inName,"moreString") ) { return ::hx::Val( moreString ); }
		if (HX_FIELD_EQ(inName,"amountNext") ) { return ::hx::Val( amountNext ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollIndex") ) { return ::hx::Val( scrollIndex ); }
		if (HX_FIELD_EQ(inName,"set_spacing") ) { return ::hx::Val( set_spacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return ::hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshList") ) { return ::hx::Val( refreshList_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_stacking") ) { return ::hx::Val( set_stacking_dyn() ); }
		if (HX_FIELD_EQ(inName,"_skipRefresh") ) { return ::hx::Val( _skipRefresh ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMoreString") ) { return ::hx::Val( getMoreString_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_moreString") ) { return ::hx::Val( set_moreString_dyn() ); }
		if (HX_FIELD_EQ(inName,"amountPrevious") ) { return ::hx::Val( amountPrevious ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_scrollIndex") ) { return ::hx::Val( set_scrollIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"prevButtonOffset") ) { return ::hx::Val( prevButtonOffset ); }
		if (HX_FIELD_EQ(inName,"nextButtonOffset") ) { return ::hx::Val( nextButtonOffset ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUIList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_spacing(inValue.Cast< Float >()) );spacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stacking") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_stacking(inValue.Cast< int >()) );stacking=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"prevButton") ) { prevButton=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextButton") ) { nextButton=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moreString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_moreString(inValue.Cast< ::String >()) );moreString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amountNext") ) { amountNext=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scrollIndex(inValue.Cast< int >()) );scrollIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_skipRefresh") ) { _skipRefresh=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"amountPrevious") ) { amountPrevious=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"prevButtonOffset") ) { prevButtonOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextButtonOffset") ) { nextButtonOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("scrollIndex",c5,e3,f1,07));
	outFields->push(HX_("stacking",9a,62,b6,99));
	outFields->push(HX_("spacing",83,33,bb,91));
	outFields->push(HX_("prevButtonOffset",b8,9a,4a,42));
	outFields->push(HX_("nextButtonOffset",b8,60,7f,0a));
	outFields->push(HX_("prevButton",45,cd,55,da));
	outFields->push(HX_("nextButton",45,13,12,8f));
	outFields->push(HX_("moreString",46,da,94,7c));
	outFields->push(HX_("amountPrevious",2f,22,0f,11));
	outFields->push(HX_("amountNext",eb,8e,c8,74));
	outFields->push(HX_("_skipRefresh",1d,f7,9b,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIList_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxUIList_obj,scrollIndex),HX_("scrollIndex",c5,e3,f1,07)},
	{::hx::fsInt,(int)offsetof(FlxUIList_obj,stacking),HX_("stacking",9a,62,b6,99)},
	{::hx::fsFloat,(int)offsetof(FlxUIList_obj,spacing),HX_("spacing",83,33,bb,91)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIList_obj,prevButtonOffset),HX_("prevButtonOffset",b8,9a,4a,42)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxUIList_obj,nextButtonOffset),HX_("nextButtonOffset",b8,60,7f,0a)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxUIList_obj,prevButton),HX_("prevButton",45,cd,55,da)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxUIList_obj,nextButton),HX_("nextButton",45,13,12,8f)},
	{::hx::fsString,(int)offsetof(FlxUIList_obj,moreString),HX_("moreString",46,da,94,7c)},
	{::hx::fsInt,(int)offsetof(FlxUIList_obj,amountPrevious),HX_("amountPrevious",2f,22,0f,11)},
	{::hx::fsInt,(int)offsetof(FlxUIList_obj,amountNext),HX_("amountNext",eb,8e,c8,74)},
	{::hx::fsBool,(int)offsetof(FlxUIList_obj,_skipRefresh),HX_("_skipRefresh",1d,f7,9b,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUIList_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxUIList_obj::STACK_HORIZONTAL,HX_("STACK_HORIZONTAL",db,1f,fd,43)},
	{::hx::fsInt,(void *) &FlxUIList_obj::STACK_VERTICAL,HX_("STACK_VERTICAL",ad,7f,2e,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIList_obj_sMemberFields[] = {
	HX_("scrollIndex",c5,e3,f1,07),
	HX_("set_scrollIndex",68,18,9f,c4),
	HX_("stacking",9a,62,b6,99),
	HX_("set_stacking",17,3a,c9,63),
	HX_("spacing",83,33,bb,91),
	HX_("set_spacing",a6,9a,22,22),
	HX_("prevButtonOffset",b8,9a,4a,42),
	HX_("nextButtonOffset",b8,60,7f,0a),
	HX_("prevButton",45,cd,55,da),
	HX_("nextButton",45,13,12,8f),
	HX_("moreString",46,da,94,7c),
	HX_("set_moreString",03,4b,aa,12),
	HX_("amountPrevious",2f,22,0f,11),
	HX_("amountNext",eb,8e,c8,74),
	HX_("destroy",fa,2c,86,24),
	HX_("setSize",83,e1,d7,11),
	HX_("add",21,f2,49,00),
	HX_("safeAdd",d4,ba,95,74),
	HX_("_skipRefresh",1d,f7,9b,ee),
	HX_("getMoreString",7c,36,07,d9),
	HX_("set_visible",95,df,8b,33),
	HX_("onClick",a9,1a,9c,de),
	HX_("refreshList",d9,ab,4e,3c),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_width",69,fe,5c,f1),
	HX_("set_height",24,16,51,f6),
	::String(null()) };

static void FlxUIList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIList_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxUIList_obj::STACK_VERTICAL,"STACK_VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIList_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxUIList_obj::STACK_VERTICAL,"STACK_VERTICAL");
};

#endif

::hx::Class FlxUIList_obj::__mClass;

static ::String FlxUIList_obj_sStaticFields[] = {
	HX_("STACK_HORIZONTAL",db,1f,fd,43),
	HX_("STACK_VERTICAL",ad,7f,2e,ce),
	::String(null())
};

void FlxUIList_obj::__register()
{
	FlxUIList_obj _hx_dummy;
	FlxUIList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIList",53,9f,d0,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIList_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUIList_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIList_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_12_boot)
HXDLIN(  12)		STACK_HORIZONTAL = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a5e703d0cd5c8e74_13_boot)
HXDLIN(  13)		STACK_VERTICAL = 1;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
