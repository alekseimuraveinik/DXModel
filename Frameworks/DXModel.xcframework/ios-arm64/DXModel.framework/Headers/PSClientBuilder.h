
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientClientBuilder")
#ifdef RESTRICT_ComDevexpertsPipestoneClientClientBuilder
#define INCLUDE_ALL_ComDevexpertsPipestoneClientClientBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientClientBuilder 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientClientBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientBuilder_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientClientBuilder || defined(INCLUDE_PSClientBuilder))
#define PSClientBuilder_

@class PSClientInfo;
@protocol PSCipherFactory;
@protocol PSClassFactoryCreator;
@protocol PSClientListener;
@protocol PSConnectionSpecsProvider;
@protocol PSPipestoneClient;
@protocol PSSerializationProcessor;
@protocol PSSessionAuthenticator;
@protocol PSSynchronizer;

@interface PSClientBuilder : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (id<PSPipestoneClient>)buildAndStartWithPSConnectionSpecsProvider:(id<PSConnectionSpecsProvider>)connectionSpecs;

- (id<PSPipestoneClient>)buildDisconnected;

- (PSClientBuilder *)withAuthenticatorWithPSSessionAuthenticator:(id<PSSessionAuthenticator>)sessionAuthenticator;

- (PSClientBuilder *)withCipherFactoryWithPSCipherFactory:(id<PSCipherFactory>)cipherFactory;

- (PSClientBuilder *)withClassFactoryWithPSClassFactoryCreator:(id<PSClassFactoryCreator>)creator;

- (PSClientBuilder *)withClientInfoWithPSClientInfo:(PSClientInfo *)clientInfo;

- (PSClientBuilder *)withClientListenerWithPSClientListener:(id<PSClientListener>)listener;

- (PSClientBuilder *)withSerializationWithPSSerializationProcessor:(id<PSSerializationProcessor>)processor;

- (PSClientBuilder *)withSynchronizerWithPSSynchronizer:(id<PSSynchronizer>)synchronizer;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientBuilder)

FOUNDATION_EXPORT void PSClientBuilder_init(PSClientBuilder *self);

FOUNDATION_EXPORT PSClientBuilder *new_PSClientBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientBuilder *create_PSClientBuilder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSClientBuilder)

@compatibility_alias ComDevexpertsPipestoneClientClientBuilder PSClientBuilder;

#endif

#if !defined (PSClientBuilder_DefaultProviderBuilder_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientClientBuilder || defined(INCLUDE_PSClientBuilder_DefaultProviderBuilder))
#define PSClientBuilder_DefaultProviderBuilder_

@class IOSObjectArray;
@class PSCompressionMethod;
@class PSConnectionParams;
@class PSEncryptionParams;
@protocol PSConnectionSpecsProvider;

@interface PSClientBuilder_DefaultProviderBuilder : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)apiLevel
                         withNSString:(NSString *)checksum;

- (id<PSConnectionSpecsProvider>)build;

- (PSClientBuilder_DefaultProviderBuilder *)withCompressionWithPSCompressionMethod:(PSCompressionMethod *)method;

- (PSClientBuilder_DefaultProviderBuilder *)withConnectionParamsWithPSConnectionParams:(PSConnectionParams *)params;

- (PSClientBuilder_DefaultProviderBuilder *)withEncryptionWithPSEncryptionParams:(PSEncryptionParams *)encryption;

- (PSClientBuilder_DefaultProviderBuilder *)withoutCompression;

- (PSClientBuilder_DefaultProviderBuilder *)withoutEncryption;

- (PSClientBuilder_DefaultProviderBuilder *)withReconnectsAllowedWithInt:(jint)reconnects;

- (PSClientBuilder_DefaultProviderBuilder *)withRsaEncryptionWithNSString:(NSString *)publicKey
                                                                  withInt:(jint)sessionKeyStrength;

- (PSClientBuilder_DefaultProviderBuilder *)withTransportsWithPSTransportArray:(IOSObjectArray *)transports;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientBuilder_DefaultProviderBuilder)

FOUNDATION_EXPORT void PSClientBuilder_DefaultProviderBuilder_initWithInt_withNSString_(PSClientBuilder_DefaultProviderBuilder *self, jint apiLevel, NSString *checksum);

FOUNDATION_EXPORT PSClientBuilder_DefaultProviderBuilder *new_PSClientBuilder_DefaultProviderBuilder_initWithInt_withNSString_(jint apiLevel, NSString *checksum) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientBuilder_DefaultProviderBuilder *create_PSClientBuilder_DefaultProviderBuilder_initWithInt_withNSString_(jint apiLevel, NSString *checksum);

J2OBJC_TYPE_LITERAL_HEADER(PSClientBuilder_DefaultProviderBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientClientBuilder")
