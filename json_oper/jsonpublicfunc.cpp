#include <stdio.h>
#include "jsonpublicfunc.h"

#ifdef _WIN32
#define snprintf_ss sprintf_s
#else
#define snprintf_ss snprintf
#endif

namespace COLLECTOR
{
	void AddVectorInt(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::vector<int>& vValue)
	{
		writer.Key(sKey.c_str());
		writer.StartArray();
		for (int i = 0; i < vValue.size(); ++i)
		{
			writer.Int(vValue[i]);
		}
		writer.EndArray();
	}
	void AddVectorString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::vector<std::string>& vValue)
	{
		writer.Key(sKey.c_str());
		writer.StartArray();
		for (int i = 0; i < vValue.size(); ++i)
		{
			writer.String(vValue[i].c_str());
		}
		writer.EndArray();
	}
	void AddString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::string& sValue)
	{
		writer.Key(sKey.c_str());
		writer.String(sValue.c_str());
	}
	void AddSetString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::set<std::string>& vValue)
	{
		writer.Key(sKey.c_str());
		writer.StartArray();
		std::set<std::string>::const_iterator it = vValue.begin();
		while (it != vValue.end())
		{
			writer.String((*it).c_str());
			it++;
		}
		writer.EndArray();
	}
	void AddMapIntString(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, const std::map<int, std::string>& vValue)
	{
		writer.Key(sKey.c_str());
		writer.StartObject();
		std::map<int, std::string>::const_iterator it = vValue.begin();
		while (it != vValue.end())
		{
			char buf[32] = { 0 };
			snprintf_ss(buf, sizeof(buf)-1, "%d", it->first);
			writer.Key(buf);
			writer.String(it->second.c_str());
			it++;
		}

		writer.EndObject();
	}

	void AddInt(rapidjson::Writer<rapidjson::StringBuffer>& writer, const std::string& sKey, int i32Value)
	{
		writer.Key(sKey.c_str());
		writer.Int(i32Value);
	}

}