
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientConfiguration")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionClientConfiguration
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientConfiguration 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientConfiguration 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionClientConfiguration

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSClientConfiguration_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientConfiguration || defined(INCLUDE_PSClientConfiguration))
#define PSClientConfiguration_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConfiguration 1
#define INCLUDE_PSConfiguration 1
#include "PSConfiguration.h"

@class PSClientInfo;
@protocol PSClientEncryptionProcessor;
@protocol PSCompressionProcessor;
@protocol PSSerializationProcessor;

@interface PSClientConfiguration : NSObject < PSConfiguration >

#pragma mark Public

- (instancetype __nonnull)initWithPSCompressionProcessor:(id<PSCompressionProcessor>)compression
                         withPSClientEncryptionProcessor:(id<PSClientEncryptionProcessor>)encryption
                            withPSSerializationProcessor:(id<PSSerializationProcessor>)serialization
                                        withPSClientInfo:(PSClientInfo *)clientInfo;

- (PSClientInfo *)getClientInfo;

- (id<PSCompressionProcessor>)getCompression;

- (id<PSClientEncryptionProcessor>)getEncryption;

- (id<PSSerializationProcessor>)getSerialization;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSClientConfiguration)

FOUNDATION_EXPORT void PSClientConfiguration_initWithPSCompressionProcessor_withPSClientEncryptionProcessor_withPSSerializationProcessor_withPSClientInfo_(PSClientConfiguration *self, id<PSCompressionProcessor> compression, id<PSClientEncryptionProcessor> encryption, id<PSSerializationProcessor> serialization, PSClientInfo *clientInfo);

FOUNDATION_EXPORT PSClientConfiguration *new_PSClientConfiguration_initWithPSCompressionProcessor_withPSClientEncryptionProcessor_withPSSerializationProcessor_withPSClientInfo_(id<PSCompressionProcessor> compression, id<PSClientEncryptionProcessor> encryption, id<PSSerializationProcessor> serialization, PSClientInfo *clientInfo) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSClientConfiguration *create_PSClientConfiguration_initWithPSCompressionProcessor_withPSClientEncryptionProcessor_withPSSerializationProcessor_withPSClientInfo_(id<PSCompressionProcessor> compression, id<PSClientEncryptionProcessor> encryption, id<PSSerializationProcessor> serialization, PSClientInfo *clientInfo);

J2OBJC_TYPE_LITERAL_HEADER(PSClientConfiguration)

@compatibility_alias ComDevexpertsPipestoneClientSessionClientConfiguration PSClientConfiguration;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionClientConfiguration")
