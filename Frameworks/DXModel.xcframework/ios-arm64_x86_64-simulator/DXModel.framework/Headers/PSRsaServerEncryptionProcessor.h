
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSRsaServerEncryptionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor || defined(INCLUDE_PSRsaServerEncryptionProcessor))
#define PSRsaServerEncryptionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEmptyServerEncryptionProcessor 1
#define INCLUDE_PSEmptyServerEncryptionProcessor 1
#include "PSEmptyServerEncryptionProcessor.h"

@class PSEncryptionOption;
@protocol PSCipherFactory;
@protocol PSConnection;

@interface PSRsaServerEncryptionProcessor : PSEmptyServerEncryptionProcessor

#pragma mark Public

- (instancetype __nonnull)initWithPSCipherFactory:(id<PSCipherFactory>)cipherFactory
                                     withNSString:(NSString *)privateKey
                                      withBoolean:(jboolean)enforceEncryption;

- (jboolean)isSupportedWithPSEncryptionOption:(PSEncryptionOption *)option;

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                     withPSEncryptionOption:(PSEncryptionOption *)option;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSRsaServerEncryptionProcessor)

FOUNDATION_EXPORT void PSRsaServerEncryptionProcessor_initWithPSCipherFactory_withNSString_withBoolean_(PSRsaServerEncryptionProcessor *self, id<PSCipherFactory> cipherFactory, NSString *privateKey, jboolean enforceEncryption);

FOUNDATION_EXPORT PSRsaServerEncryptionProcessor *new_PSRsaServerEncryptionProcessor_initWithPSCipherFactory_withNSString_withBoolean_(id<PSCipherFactory> cipherFactory, NSString *privateKey, jboolean enforceEncryption) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSRsaServerEncryptionProcessor *create_PSRsaServerEncryptionProcessor_initWithPSCipherFactory_withNSString_withBoolean_(id<PSCipherFactory> cipherFactory, NSString *privateKey, jboolean enforceEncryption);

J2OBJC_TYPE_LITERAL_HEADER(PSRsaServerEncryptionProcessor)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor PSRsaServerEncryptionProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedRsaServerEncryptionProcessor")
