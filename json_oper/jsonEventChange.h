#ifndef H_JSON_EVENT_CHANGE_H_20200428
#define H_JSON_EVENT_CHANGE_H_20200428

#include <string>

namespace COLLECTOR
{
	struct tagEventChange
	{
		std::string sDBName;
		int iEquipId;
		int iEventId;
		int iConditionId;
		int iEventLevel;
		int iEventStatus;
		std::string sEquipName;
		std::string sEventName;
		std::string sStartTimes;
		std::string sEndTimes;
	};

	std::string EventChangeToJson(const tagEventChange& value);
}


#endif
