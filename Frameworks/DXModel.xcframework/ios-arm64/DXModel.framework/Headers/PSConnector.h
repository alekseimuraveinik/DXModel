
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolConnector")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolConnector
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolConnector 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolConnector 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolConnector

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnector_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolConnector || defined(INCLUDE_PSConnector))
#define PSConnector_

@class PSClientConfiguration;
@class PSConnectionSpec;
@class PSSerializedConnection;

@interface PSConnector : NSObject

#pragma mark Public

- (PSSerializedConnection *)connectWithPSConnectionSpec:(PSConnectionSpec *)spec;

#pragma mark Package-Private

- (instancetype __nonnull)initWithPSClientConfiguration:(PSClientConfiguration *)configuration;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnector)

FOUNDATION_EXPORT void PSConnector_initWithPSClientConfiguration_(PSConnector *self, PSClientConfiguration *configuration);

FOUNDATION_EXPORT PSConnector *new_PSConnector_initWithPSClientConfiguration_(PSClientConfiguration *configuration) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConnector *create_PSConnector_initWithPSClientConfiguration_(PSClientConfiguration *configuration);

J2OBJC_TYPE_LITERAL_HEADER(PSConnector)

@compatibility_alias ComDevexpertsPipestoneClientNetworkProtocolConnector PSConnector;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolConnector")
