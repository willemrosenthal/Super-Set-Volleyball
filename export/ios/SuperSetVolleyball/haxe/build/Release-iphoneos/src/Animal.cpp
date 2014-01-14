#include <hxcpp.h>

#ifndef INCLUDED_Animal
#include <Animal.h>
#endif
#ifndef INCLUDED_Calcs
#include <Calcs.h>
#endif
#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IDestroyable
#include <flixel/IDestroyable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Animal_obj::__construct(Float X,Float Y)
{
HX_STACK_PUSH("Animal::new","Animal.hx",9);
{
	HX_STACK_LINE(36)
	this->still = true;
	HX_STACK_LINE(35)
	this->afacing = HX_CSTRING("sit");
	HX_STACK_LINE(30)
	this->sink = false;
	HX_STACK_LINE(29)
	this->swimming = false;
	HX_STACK_LINE(26)
	this->musicOn = true;
	HX_STACK_LINE(24)
	this->wTimerMax = (int)10;
	HX_STACK_LINE(23)
	this->wTimer = (int)0;
	HX_STACK_LINE(22)
	this->wander = true;
	HX_STACK_LINE(18)
	this->inParade = false;
	HX_STACK_LINE(17)
	this->pickedUp = false;
	HX_STACK_LINE(16)
	this->followDistance = (int)23;
	HX_STACK_LINE(14)
	this->vy = (int)80;
	HX_STACK_LINE(13)
	this->vx = (int)50;
	HX_STACK_LINE(12)
	this->velocityMax = (int)100;
	HX_STACK_LINE(40)
	super::__construct(X,Y,null());
	HX_STACK_LINE(41)
	this->lastPos = ::flixel::util::FlxPoint_obj::__new(X,Y);
	HX_STACK_LINE(42)
	this->emitter();
}
;
	return null();
}

Animal_obj::~Animal_obj() { }

Dynamic Animal_obj::__CreateEmpty() { return  new Animal_obj; }
hx::ObjectPtr< Animal_obj > Animal_obj::__new(Float X,Float Y)
{  hx::ObjectPtr< Animal_obj > result = new Animal_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Animal_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animal_obj > result = new Animal_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Animal_obj::emitter( ){
{
		HX_STACK_PUSH("Animal::emitter","Animal.hx",196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		this->music = ::flixel::effects::particles::FlxEmitter_obj::__new(this->x,this->y,null());
		HX_STACK_LINE(198)
		this->music->setSize((int)5,(int)5);
		HX_STACK_LINE(199)
		this->music->setXSpeed((int)-20,(int)20);
		HX_STACK_LINE(200)
		this->music->setYSpeed((int)-35,(int)-75);
		HX_STACK_LINE(201)
		this->music->set_gravity((int)0);
		HX_STACK_LINE(202)
		this->music->setRotation((int)0,(int)0);
		HX_STACK_LINE(203)
		this->music->bounce = (int)0;
		HX_STACK_LINE(204)
		this->music->makeParticles(HX_CSTRING("assets/music.png"),(int)4,(int)0,true,(int)0,null());
		HX_STACK_LINE(205)
		if (((::Math_obj::random() < 0.5))){
			HX_STACK_LINE(206)
			this->music->setColor((int)16776960,(int)65535);
		}
		else{
			HX_STACK_LINE(208)
			this->music->setColor((int)65535,(int)16711935);
		}
		HX_STACK_LINE(210)
		::Global_obj::game->add(this->music);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animal_obj,emitter,(void))

Void Animal_obj::swimCheck( ){
{
		HX_STACK_PUSH("Animal::swimCheck","Animal.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_LINE(142)
		if (((::Global_obj::waterTiles->length == (int)0))){
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(144)
		this->loc = ::Global_obj::cMap->getTile(::Math_obj::floor((Float(this->x) / Float((int)16))),::Math_obj::floor((Float(this->y) / Float((int)16))));
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< int > _g1 = ::Global_obj::waterTiles;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(146)
			while(((_g < _g1->length))){
				HX_STACK_LINE(146)
				int t = _g1->__get(_g);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(146)
				++(_g);
				HX_STACK_LINE(147)
				if (((t == this->loc))){
					HX_STACK_LINE(148)
					this->sink = true;
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(151)
				this->sink = false;
			}
		}
		HX_STACK_LINE(153)
		if ((!(this->sink))){
			HX_STACK_LINE(154)
			if (((this->loc == ::Global_obj::waterEdges->__get((int)0)))){
				HX_STACK_LINE(154)
				if (((bool((::Math_obj::abs((::Math_obj::floor((Float(this->x) / Float((int)16))) - (Float(this->x) / Float((int)16)))) > 0.5)) && bool((::Math_obj::abs((::Math_obj::floor((Float(this->y) / Float((int)16))) - (Float(this->y) / Float((int)16)))) > 0.5))))){
					HX_STACK_LINE(156)
					this->sink = true;
				}
			}
			HX_STACK_LINE(158)
			if (((this->loc == ::Global_obj::waterEdges->__get((int)1)))){
				HX_STACK_LINE(158)
				if (((bool((::Math_obj::abs((::Math_obj::floor((Float(this->x) / Float((int)16))) - (Float(this->x) / Float((int)16)))) < 0.5)) && bool((::Math_obj::abs((::Math_obj::floor((Float(this->y) / Float((int)16))) - (Float(this->y) / Float((int)16)))) > 0.5))))){
					HX_STACK_LINE(160)
					this->sink = true;
				}
			}
			HX_STACK_LINE(162)
			if (((this->loc == ::Global_obj::waterEdges->__get((int)2)))){
				HX_STACK_LINE(162)
				if (((bool((::Math_obj::abs((::Math_obj::floor((Float(this->x) / Float((int)16))) - (Float(this->x) / Float((int)16)))) > 0.4)) && bool((::Math_obj::abs((::Math_obj::floor((Float(this->y) / Float((int)16))) - (Float(this->y) / Float((int)16)))) < 0.6))))){
					HX_STACK_LINE(164)
					this->sink = true;
				}
			}
			HX_STACK_LINE(166)
			if (((this->loc == ::Global_obj::waterEdges->__get((int)3)))){
				HX_STACK_LINE(166)
				if (((bool((::Math_obj::abs((::Math_obj::floor((Float(this->x) / Float((int)16))) - (Float(this->x) / Float((int)16)))) < 0.6)) && bool((::Math_obj::abs((::Math_obj::floor((Float(this->y) / Float((int)16))) - (Float(this->y) / Float((int)16)))) < 0.5))))){
					HX_STACK_LINE(168)
					this->sink = true;
				}
			}
		}
		HX_STACK_LINE(171)
		if ((this->sink)){
			HX_STACK_LINE(171)
			if (((::Math_obj::abs(this->moveDifX) > ::Math_obj::abs(this->moveDifY)))){
				HX_STACK_LINE(173)
				if (((this->moveDifX < (int)0))){
					HX_STACK_LINE(174)
					this->set_facing((int)16);
				}
				HX_STACK_LINE(175)
				if (((this->moveDifX > (int)0))){
					HX_STACK_LINE(176)
					this->set_facing((int)1);
				}
				HX_STACK_LINE(177)
				this->animation->play(HX_CSTRING("runsides"),null(),null());
				HX_STACK_LINE(178)
				this->afacing = HX_CSTRING("side");
			}
			else{
				HX_STACK_LINE(180)
				if (((bool((::Math_obj::abs(this->moveDifX) < ::Math_obj::abs(this->moveDifY))) && bool((this->moveDifY > (int)0))))){
					HX_STACK_LINE(181)
					this->animation->play(HX_CSTRING("rundowns"),null(),null());
					HX_STACK_LINE(182)
					this->afacing = HX_CSTRING("down");
				}
				else{
					HX_STACK_LINE(184)
					if (((bool((::Math_obj::abs(this->moveDifX) < ::Math_obj::abs(this->moveDifY))) && bool((this->moveDifY < (int)0))))){
						HX_STACK_LINE(185)
						this->animation->play(HX_CSTRING("runups"),null(),null());
						HX_STACK_LINE(186)
						this->afacing = HX_CSTRING("up");
					}
					else{
						HX_STACK_LINE(188)
						if (((bool((this->afacing == HX_CSTRING("side"))) && bool(this->still)))){
							HX_STACK_LINE(188)
							this->animation->play(HX_CSTRING("idlesides"),null(),null());
						}
						else{
							HX_STACK_LINE(189)
							if (((bool((this->afacing == HX_CSTRING("down"))) && bool(this->still)))){
								HX_STACK_LINE(189)
								this->animation->play(HX_CSTRING("idledowns"),null(),null());
							}
							else{
								HX_STACK_LINE(190)
								if (((bool((this->afacing == HX_CSTRING("up"))) && bool(this->still)))){
									HX_STACK_LINE(190)
									this->animation->play(HX_CSTRING("idleups"),null(),null());
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animal_obj,swimCheck,(void))

Void Animal_obj::update( ){
{
		HX_STACK_PUSH("Animal::update","Animal.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_LINE(54)
		this->super::update();
		HX_STACK_LINE(56)
		if ((this->pickedUp)){
			HX_STACK_LINE(57)
			this->set_x(::Global_obj::paradeX->__get(this->fd));
			HX_STACK_LINE(58)
			this->set_y(::Global_obj::paradeY->__get(this->fd));
			HX_STACK_LINE(60)
			if ((this->musicOn)){
				HX_STACK_LINE(61)
				this->music->set_x((this->x - (this->music->get_width() * 0.5)));
				HX_STACK_LINE(62)
				this->music->set_y(((this->y - (this->music->get_height() * 0.5)) - (this->get_height() * (int)2)));
			}
		}
		else{
			HX_STACK_LINE(65)
			if ((this->wander)){
				HX_STACK_LINE(67)
				(this->wTimer)++;
				HX_STACK_LINE(68)
				if (((this->wTimer == this->wTimerMax))){
					HX_STACK_LINE(70)
					this->wTimer = (int)0;
					HX_STACK_LINE(71)
					this->wTimerMax = ::Math_obj::round(((::Math_obj::random() * (int)100) + (int)50));
					HX_STACK_LINE(72)
					if (((::Math_obj::random() < 0.5))){
						HX_STACK_LINE(74)
						this->acceleration->set_x((int)0);
						HX_STACK_LINE(75)
						this->acceleration->set_y((int)0);
						HX_STACK_LINE(76)
						this->velocity->set_x((int)0);
						HX_STACK_LINE(77)
						this->velocity->set_y((int)0);
					}
					else{
						HX_STACK_LINE(81)
						this->velocity->set_x((::Calcs_obj::plusOrMinus((int)20) * ::Math_obj::round(::Math_obj::random())));
						HX_STACK_LINE(82)
						this->velocity->set_y((::Calcs_obj::plusOrMinus(19.5) * ::Math_obj::round(::Math_obj::random())));
					}
				}
				HX_STACK_LINE(85)
				if (((bool((this->x > (::flixel::FlxG_obj::worldBounds->width - (int)5))) && bool((this->velocity->x > (int)0))))){
					HX_STACK_LINE(86)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(86)
					_g->set_x((_g->x * (int)-1));
				}
				HX_STACK_LINE(87)
				if (((bool((this->x < (int)5)) && bool((this->velocity->x < (int)0))))){
					HX_STACK_LINE(88)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(88)
					_g->set_x((_g->x * (int)-1));
				}
				HX_STACK_LINE(89)
				if (((bool((this->y > (::flixel::FlxG_obj::worldBounds->height - (int)5))) && bool((this->velocity->y > (int)0))))){
					HX_STACK_LINE(90)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(90)
					_g->set_y((_g->y * (int)-1));
				}
				HX_STACK_LINE(91)
				if (((bool((this->y < (int)10)) && bool((this->velocity->y < (int)0))))){
					HX_STACK_LINE(92)
					::flixel::util::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(92)
					_g->set_y((_g->y * (int)-1));
				}
			}
		}
		HX_STACK_LINE(96)
		this->moveDifX = (this->x - this->lastPos->x);
		HX_STACK_LINE(97)
		this->moveDifY = (this->y - this->lastPos->y);
		HX_STACK_LINE(100)
		if (((bool((this->moveDifX == (int)0)) && bool((this->moveDifY == (int)0))))){
			HX_STACK_LINE(101)
			this->still = true;
		}
		else{
			HX_STACK_LINE(102)
			this->still = false;
		}
		HX_STACK_LINE(104)
		if ((this->swimming)){
			HX_STACK_LINE(105)
			this->swimCheck();
		}
		HX_STACK_LINE(107)
		if ((!(this->sink))){
			HX_STACK_LINE(107)
			if (((::Math_obj::abs(this->moveDifX) > ::Math_obj::abs(this->moveDifY)))){
				HX_STACK_LINE(109)
				if (((this->moveDifX < (int)0))){
					HX_STACK_LINE(110)
					this->set_facing((int)16);
				}
				HX_STACK_LINE(111)
				if (((this->moveDifX > (int)0))){
					HX_STACK_LINE(112)
					this->set_facing((int)1);
				}
				HX_STACK_LINE(113)
				this->animation->play(HX_CSTRING("runside"),null(),null());
				HX_STACK_LINE(114)
				this->afacing = HX_CSTRING("side");
			}
			else{
				HX_STACK_LINE(116)
				if (((bool((::Math_obj::abs(this->moveDifX) < ::Math_obj::abs(this->moveDifY))) && bool((this->moveDifY > (int)0))))){
					HX_STACK_LINE(117)
					this->animation->play(HX_CSTRING("rundown"),null(),null());
					HX_STACK_LINE(118)
					this->afacing = HX_CSTRING("down");
				}
				else{
					HX_STACK_LINE(120)
					if (((bool((::Math_obj::abs(this->moveDifX) < ::Math_obj::abs(this->moveDifY))) && bool((this->moveDifY < (int)0))))){
						HX_STACK_LINE(121)
						this->animation->play(HX_CSTRING("runup"),null(),null());
						HX_STACK_LINE(122)
						this->afacing = HX_CSTRING("up");
					}
					else{
						HX_STACK_LINE(124)
						if (((bool((this->afacing == HX_CSTRING("side"))) && bool(this->still)))){
							HX_STACK_LINE(124)
							this->animation->play(HX_CSTRING("idleside"),null(),null());
						}
						else{
							HX_STACK_LINE(125)
							if (((bool((this->afacing == HX_CSTRING("down"))) && bool(this->still)))){
								HX_STACK_LINE(125)
								this->animation->play(HX_CSTRING("idledown"),null(),null());
							}
							else{
								HX_STACK_LINE(126)
								if (((bool((this->afacing == HX_CSTRING("up"))) && bool(this->still)))){
									HX_STACK_LINE(126)
									this->animation->play(HX_CSTRING("idleup"),null(),null());
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(130)
		this->lastPos->set_x(this->x);
		HX_STACK_LINE(131)
		this->lastPos->set_y(this->y);
	}
return null();
}


Void Animal_obj::joinParade( ){
{
		HX_STACK_PUSH("Animal::joinParade","Animal.hx",45);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animal_obj,joinParade,(void))


Animal_obj::Animal_obj()
{
}

void Animal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animal);
	HX_MARK_MEMBER_NAME(loc,"loc");
	HX_MARK_MEMBER_NAME(moveDifY,"moveDifY");
	HX_MARK_MEMBER_NAME(moveDifX,"moveDifX");
	HX_MARK_MEMBER_NAME(still,"still");
	HX_MARK_MEMBER_NAME(afacing,"afacing");
	HX_MARK_MEMBER_NAME(goTo,"goTo");
	HX_MARK_MEMBER_NAME(lastPos,"lastPos");
	HX_MARK_MEMBER_NAME(sink,"sink");
	HX_MARK_MEMBER_NAME(swimming,"swimming");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(musicOn,"musicOn");
	HX_MARK_MEMBER_NAME(wTimerMax,"wTimerMax");
	HX_MARK_MEMBER_NAME(wTimer,"wTimer");
	HX_MARK_MEMBER_NAME(wander,"wander");
	HX_MARK_MEMBER_NAME(fd,"fd");
	HX_MARK_MEMBER_NAME(linePlace,"linePlace");
	HX_MARK_MEMBER_NAME(inParade,"inParade");
	HX_MARK_MEMBER_NAME(pickedUp,"pickedUp");
	HX_MARK_MEMBER_NAME(followDistance,"followDistance");
	HX_MARK_MEMBER_NAME(vy,"vy");
	HX_MARK_MEMBER_NAME(vx,"vx");
	HX_MARK_MEMBER_NAME(velocityMax,"velocityMax");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Animal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loc,"loc");
	HX_VISIT_MEMBER_NAME(moveDifY,"moveDifY");
	HX_VISIT_MEMBER_NAME(moveDifX,"moveDifX");
	HX_VISIT_MEMBER_NAME(still,"still");
	HX_VISIT_MEMBER_NAME(afacing,"afacing");
	HX_VISIT_MEMBER_NAME(goTo,"goTo");
	HX_VISIT_MEMBER_NAME(lastPos,"lastPos");
	HX_VISIT_MEMBER_NAME(sink,"sink");
	HX_VISIT_MEMBER_NAME(swimming,"swimming");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(musicOn,"musicOn");
	HX_VISIT_MEMBER_NAME(wTimerMax,"wTimerMax");
	HX_VISIT_MEMBER_NAME(wTimer,"wTimer");
	HX_VISIT_MEMBER_NAME(wander,"wander");
	HX_VISIT_MEMBER_NAME(fd,"fd");
	HX_VISIT_MEMBER_NAME(linePlace,"linePlace");
	HX_VISIT_MEMBER_NAME(inParade,"inParade");
	HX_VISIT_MEMBER_NAME(pickedUp,"pickedUp");
	HX_VISIT_MEMBER_NAME(followDistance,"followDistance");
	HX_VISIT_MEMBER_NAME(vy,"vy");
	HX_VISIT_MEMBER_NAME(vx,"vx");
	HX_VISIT_MEMBER_NAME(velocityMax,"velocityMax");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Animal_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fd") ) { return fd; }
		if (HX_FIELD_EQ(inName,"vy") ) { return vy; }
		if (HX_FIELD_EQ(inName,"vx") ) { return vx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { return loc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"goTo") ) { return goTo; }
		if (HX_FIELD_EQ(inName,"sink") ) { return sink; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"still") ) { return still; }
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"wTimer") ) { return wTimer; }
		if (HX_FIELD_EQ(inName,"wander") ) { return wander; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter_dyn(); }
		if (HX_FIELD_EQ(inName,"afacing") ) { return afacing; }
		if (HX_FIELD_EQ(inName,"lastPos") ) { return lastPos; }
		if (HX_FIELD_EQ(inName,"musicOn") ) { return musicOn; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveDifY") ) { return moveDifY; }
		if (HX_FIELD_EQ(inName,"moveDifX") ) { return moveDifX; }
		if (HX_FIELD_EQ(inName,"swimming") ) { return swimming; }
		if (HX_FIELD_EQ(inName,"inParade") ) { return inParade; }
		if (HX_FIELD_EQ(inName,"pickedUp") ) { return pickedUp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"swimCheck") ) { return swimCheck_dyn(); }
		if (HX_FIELD_EQ(inName,"wTimerMax") ) { return wTimerMax; }
		if (HX_FIELD_EQ(inName,"linePlace") ) { return linePlace; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"joinParade") ) { return joinParade_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"velocityMax") ) { return velocityMax; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"followDistance") ) { return followDistance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animal_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fd") ) { fd=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vy") ) { vy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vx") ) { vx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { loc=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"goTo") ) { goTo=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sink") ) { sink=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"still") ) { still=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"wTimer") ) { wTimer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wander") ) { wander=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"afacing") ) { afacing=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastPos") ) { lastPos=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"musicOn") ) { musicOn=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveDifY") ) { moveDifY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveDifX") ) { moveDifX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swimming") ) { swimming=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inParade") ) { inParade=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pickedUp") ) { pickedUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wTimerMax") ) { wTimerMax=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"linePlace") ) { linePlace=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"velocityMax") ) { velocityMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"followDistance") ) { followDistance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("loc"));
	outFields->push(HX_CSTRING("moveDifY"));
	outFields->push(HX_CSTRING("moveDifX"));
	outFields->push(HX_CSTRING("still"));
	outFields->push(HX_CSTRING("afacing"));
	outFields->push(HX_CSTRING("goTo"));
	outFields->push(HX_CSTRING("lastPos"));
	outFields->push(HX_CSTRING("sink"));
	outFields->push(HX_CSTRING("swimming"));
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("musicOn"));
	outFields->push(HX_CSTRING("wTimerMax"));
	outFields->push(HX_CSTRING("wTimer"));
	outFields->push(HX_CSTRING("wander"));
	outFields->push(HX_CSTRING("fd"));
	outFields->push(HX_CSTRING("linePlace"));
	outFields->push(HX_CSTRING("inParade"));
	outFields->push(HX_CSTRING("pickedUp"));
	outFields->push(HX_CSTRING("followDistance"));
	outFields->push(HX_CSTRING("vy"));
	outFields->push(HX_CSTRING("vx"));
	outFields->push(HX_CSTRING("velocityMax"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("emitter"),
	HX_CSTRING("swimCheck"),
	HX_CSTRING("loc"),
	HX_CSTRING("update"),
	HX_CSTRING("moveDifY"),
	HX_CSTRING("moveDifX"),
	HX_CSTRING("joinParade"),
	HX_CSTRING("still"),
	HX_CSTRING("afacing"),
	HX_CSTRING("goTo"),
	HX_CSTRING("lastPos"),
	HX_CSTRING("sink"),
	HX_CSTRING("swimming"),
	HX_CSTRING("music"),
	HX_CSTRING("musicOn"),
	HX_CSTRING("wTimerMax"),
	HX_CSTRING("wTimer"),
	HX_CSTRING("wander"),
	HX_CSTRING("fd"),
	HX_CSTRING("linePlace"),
	HX_CSTRING("inParade"),
	HX_CSTRING("pickedUp"),
	HX_CSTRING("followDistance"),
	HX_CSTRING("vy"),
	HX_CSTRING("vx"),
	HX_CSTRING("velocityMax"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animal_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animal_obj::__mClass,"__mClass");
};

Class Animal_obj::__mClass;

void Animal_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Animal"), hx::TCanCast< Animal_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animal_obj::__boot()
{
}

