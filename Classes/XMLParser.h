#ifndef XML_PARSE_H
#define XML_PARSE_H
 
#include <string>
#include "cocos2d.h"
 
class XMLParser : public cocos2d::CCObject, public cocos2d::SAXDelegator
{
public:
    static XMLParser* parseWithFile(const char *xmlFileName);
 
    static XMLParser* parseWithString(const char *content);
 
    XMLParser();
    virtual ~XMLParser();
 
    
// �ӱ���xml�ļ���ȡ
    bool initWithFile(const char *xmlFileName);
 
    
// ���ַ��ж�ȡ�������ڶ�ȡ�����е�xml����
    bool initWithString(const char *content);
 
    
/**
    
*��Ӧxml��ǩ��ʼ,�磺<string name="alex">, nameΪstring��attsΪstring�����ԣ���["name","alex"]
    
*/
    virtual void startElement(void *ctx, const char *name, const char **atts);
 
    
/**
    
*��Ӧxml��ǩ����,�磺</string>
    
*/
    virtual void endElement(void *ctx, const char *name);
 
    
/**
    
*��Ӧxml��ǩ�ı�,�磺<string name="alex">Alex Zhou</string>��Alex Zhou
    
*/
    virtual void textHandler(void *ctx, const char *s, int len);
 
    cocos2d::CCString* getString(const char *key);
 
private:
    cocos2d::CCDictionary *m_pDictionary;
    std::string m_key;
 
    std::string startXMLElement;
    std::string endXMLElement;
 
};
 
#endif