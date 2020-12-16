#include "jsonValueChange.h"
#include "jsonpublicfunc.h"

namespace COLLECTOR
{
	std::string ValueChangeToJson(const tagValueChange& value)
	{
		rapidjson::StringBuffer strBuf;
		rapidjson::Writer<rapidjson::StringBuffer> writer(strBuf);
		writer.StartObject();
		AddString(writer, "Type", "ValueChange");
		AddString(writer, "sDBName", value.sDBName);
		AddInt(writer,"iEquipId",value.iEquipId);
		AddInt(writer, "iSigId", value.iSigId);
		AddInt(writer, "iBaseSigId", value.iBaseSigId);
		AddInt(writer, "iTimes", value.iTimes);
		AddString(writer, "sValue", value.sValue);
		writer.EndObject();
		return strBuf.GetString();
	}

}