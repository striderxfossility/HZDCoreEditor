#pragma once

#include "common.h"
#include "RTTI.h"

namespace RTTICSharpExporter
{
	void ExportAll(const char *Directory);
	void ExportFileHeader(FILE *F);
	void ExportFileFooter(FILE *F);
	void ExportRTTIEnum(FILE *F, const RTTI *Type);
	void ExportRTTIClass(FILE *F, const RTTI *Type);

	const char *EnumTypeToString(const RTTI *Type);
	bool IsBaseClassSuperfluous(const RTTI *Type);
	bool IsPostLoadCallbackEnabled(const RTTI *Type);
	bool IsMemberNameDuplicated(const RTTI *Type, const RTTIMemberTypeInfo *MemberInfo);
	void FilterMemberNameString(std::string& Name);
}