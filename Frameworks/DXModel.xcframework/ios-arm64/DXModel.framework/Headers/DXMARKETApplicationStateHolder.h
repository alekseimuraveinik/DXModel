
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateHolder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientApplicationApplicationStateHolder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateHolder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateHolder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientApplicationApplicationStateHolder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETApplicationStateHolder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateHolder || defined(INCLUDE_DXMARKETApplicationStateHolder))
#define DXMARKETApplicationStateHolder_

@protocol DXMARKETApplicationStateListener;
@protocol DXMARKETLoginInfo;

@interface DXMARKETApplicationStateHolder : NSObject
@property (readonly, class) jint NET_DISCONNECTED NS_SWIFT_NAME(NET_DISCONNECTED);
@property (readonly, class) jint NET_CONNECTED NS_SWIFT_NAME(NET_CONNECTED);
@property (readonly, class) jint AUTH_LOGGED_OUT NS_SWIFT_NAME(AUTH_LOGGED_OUT);
@property (readonly, class) jint AUTH_LOGGED_IN NS_SWIFT_NAME(AUTH_LOGGED_IN);

+ (jint)NET_DISCONNECTED;

+ (jint)NET_CONNECTED;

+ (jint)AUTH_LOGGED_OUT;

+ (jint)AUTH_LOGGED_IN;

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETLoginInfo:(id<DXMARKETLoginInfo>)loginInfo;

- (void)addStateListenerWithDXMARKETApplicationStateListener:(id<DXMARKETApplicationStateListener>)listener;

- (void)changeAuthStateToWithInt:(jint)authState;

- (void)changeNetStateToWithInt:(jint)netState;

- (void)clear;

+ (jint)getAuthStateWithInt:(jint)state;

- (jint)getCurrentAuthState;

- (jint)getCurrentNetState;

- (id<DXMARKETLoginInfo>)getLoginInfo;

+ (jint)getNetStateWithInt:(jint)state;

- (void)removeStateListenerWithDXMARKETApplicationStateListener:(id<DXMARKETApplicationStateListener>)listener;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETApplicationStateHolder)

inline jint DXMARKETApplicationStateHolder_get_NET_DISCONNECTED(void);
#define DXMARKETApplicationStateHolder_NET_DISCONNECTED 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETApplicationStateHolder, NET_DISCONNECTED, jint)

inline jint DXMARKETApplicationStateHolder_get_NET_CONNECTED(void);
#define DXMARKETApplicationStateHolder_NET_CONNECTED 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETApplicationStateHolder, NET_CONNECTED, jint)

inline jint DXMARKETApplicationStateHolder_get_AUTH_LOGGED_OUT(void);
#define DXMARKETApplicationStateHolder_AUTH_LOGGED_OUT 16
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETApplicationStateHolder, AUTH_LOGGED_OUT, jint)

inline jint DXMARKETApplicationStateHolder_get_AUTH_LOGGED_IN(void);
#define DXMARKETApplicationStateHolder_AUTH_LOGGED_IN 32
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETApplicationStateHolder, AUTH_LOGGED_IN, jint)

FOUNDATION_EXPORT void DXMARKETApplicationStateHolder_initWithDXMARKETLoginInfo_(DXMARKETApplicationStateHolder *self, id<DXMARKETLoginInfo> loginInfo);

FOUNDATION_EXPORT DXMARKETApplicationStateHolder *new_DXMARKETApplicationStateHolder_initWithDXMARKETLoginInfo_(id<DXMARKETLoginInfo> loginInfo) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETApplicationStateHolder *create_DXMARKETApplicationStateHolder_initWithDXMARKETLoginInfo_(id<DXMARKETLoginInfo> loginInfo);

FOUNDATION_EXPORT jint DXMARKETApplicationStateHolder_getAuthStateWithInt_(jint state);

FOUNDATION_EXPORT jint DXMARKETApplicationStateHolder_getNetStateWithInt_(jint state);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETApplicationStateHolder)

@compatibility_alias ComDevexpertsDxmarketClientApplicationApplicationStateHolder DXMARKETApplicationStateHolder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientApplicationApplicationStateHolder")
