
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConfiguration")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoConfiguration
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConfiguration 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConfiguration 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoConfiguration

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConfiguration_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConfiguration || defined(INCLUDE_PSConfiguration))
#define PSConfiguration_

@protocol PSCompressionProcessor;
@protocol PSEncryptionProcessor;
@protocol PSSerializationProcessor;

@protocol PSConfiguration < JavaObject >

- (id<PSSerializationProcessor>)getSerialization;

- (id<PSEncryptionProcessor>)getEncryption;

- (id<PSCompressionProcessor>)getCompression;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConfiguration)

J2OBJC_TYPE_LITERAL_HEADER(PSConfiguration)

#define ComDevexpertsPipestoneCommonIoConfiguration PSConfiguration

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoConfiguration")
