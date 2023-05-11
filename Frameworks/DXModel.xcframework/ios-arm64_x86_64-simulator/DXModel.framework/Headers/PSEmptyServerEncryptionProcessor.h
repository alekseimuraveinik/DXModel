
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEmptyServerEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor || defined(INCLUDE_PSEmptyServerEncryptionProcessor))
#define PSEmptyServerEncryptionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedServerEncryptionProcessor 1
#define INCLUDE_PSServerEncryptionProcessor 1
#include "PSServerEncryptionProcessor.h"

@class PSEncryptionOption;
@protocol PSConnection;

@interface PSEmptyServerEncryptionProcessor : NSObject < PSServerEncryptionProcessor >

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)isSupportedWithPSEncryptionOption:(PSEncryptionOption *)option;

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                     withPSEncryptionOption:(PSEncryptionOption *)option;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEmptyServerEncryptionProcessor)

FOUNDATION_EXPORT void PSEmptyServerEncryptionProcessor_init(PSEmptyServerEncryptionProcessor *self);

FOUNDATION_EXPORT PSEmptyServerEncryptionProcessor *new_PSEmptyServerEncryptionProcessor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEmptyServerEncryptionProcessor *create_PSEmptyServerEncryptionProcessor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSEmptyServerEncryptionProcessor)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor PSEmptyServerEncryptionProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor")
