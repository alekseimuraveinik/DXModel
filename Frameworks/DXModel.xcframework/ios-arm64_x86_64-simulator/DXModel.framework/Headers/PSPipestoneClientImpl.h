
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClientImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionPipestoneClientImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClientImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClientImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionPipestoneClientImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPipestoneClientImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClientImpl || defined(INCLUDE_PSPipestoneClientImpl))
#define PSPipestoneClientImpl_

#define RESTRICT_ComDevexpertsPipestoneClientSessionPipestoneClient 1
#define INCLUDE_PSPipestoneClient 1
#include "PSPipestoneClient.h"

@class PSClientConfiguration;
@class PSFeedId;
@protocol PSActionPerformer;
@protocol PSClientListener;
@protocol PSConnectionSpecsProvider;
@protocol PSFeed;
@protocol PSSessionAuthenticator;
@protocol PSSynchronizer;
@protocol PSTypeProvider;

@interface PSPipestoneClientImpl : NSObject < PSPipestoneClient >

#pragma mark Public

- (instancetype __nonnull)initWithPSSynchronizer:(id<PSSynchronizer>)synchronizer
                       withPSClientConfiguration:(PSClientConfiguration *)clientConfiguration
                      withPSSessionAuthenticator:(id<PSSessionAuthenticator>)sessionAuthenticator;

- (instancetype __nonnull)initWithPSSynchronizer:(id<PSSynchronizer>)synchronizer
                       withPSClientConfiguration:(PSClientConfiguration *)clientConfiguration
                      withPSSessionAuthenticator:(id<PSSessionAuthenticator>)sessionAuthenticator
                                     withBoolean:(jboolean)patchEnabled;

- (void)addListenerWithPSClientListener:(id<PSClientListener>)listener;

- (id<PSFeed>)getFeedWithPSFeedId:(PSFeedId *)id_;

- (id<PSActionPerformer>)getPerformerWithPSTypeProvider:(id<PSTypeProvider>)type;

- (jboolean)isStarted;

- (void)removeListenerWithPSClientListener:(id<PSClientListener>)listener;

- (void)startWithPSConnectionSpecsProvider:(id<PSConnectionSpecsProvider>)specsProvider;

- (void)stop;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPipestoneClientImpl)

FOUNDATION_EXPORT void PSPipestoneClientImpl_initWithPSSynchronizer_withPSClientConfiguration_withPSSessionAuthenticator_(PSPipestoneClientImpl *self, id<PSSynchronizer> synchronizer, PSClientConfiguration *clientConfiguration, id<PSSessionAuthenticator> sessionAuthenticator);

FOUNDATION_EXPORT PSPipestoneClientImpl *new_PSPipestoneClientImpl_initWithPSSynchronizer_withPSClientConfiguration_withPSSessionAuthenticator_(id<PSSynchronizer> synchronizer, PSClientConfiguration *clientConfiguration, id<PSSessionAuthenticator> sessionAuthenticator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipestoneClientImpl *create_PSPipestoneClientImpl_initWithPSSynchronizer_withPSClientConfiguration_withPSSessionAuthenticator_(id<PSSynchronizer> synchronizer, PSClientConfiguration *clientConfiguration, id<PSSessionAuthenticator> sessionAuthenticator);

FOUNDATION_EXPORT void PSPipestoneClientImpl_initWithPSSynchronizer_withPSClientConfiguration_withPSSessionAuthenticator_withBoolean_(PSPipestoneClientImpl *self, id<PSSynchronizer> synchronizer, PSClientConfiguration *clientConfiguration, id<PSSessionAuthenticator> sessionAuthenticator, jboolean patchEnabled);

FOUNDATION_EXPORT PSPipestoneClientImpl *new_PSPipestoneClientImpl_initWithPSSynchronizer_withPSClientConfiguration_withPSSessionAuthenticator_withBoolean_(id<PSSynchronizer> synchronizer, PSClientConfiguration *clientConfiguration, id<PSSessionAuthenticator> sessionAuthenticator, jboolean patchEnabled) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipestoneClientImpl *create_PSPipestoneClientImpl_initWithPSSynchronizer_withPSClientConfiguration_withPSSessionAuthenticator_withBoolean_(id<PSSynchronizer> synchronizer, PSClientConfiguration *clientConfiguration, id<PSSessionAuthenticator> sessionAuthenticator, jboolean patchEnabled);

J2OBJC_TYPE_LITERAL_HEADER(PSPipestoneClientImpl)

@compatibility_alias ComDevexpertsPipestoneClientSessionPipestoneClientImpl PSPipestoneClientImpl;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionPipestoneClientImpl")
