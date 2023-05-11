
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionParams")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionParams
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionParams 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionParams 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionParams

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionParams_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionParams || defined(INCLUDE_PSConnectionParams))
#define PSConnectionParams_

@class PSCompressionMethod;
@class PSEncryptionParams;

@interface PSConnectionParams : NSObject {
 @public
  PSCompressionMethod *compression_;
  PSEncryptionParams *encryption_;
  jint apiVersion_;
  NSString *checksum_;
}

#pragma mark Public

- (instancetype __nonnull)initWithPSCompressionMethod:(PSCompressionMethod *)compression
                               withPSEncryptionParams:(PSEncryptionParams *)encryption
                                              withInt:(jint)apiVersion
                                         withNSString:(NSString *)checksum;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionParams)

J2OBJC_FIELD_SETTER(PSConnectionParams, compression_, PSCompressionMethod *)
J2OBJC_FIELD_SETTER(PSConnectionParams, encryption_, PSEncryptionParams *)
J2OBJC_FIELD_SETTER(PSConnectionParams, checksum_, NSString *)

FOUNDATION_EXPORT void PSConnectionParams_initWithPSCompressionMethod_withPSEncryptionParams_withInt_withNSString_(PSConnectionParams *self, PSCompressionMethod *compression, PSEncryptionParams *encryption, jint apiVersion, NSString *checksum);

FOUNDATION_EXPORT PSConnectionParams *new_PSConnectionParams_initWithPSCompressionMethod_withPSEncryptionParams_withInt_withNSString_(PSCompressionMethod *compression, PSEncryptionParams *encryption, jint apiVersion, NSString *checksum) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConnectionParams *create_PSConnectionParams_initWithPSCompressionMethod_withPSEncryptionParams_withInt_withNSString_(PSCompressionMethod *compression, PSEncryptionParams *encryption, jint apiVersion, NSString *checksum);

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionParams)

@compatibility_alias ComDevexpertsPipestoneClientNetworkParametersConnectionParams PSConnectionParams;

#endif

#if !defined (PSConnectionParams_Builder_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionParams || defined(INCLUDE_PSConnectionParams_Builder))
#define PSConnectionParams_Builder_

@class PSCompressionMethod;
@class PSConnectionParams;
@class PSEncryptionType;

@interface PSConnectionParams_Builder : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)apiVersion
                         withNSString:(NSString *)checksum;

- (PSConnectionParams *)build;

- (PSConnectionParams_Builder *)withCompressionWithPSCompressionMethod:(PSCompressionMethod *)compression;

- (PSConnectionParams_Builder *)withDefaultCompression;

- (PSConnectionParams_Builder *)withEncryptionWithPSEncryptionType:(PSEncryptionType *)type
                                                      withNSString:(NSString *)publicKey
                                                           withInt:(jint)sessionKeyStrength;

- (PSConnectionParams_Builder *)withoutCompression;

- (PSConnectionParams_Builder *)withoutEncryption;

- (PSConnectionParams_Builder *)withRsaEncryptionWithNSString:(NSString *)publicKey
                                                      withInt:(jint)sessionKeyStrength;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionParams_Builder)

FOUNDATION_EXPORT void PSConnectionParams_Builder_initWithInt_withNSString_(PSConnectionParams_Builder *self, jint apiVersion, NSString *checksum);

FOUNDATION_EXPORT PSConnectionParams_Builder *new_PSConnectionParams_Builder_initWithInt_withNSString_(jint apiVersion, NSString *checksum) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConnectionParams_Builder *create_PSConnectionParams_Builder_initWithInt_withNSString_(jint apiVersion, NSString *checksum);

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionParams_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionParams")
