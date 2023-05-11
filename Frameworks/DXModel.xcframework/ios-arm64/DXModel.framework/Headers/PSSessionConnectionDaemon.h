
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionConnectionDaemon_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon || defined(INCLUDE_PSSessionConnectionDaemon))
#define PSSessionConnectionDaemon_

#define RESTRICT_JavaLangThread 1
#define INCLUDE_JavaLangThread 1
#include "java/lang/Thread.h"

@class JavaLangThreadGroup;
@class PSClientConfiguration;
@class PSSessionManager;
@protocol JavaLangRunnable;
@protocol PSClientListener;
@protocol PSConnectionSpecsProvider;

@interface PSSessionConnectionDaemon : JavaLangThread

#pragma mark Public

- (instancetype __nonnull)initWithPSClientConfiguration:(PSClientConfiguration *)configuration
                          withPSConnectionSpecsProvider:(id<PSConnectionSpecsProvider>)specsProvider
                                   withPSSessionManager:(PSSessionManager *)sessionManager
                                   withPSClientListener:(id<PSClientListener>)listener;

- (void)close;

- (void)run;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangRunnable:(id<JavaLangRunnable>)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangRunnable:(id<JavaLangRunnable>)arg0
                                      withNSString:(NSString *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                 withJavaLangRunnable:(id<JavaLangRunnable>)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                 withJavaLangRunnable:(id<JavaLangRunnable>)arg1
                                         withNSString:(NSString *)arg2 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                 withJavaLangRunnable:(id<JavaLangRunnable>)arg1
                                         withNSString:(NSString *)arg2
                                             withLong:(jlong)arg3 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)arg0
                                         withNSString:(NSString *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(PSSessionConnectionDaemon)

FOUNDATION_EXPORT void PSSessionConnectionDaemon_initWithPSClientConfiguration_withPSConnectionSpecsProvider_withPSSessionManager_withPSClientListener_(PSSessionConnectionDaemon *self, PSClientConfiguration *configuration, id<PSConnectionSpecsProvider> specsProvider, PSSessionManager *sessionManager, id<PSClientListener> listener);

FOUNDATION_EXPORT PSSessionConnectionDaemon *new_PSSessionConnectionDaemon_initWithPSClientConfiguration_withPSConnectionSpecsProvider_withPSSessionManager_withPSClientListener_(PSClientConfiguration *configuration, id<PSConnectionSpecsProvider> specsProvider, PSSessionManager *sessionManager, id<PSClientListener> listener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionConnectionDaemon *create_PSSessionConnectionDaemon_initWithPSClientConfiguration_withPSConnectionSpecsProvider_withPSSessionManager_withPSClientListener_(PSClientConfiguration *configuration, id<PSConnectionSpecsProvider> specsProvider, PSSessionManager *sessionManager, id<PSClientListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionConnectionDaemon)

@compatibility_alias ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon PSSessionConnectionDaemon;

#endif

#if !defined (PSSessionConnectionDaemon_State_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon || defined(INCLUDE_PSSessionConnectionDaemon_State))
#define PSSessionConnectionDaemon_State_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, PSSessionConnectionDaemon_State_Enum) {
  PSSessionConnectionDaemon_State_Enum_CONNECTED = 0,
  PSSessionConnectionDaemon_State_Enum_DISCONNECTED = 1,
};

@interface PSSessionConnectionDaemon_State : JavaLangEnum

@property (readonly, class, nonnull) PSSessionConnectionDaemon_State *CONNECTED NS_SWIFT_NAME(CONNECTED);
@property (readonly, class, nonnull) PSSessionConnectionDaemon_State *DISCONNECTED NS_SWIFT_NAME(DISCONNECTED);
+ (PSSessionConnectionDaemon_State * __nonnull)CONNECTED;

+ (PSSessionConnectionDaemon_State * __nonnull)DISCONNECTED;

#pragma mark Public

+ (PSSessionConnectionDaemon_State *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (PSSessionConnectionDaemon_State_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PSSessionConnectionDaemon_State)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PSSessionConnectionDaemon_State *PSSessionConnectionDaemon_State_values_[];

inline PSSessionConnectionDaemon_State *PSSessionConnectionDaemon_State_get_CONNECTED(void);
J2OBJC_ENUM_CONSTANT(PSSessionConnectionDaemon_State, CONNECTED)

inline PSSessionConnectionDaemon_State *PSSessionConnectionDaemon_State_get_DISCONNECTED(void);
J2OBJC_ENUM_CONSTANT(PSSessionConnectionDaemon_State, DISCONNECTED)

FOUNDATION_EXPORT IOSObjectArray *PSSessionConnectionDaemon_State_values(void);

FOUNDATION_EXPORT PSSessionConnectionDaemon_State *PSSessionConnectionDaemon_State_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSSessionConnectionDaemon_State *PSSessionConnectionDaemon_State_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionConnectionDaemon_State)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolSessionConnectionDaemon")
