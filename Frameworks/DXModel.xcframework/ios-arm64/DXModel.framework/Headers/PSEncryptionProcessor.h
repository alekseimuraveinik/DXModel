
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor || defined(INCLUDE_PSEncryptionProcessor))
#define PSEncryptionProcessor_

@class PSEncryptionOption;
@protocol PSConnection;

@protocol PSEncryptionProcessor < JavaObject >

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                     withPSEncryptionOption:(PSEncryptionOption *)option;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEncryptionProcessor)

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptionProcessor)

#define ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor PSEncryptionProcessor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptionProcessor")
