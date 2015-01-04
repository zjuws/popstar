#include "StarParticle.h"
#include "Star.h"
void showStarParticleEffect(int color,Point position,Node* node){
	ParticleExplosion* effect = ParticleExplosion::create();
	effect->setTexture(Director::getInstance()->getTextureCache()->addImage("star.png"));
	effect->setTotalParticles(15);
	effect->setStartColor(getColor4F(color));
	effect->setStartColorVar(Color4F(0,0,0,1));
	effect->setEndColor(getColor4F(color));
	effect->setEndColorVar(Color4F(0,0,0,1));
	effect->setStartSize(25.0f);
	effect->setGravity(Point(0,-300));
	effect->setLife(1.0f);
	effect->setSpeed(200);
	effect->setSpeedVar(10);
	effect->setPosition(position);
	node->addChild(effect);
}

Color4F getColor4F(int color){
	switch(color){
	case Star::color::PURPLE:
		return Color4F(0.74,0.30,0.99,1);
		//return Color4F(189,78,253,1);
	case Star::color::BLUE:
		return Color4F(84/255.0f,203/255.0f,254/255.0f,1);
	case Star::color::RED:
		return Color4F(253/255.0f,80/255.0f,126/255.0f,1);
	case Star::color::YELLOW:
		return Color4F(253/255.0f,234/255.0f,84/255.0f,1);
	case Star::color::GREEN:
		return Color4F(132/255.0f,226/255.0f,111/255.0f,1);
	}
	return Color4F(1,1,1,0);
}