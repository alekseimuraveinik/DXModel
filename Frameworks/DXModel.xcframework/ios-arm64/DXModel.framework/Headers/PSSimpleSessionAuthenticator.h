
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSimpleSessionAuthenticator_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator || defined(INCLUDE_PSSimpleSessionAuthenticator))
#define PSSimpleSessionAuthenticator_

#define RESTRICT_ComDevexpertsPipestoneClientSessionSessionAuthenticator 1
#define INCLUDE_PSSessionAuthenticator 1
#include "PSSessionAuthenticator.h"

@class PSConnectionSpec;
@protocol PSAuthenticationWatcher;
@protocol PSSession;

@interface PSSimpleSessionAuthenticator : NSObject < PSSessionAuthenticator >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)onConnectedWithPSAuthenticationWatcher:(id<PSAuthenticationWatcher>)authenticationWatcher
                                 withPSSession:(id<PSSession>)active
                          withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onDisconnectedWithPSSession:(id<PSSession>)old
               withPSConnectionSpec:(PSConnectionSpec *)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSimpleSessionAuthenticator)

FOUNDATION_EXPORT void PSSimpleSessionAuthenticator_init(PSSimpleSessionAuthenticator *self);

FOUNDATION_EXPORT PSSimpleSessionAuthenticator *new_PSSimpleSessionAuthenticator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSimpleSessionAuthenticator *create_PSSimpleSessionAuthenticator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSSimpleSessionAuthenticator)

@compatibility_alias ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator PSSimpleSessionAuthenticator;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionSimpleSessionAuthenticator")
