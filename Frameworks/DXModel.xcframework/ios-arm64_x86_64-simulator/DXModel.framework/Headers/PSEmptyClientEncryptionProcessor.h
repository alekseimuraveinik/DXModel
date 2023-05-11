
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEmptyClientEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor || defined(INCLUDE_PSEmptyClientEncryptionProcessor))
#define PSEmptyClientEncryptionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedClientEncryptionProcessor 1
#define INCLUDE_PSClientEncryptionProcessor 1
#include "PSClientEncryptionProcessor.h"

@class PSEncryptionOption;
@class PSEncryptionParams;
@protocol JavaUtilList;
@protocol PSConnection;

@interface PSEmptyClientEncryptionProcessor : NSObject < PSClientEncryptionProcessor >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                     withPSEncryptionOption:(PSEncryptionOption *)option;

- (id<JavaUtilList>)supportedOptionsWithPSEncryptionParams:(PSEncryptionParams *)params;

@end

J2OBJC_STATIC_INIT(PSEmptyClientEncryptionProcessor)

FOUNDATION_EXPORT void PSEmptyClientEncryptionProcessor_init(PSEmptyClientEncryptionProcessor *self);

FOUNDATION_EXPORT PSEmptyClientEncryptionProcessor *new_PSEmptyClientEncryptionProcessor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEmptyClientEncryptionProcessor *create_PSEmptyClientEncryptionProcessor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSEmptyClientEncryptionProcessor)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor PSEmptyClientEncryptionProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor")
