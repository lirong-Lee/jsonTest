#ifndef H_JSON_PUBLIC_FUNC_H_20200423
#define H_JSON_PUBLIC_FUNC_H_20200423

#include <vector>
#include <string>
#include <set>
#include <map>
#include "../rapidjson/stringbuffer.h"
#include "../rapidjson/writer.h"
#include "../rapidjson/document.h"
using namespace rapidjson;

namespace COLLECTOR
{
	void AddVectorInt(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::vector<int>& vValue);
	void AddVectorString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::vector<std::string>& vValue);
	void AddString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::string& sValue);
	void AddInt(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey,int i32Value);
	void AddSetString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::set<std::string>& vValue);
	void AddMapIntString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::map<int, std::string>& vValue);
}

#endif
