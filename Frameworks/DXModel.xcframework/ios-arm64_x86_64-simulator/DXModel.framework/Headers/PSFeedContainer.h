
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedContainer")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionFeedContainer
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedContainer 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedContainer 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionFeedContainer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFeedContainer_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedContainer || defined(INCLUDE_PSFeedContainer))
#define PSFeedContainer_

@class PSFeedId;
@class PSFeedImpl;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol PSFeedListener;

@interface PSFeedContainer : NSObject

#pragma mark Public

- (void)fillFromWithPSFeedContainer:(PSFeedContainer *)other
                 withPSFeedListener:(id<PSFeedListener>)oldListener
                 withPSFeedListener:(id<PSFeedListener>)newListener;

- (PSFeedImpl *)getWithPSFeedId:(PSFeedId *)id_;

- (PSFeedImpl *)getWithInt:(jint)index;

- (id<JavaUtilList>)getCreateRequestCommands;

- (id<JavaUtilCollection>)getFeeds;

- (id<JavaUtilList>)getResendRequestCommandsWithBoolean:(jboolean)patch;

- (void)putWithPSFeedId:(PSFeedId *)id_
                withInt:(jint)index
         withPSFeedImpl:(PSFeedImpl *)feed;

- (void)removeWithPSFeedImpl:(PSFeedImpl *)feed;

- (void)resetFeeds;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFeedContainer)

FOUNDATION_EXPORT void PSFeedContainer_init(PSFeedContainer *self);

FOUNDATION_EXPORT PSFeedContainer *new_PSFeedContainer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFeedContainer *create_PSFeedContainer_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSFeedContainer)

@compatibility_alias ComDevexpertsPipestoneClientSessionFeedContainer PSFeedContainer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionFeedContainer")
