#ifndef H_JSON_VALUE_CHANGE_H_20200423
#define H_JSON_VALUE_CHANGE_H_20200423

#include <string>

namespace COLLECTOR
{
	struct tagValueChange
	{
		std::string sDBName;
		int iEquipId;
		int iSigId;
		int iBaseSigId;
		int iTimes;
		std::string sValue;
	};

	std::string ValueChangeToJson(const tagValueChange& value);
}


#endif
