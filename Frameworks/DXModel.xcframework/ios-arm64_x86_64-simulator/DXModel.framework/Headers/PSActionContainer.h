
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionContainer")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionActionContainer
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionContainer 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionContainer 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionActionContainer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionContainer_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionContainer || defined(INCLUDE_PSActionContainer))
#define PSActionContainer_

@class PSActionPerformerImpl;
@protocol JavaUtilCollection;
@protocol PSActionPerformer;
@protocol PSActionPerformerImpl_PerformListener;
@protocol PSTypeProvider;

@interface PSActionContainer : NSObject

#pragma mark Public

- (void)fillFromWithPSActionContainer:(PSActionContainer *)other
withPSActionPerformerImpl_PerformListener:(id<PSActionPerformerImpl_PerformListener>)newListener;

- (PSActionPerformerImpl *)getWithInt:(jint)id_;

- (id<PSActionPerformer>)getWithPSTypeProvider:(id<PSTypeProvider>)type;

- (id<JavaUtilCollection>)getPerformers;

- (void)putWithPSTypeProvider:(id<PSTypeProvider>)type
                      withInt:(jint)id_
    withPSActionPerformerImpl:(PSActionPerformerImpl *)performer;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(PSActionContainer)

FOUNDATION_EXPORT void PSActionContainer_init(PSActionContainer *self);

FOUNDATION_EXPORT PSActionContainer *new_PSActionContainer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionContainer *create_PSActionContainer_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSActionContainer)

@compatibility_alias ComDevexpertsPipestoneClientSessionActionContainer PSActionContainer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionContainer")
