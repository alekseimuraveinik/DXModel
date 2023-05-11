
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSConnectionSpec_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec || defined(INCLUDE_PSConnectionSpec))
#define PSConnectionSpec_

@class PSConnectionParams;
@protocol PSReconnectPolicy;
@protocol PSTransport;

@interface PSConnectionSpec : NSObject {
 @public
  id<PSTransport> transport_;
  id<PSReconnectPolicy> policy_;
  PSConnectionParams *parameters_;
}

#pragma mark Public

- (instancetype __nonnull)initWithPSTransport:(id<PSTransport>)transport
                        withPSReconnectPolicy:(id<PSReconnectPolicy>)policy
                       withPSConnectionParams:(PSConnectionParams *)parameters;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSConnectionSpec)

J2OBJC_FIELD_SETTER(PSConnectionSpec, transport_, id<PSTransport>)
J2OBJC_FIELD_SETTER(PSConnectionSpec, policy_, id<PSReconnectPolicy>)
J2OBJC_FIELD_SETTER(PSConnectionSpec, parameters_, PSConnectionParams *)

FOUNDATION_EXPORT void PSConnectionSpec_initWithPSTransport_withPSReconnectPolicy_withPSConnectionParams_(PSConnectionSpec *self, id<PSTransport> transport, id<PSReconnectPolicy> policy, PSConnectionParams *parameters);

FOUNDATION_EXPORT PSConnectionSpec *new_PSConnectionSpec_initWithPSTransport_withPSReconnectPolicy_withPSConnectionParams_(id<PSTransport> transport, id<PSReconnectPolicy> policy, PSConnectionParams *parameters) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSConnectionSpec *create_PSConnectionSpec_initWithPSTransport_withPSReconnectPolicy_withPSConnectionParams_(id<PSTransport> transport, id<PSReconnectPolicy> policy, PSConnectionParams *parameters);

J2OBJC_TYPE_LITERAL_HEADER(PSConnectionSpec)

@compatibility_alias ComDevexpertsPipestoneClientNetworkParametersConnectionSpec PSConnectionSpec;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersConnectionSpec")
