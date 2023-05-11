
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor || defined(INCLUDE_PSClientEncryptionProcessor))
#define PSClientEncryptionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor 1
#define INCLUDE_PSEncryptionProcessor 1
#include "PSEncryptionProcessor.h"

@class PSEncryptionParams;
@protocol JavaUtilList;

@protocol PSClientEncryptionProcessor < PSEncryptionProcessor, JavaObject >

- (id<JavaUtilList>)supportedOptionsWithPSEncryptionParams:(PSEncryptionParams *)params;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientEncryptionProcessor)

J2OBJC_TYPE_LITERAL_HEADER(PSClientEncryptionProcessor)

#define ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor PSClientEncryptionProcessor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor")
