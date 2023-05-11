
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedListener
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedListener
#ifdef INCLUDE_PSFeedListener_SecureTemplate
#define INCLUDE_PSFeedListener_Template 1
#endif
#ifdef INCLUDE_PSFeedListener_Template
#define INCLUDE_PSFeedListener 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFeedListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener || defined(INCLUDE_PSFeedListener))
#define PSFeedListener_

@class PSErrorTO;
@protocol PSFeed;

@protocol PSFeedListener < JavaObject >

- (void)onSubscriptionChangedWithPSFeed:(id<PSFeed>)feed;

- (void)onUpdatedWithPSFeed:(id<PSFeed>)feed;

- (void)onResetWithPSFeed:(id<PSFeed>)feed;

- (void)onClosedWithPSFeed:(id<PSFeed>)feed
             withPSErrorTO:(PSErrorTO *)error;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFeedListener)

J2OBJC_TYPE_LITERAL_HEADER(PSFeedListener)

#define ComDevexpertsPipestoneClientApiFeedsFeedListener PSFeedListener

#endif

#if !defined (PSFeedListener_Template_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener || defined(INCLUDE_PSFeedListener_Template))
#define PSFeedListener_Template_

@class PSErrorTO;
@protocol PSFeed;

@interface PSFeedListener_Template : NSObject < PSFeedListener >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)onClosedWithPSFeed:(id<PSFeed>)feed
             withPSErrorTO:(PSErrorTO *)error;

- (void)onResetWithPSFeed:(id<PSFeed>)feed;

- (void)onSubscriptionChangedWithPSFeed:(id<PSFeed>)feed;

- (void)onUpdatedWithPSFeed:(id<PSFeed>)feed;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFeedListener_Template)

FOUNDATION_EXPORT void PSFeedListener_Template_init(PSFeedListener_Template *self);

FOUNDATION_EXPORT PSFeedListener_Template *new_PSFeedListener_Template_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFeedListener_Template *create_PSFeedListener_Template_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSFeedListener_Template)

#endif

#if !defined (PSFeedListener_SecureTemplate_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener || defined(INCLUDE_PSFeedListener_SecureTemplate))
#define PSFeedListener_SecureTemplate_

@protocol PSFeed;

@interface PSFeedListener_SecureTemplate : PSFeedListener_Template

#pragma mark Public

- (instancetype __nonnull)init;

- (void)onResetWithPSFeed:(id<PSFeed>)feed;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFeedListener_SecureTemplate)

FOUNDATION_EXPORT void PSFeedListener_SecureTemplate_init(PSFeedListener_SecureTemplate *self);

FOUNDATION_EXPORT PSFeedListener_SecureTemplate *new_PSFeedListener_SecureTemplate_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFeedListener_SecureTemplate *create_PSFeedListener_SecureTemplate_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSFeedListener_SecureTemplate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedListener")
