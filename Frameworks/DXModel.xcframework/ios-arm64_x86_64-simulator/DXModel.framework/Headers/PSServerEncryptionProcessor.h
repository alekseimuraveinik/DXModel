
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSServerEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor || defined(INCLUDE_PSServerEncryptionProcessor))
#define PSServerEncryptionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor 1
#define INCLUDE_PSEncryptionProcessor 1
#include "PSEncryptionProcessor.h"

@class PSEncryptionOption;

@protocol PSServerEncryptionProcessor < PSEncryptionProcessor, JavaObject >

- (jboolean)isSupportedWithPSEncryptionOption:(PSEncryptionOption *)option;

@end

J2OBJC_EMPTY_STATIC_INIT(PSServerEncryptionProcessor)

J2OBJC_TYPE_LITERAL_HEADER(PSServerEncryptionProcessor)

#define ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor PSServerEncryptionProcessor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor")
