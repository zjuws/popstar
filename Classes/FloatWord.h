#ifndef _FLOATWORD_H_
#define _FLOATWORD_H_
#include "cocos2d.h"
using namespace cocos2d;
class FloatWord : public Node{
public:
	static FloatWord* create(const std::string& word,const int fontSize,Point begin);
	bool init(const std::string& word,const int fontSize,Point begin);
	void floatIn(const float delay,std::function<void()> callback);
	void floatOut(const float delay,std::function<void()> callback);
	void floatInOut(const float speed,const float delay,std::function<void()> callback);

private:
	int _fontSize;
	Point _begin;
	Label* _label;
};
#endif