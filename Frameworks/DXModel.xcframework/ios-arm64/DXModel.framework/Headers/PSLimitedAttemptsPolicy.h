
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSLimitedAttemptsPolicy_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy || defined(INCLUDE_PSLimitedAttemptsPolicy))
#define PSLimitedAttemptsPolicy_

#define RESTRICT_ComDevexpertsPipestoneClientNetworkParametersReconnectPolicy 1
#define INCLUDE_PSReconnectPolicy 1
#include "PSReconnectPolicy.h"

@interface PSLimitedAttemptsPolicy : NSObject < PSReconnectPolicy >

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)attemptsAvailable;

- (jboolean)canReconnect;

- (void)onConnect;

- (void)onDisconnect;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSLimitedAttemptsPolicy)

FOUNDATION_EXPORT void PSLimitedAttemptsPolicy_initWithInt_(PSLimitedAttemptsPolicy *self, jint attemptsAvailable);

FOUNDATION_EXPORT PSLimitedAttemptsPolicy *new_PSLimitedAttemptsPolicy_initWithInt_(jint attemptsAvailable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSLimitedAttemptsPolicy *create_PSLimitedAttemptsPolicy_initWithInt_(jint attemptsAvailable);

J2OBJC_TYPE_LITERAL_HEADER(PSLimitedAttemptsPolicy)

@compatibility_alias ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy PSLimitedAttemptsPolicy;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkParametersLimitedAttemptsPolicy")
