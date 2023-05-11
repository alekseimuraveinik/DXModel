
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolAcceptedOptions")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolAcceptedOptions
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolAcceptedOptions 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolAcceptedOptions 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolAcceptedOptions

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSAcceptedOptions_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolAcceptedOptions || defined(INCLUDE_PSAcceptedOptions))
#define PSAcceptedOptions_

@class PSCompactInputStream;
@class PSCompactOutputStream;
@class PSCompressionMethod;
@class PSEncryptionOption;

@interface PSAcceptedOptions : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithPSCompressionMethod:(PSCompressionMethod *)compression
                               withPSEncryptionOption:(PSEncryptionOption *)encryption
                                              withInt:(jint)apiVersion;

- (jint)getApiVersion;

- (PSCompressionMethod *)getCompression;

- (PSEncryptionOption *)getEncryption;

+ (PSAcceptedOptions *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

- (NSString *)description;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSAcceptedOptions)

FOUNDATION_EXPORT void PSAcceptedOptions_initWithPSCompressionMethod_withPSEncryptionOption_withInt_(PSAcceptedOptions *self, PSCompressionMethod *compression, PSEncryptionOption *encryption, jint apiVersion);

FOUNDATION_EXPORT PSAcceptedOptions *new_PSAcceptedOptions_initWithPSCompressionMethod_withPSEncryptionOption_withInt_(PSCompressionMethod *compression, PSEncryptionOption *encryption, jint apiVersion) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSAcceptedOptions *create_PSAcceptedOptions_initWithPSCompressionMethod_withPSEncryptionOption_withInt_(PSCompressionMethod *compression, PSEncryptionOption *encryption, jint apiVersion);

FOUNDATION_EXPORT PSAcceptedOptions *PSAcceptedOptions_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSAcceptedOptions)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolAcceptedOptions PSAcceptedOptions;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolAcceptedOptions")
