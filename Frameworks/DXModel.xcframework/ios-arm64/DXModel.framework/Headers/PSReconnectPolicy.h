
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSReconnectPolicy_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy || defined(INCLUDE_PSReconnectPolicy))
#define PSReconnectPolicy_

@protocol PSReconnectPolicy < JavaObject >

- (void)onDisconnect;

- (void)onConnect;

- (jboolean)canReconnect;

@end

J2OBJC_EMPTY_STATIC_INIT(PSReconnectPolicy)

J2OBJC_TYPE_LITERAL_HEADER(PSReconnectPolicy)

#define ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy PSReconnectPolicy

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy")
