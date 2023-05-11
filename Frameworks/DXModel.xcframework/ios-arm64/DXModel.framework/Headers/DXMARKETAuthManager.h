
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthManager")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthAuthManager
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthManager 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthManager 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationAuthAuthManager

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAuthManager_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthManager || defined(INCLUDE_DXMARKETAuthManager))
#define DXMARKETAuthManager_

#define RESTRICT_ComDevexpertsPipestoneClientSessionClientListener 1
#define INCLUDE_PSClientListener_Template 1
#include "PSClientListener.h"

@class DXMARKETApplicationStateHolder;
@class PSConnectionSpec;
@class PSErrorTO;
@protocol DXMARKETAuthListener;
@protocol PSSession;
@protocol PSSessionAuthenticator;

@interface DXMARKETAuthManager : PSClientListener_Template
@property (readonly, class, strong) PSErrorTO *REQUEST_LOST NS_SWIFT_NAME(REQUEST_LOST);

+ (PSErrorTO *)REQUEST_LOST;

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETApplicationStateHolder:(DXMARKETApplicationStateHolder *)stateHolder;

- (void)addAuthListenerWithDXMARKETAuthListener:(id<DXMARKETAuthListener>)listener;

- (id<PSSessionAuthenticator>)authenticator;

- (void)onConnectedWithPSSession:(id<PSSession>)session
            withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onDisconnectedWithPSSession:(id<PSSession>)old
               withPSConnectionSpec:(PSConnectionSpec *)spec;

- (void)onSessionClosedOnRemoteSideWithPSErrorTO:(PSErrorTO *)error;

- (void)removeAuthListenerWithDXMARKETAuthListener:(id<DXMARKETAuthListener>)listener;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(DXMARKETAuthManager)

inline PSErrorTO *DXMARKETAuthManager_get_REQUEST_LOST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTO *DXMARKETAuthManager_REQUEST_LOST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETAuthManager, REQUEST_LOST, PSErrorTO *)

FOUNDATION_EXPORT void DXMARKETAuthManager_initWithDXMARKETApplicationStateHolder_(DXMARKETAuthManager *self, DXMARKETApplicationStateHolder *stateHolder);

FOUNDATION_EXPORT DXMARKETAuthManager *new_DXMARKETAuthManager_initWithDXMARKETApplicationStateHolder_(DXMARKETApplicationStateHolder *stateHolder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAuthManager *create_DXMARKETAuthManager_initWithDXMARKETApplicationStateHolder_(DXMARKETApplicationStateHolder *stateHolder);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAuthManager)

@compatibility_alias ComDevexpertsDxmarketClientApplicationAuthAuthManager DXMARKETAuthManager;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationAuthAuthManager")
