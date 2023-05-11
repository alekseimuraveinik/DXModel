
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomSerializable")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomSerializable
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomSerializable 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomSerializable 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoCustomCustomSerializable

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCustomSerializable_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomSerializable || defined(INCLUDE_PSCustomSerializable))
#define PSCustomSerializable_

@class PSCustomInputStream;
@class PSCustomOutputStream;

@protocol PSCustomSerializable < JavaObject >

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCustomSerializable)

J2OBJC_TYPE_LITERAL_HEADER(PSCustomSerializable)

#define ComDevexpertsPipestoneCommonIoCustomCustomSerializable PSCustomSerializable

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoCustomCustomSerializable")
