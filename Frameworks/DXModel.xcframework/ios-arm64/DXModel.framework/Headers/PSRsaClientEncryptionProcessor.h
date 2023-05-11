
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSRsaClientEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor || defined(INCLUDE_PSRsaClientEncryptionProcessor))
#define PSRsaClientEncryptionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEmptyClientEncryptionProcessor 1
#define INCLUDE_PSEmptyClientEncryptionProcessor 1
#include "PSEmptyClientEncryptionProcessor.h"

@class PSEncryptionOption;
@class PSEncryptionParams;
@protocol JavaUtilList;
@protocol PSCipherFactory;
@protocol PSConnection;

@interface PSRsaClientEncryptionProcessor : PSEmptyClientEncryptionProcessor

#pragma mark Public

- (instancetype __nonnull)initWithPSCipherFactory:(id<PSCipherFactory>)cipherFactory;

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                     withPSEncryptionOption:(PSEncryptionOption *)option;

- (id<JavaUtilList>)supportedOptionsWithPSEncryptionParams:(PSEncryptionParams *)params;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSRsaClientEncryptionProcessor)

FOUNDATION_EXPORT void PSRsaClientEncryptionProcessor_initWithPSCipherFactory_(PSRsaClientEncryptionProcessor *self, id<PSCipherFactory> cipherFactory);

FOUNDATION_EXPORT PSRsaClientEncryptionProcessor *new_PSRsaClientEncryptionProcessor_initWithPSCipherFactory_(id<PSCipherFactory> cipherFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSRsaClientEncryptionProcessor *create_PSRsaClientEncryptionProcessor_initWithPSCipherFactory_(id<PSCipherFactory> cipherFactory);

J2OBJC_TYPE_LITERAL_HEADER(PSRsaClientEncryptionProcessor)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor PSRsaClientEncryptionProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaClientEncryptionProcessor")
