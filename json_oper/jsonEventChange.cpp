#include "jsonEventChange.h"
#include "jsonpublicfunc.h"

namespace COLLECTOR
{
	std::string EventChangeToJson(const tagEventChange& value)
	{
		rapidjson::StringBuffer strBuf;
		rapidjson::Writer<rapidjson::StringBuffer> writer(strBuf);
		writer.StartObject();
		AddString(writer, "Type", "EventChange");
		AddString(writer, "sDBName", value.sDBName);
		AddInt(writer,"iEquipId",value.iEquipId);
		AddInt(writer, "iEventId", value.iEventId);
		AddInt(writer, "iConditionId", value.iConditionId);
		AddInt(writer, "iEventLevel", value.iEventLevel);
		AddInt(writer, "iEventStatus", value.iEventStatus);
		AddString(writer, "sEquipName", value.sEquipName);
		AddString(writer, "sEventName", value.sEventName);
		AddString(writer, "sStartTimes", value.sStartTimes);
		AddString(writer, "sEndTimes", value.sEndTimes);
		writer.EndObject();
		return strBuf.GetString();
	}

}