
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionAuthenticator")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionSessionAuthenticator
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionAuthenticator 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionAuthenticator 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionSessionAuthenticator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionAuthenticator_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionAuthenticator || defined(INCLUDE_PSSessionAuthenticator))
#define PSSessionAuthenticator_

@class PSConnectionSpec;
@protocol PSAuthenticationWatcher;
@protocol PSSession;

@protocol PSSessionAuthenticator < JavaObject >

- (void)onConnectedWithPSAuthenticationWatcher:(id<PSAuthenticationWatcher>)authenticationWatcher
                                 withPSSession:(id<PSSession>)active
                          withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onDisconnectedWithPSSession:(id<PSSession>)old
               withPSConnectionSpec:(PSConnectionSpec *)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSessionAuthenticator)

J2OBJC_TYPE_LITERAL_HEADER(PSSessionAuthenticator)

#define ComDevexpertsPipestoneClientSessionSessionAuthenticator PSSessionAuthenticator

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSessionAuthenticator")
