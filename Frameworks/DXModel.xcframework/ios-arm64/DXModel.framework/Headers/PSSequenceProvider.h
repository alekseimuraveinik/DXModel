
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSequenceProvider_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider || defined(INCLUDE_PSSequenceProvider))
#define PSSequenceProvider_

#define RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionSpecsProvider 1
#define INCLUDE_PSConnectionSpecsProvider 1
#include "PSConnectionSpecsProvider.h"

@class IOSObjectArray;
@class PSConnectionParams;
@class PSConnectionSpec;
@protocol PSReconnectPolicy;
@protocol PSTransport;

@interface PSSequenceProvider : NSObject < PSConnectionSpecsProvider >

#pragma mark Public

- (instancetype __nonnull)initWithPSConnectionParams:(PSConnectionParams *)params
                                withPSTransportArray:(IOSObjectArray *)connectors;

- (PSConnectionSpec *)nextConnectionSpec;

#pragma mark Protected

- (id<PSTransport>)nextConnector;

- (PSConnectionParams *)paramsForConnectorWithPSTransport:(id<PSTransport>)connector;

- (id<PSReconnectPolicy>)policyForConnectorWithPSTransport:(id<PSTransport>)current;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSequenceProvider)

FOUNDATION_EXPORT void PSSequenceProvider_initWithPSConnectionParams_withPSTransportArray_(PSSequenceProvider *self, PSConnectionParams *params, IOSObjectArray *connectors);

FOUNDATION_EXPORT PSSequenceProvider *new_PSSequenceProvider_initWithPSConnectionParams_withPSTransportArray_(PSConnectionParams *params, IOSObjectArray *connectors) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSequenceProvider *create_PSSequenceProvider_initWithPSConnectionParams_withPSTransportArray_(PSConnectionParams *params, IOSObjectArray *connectors);

J2OBJC_TYPE_LITERAL_HEADER(PSSequenceProvider)

@compatibility_alias ComDevexpertsPipestoneClientNetworkParametersSequenceProvider PSSequenceProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersSequenceProvider")
