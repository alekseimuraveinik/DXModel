
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionPerformerImpl")
#ifdef RESTRICT_ComDevexpertsPipestoneClientSessionActionPerformerImpl
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionPerformerImpl 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionPerformerImpl 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientSessionActionPerformerImpl

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionPerformerImpl_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionPerformerImpl || defined(INCLUDE_PSActionPerformerImpl))
#define PSActionPerformerImpl_

#define RESTRICT_ComDevexpertsPipestoneClientApiActionsActionPerformer 1
#define INCLUDE_PSActionPerformer 1
#include "PSActionPerformer.h"

@class PSActionId;
@class PSActionResult;
@protocol JavaUtilList;
@protocol PSActionCallback;
@protocol PSActionPerformerImpl_PerformListener;
@protocol PSSynchronizer;
@protocol PSTransferObject;

@interface PSActionPerformerImpl : NSObject < PSActionPerformer >

#pragma mark Public

- (jboolean)awaitResultWithPSActionId:(PSActionId *)id_
                 withPSActionCallback:(id<PSActionCallback>)callback;

- (PSActionId *)performWithId:(id<PSTransferObject>)action
         withPSActionCallback:(id<PSActionCallback>)callback;

- (void)removeCallbackWithPSActionId:(PSActionId *)id_
                withPSActionCallback:(id<PSActionCallback>)callback;

- (void)setListenerWithPSActionPerformerImpl_PerformListener:(id<PSActionPerformerImpl_PerformListener>)newlistener;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)performerId
                              withInt:(jint)actionTypeId
withPSActionPerformerImpl_PerformListener:(id<PSActionPerformerImpl_PerformListener>)listener;

- (void)checkLostActionsWithPSSynchronizer:(id<PSSynchronizer>)synchronizer;

- (void)fireCallbacksWithPSSynchronizer:(id<PSSynchronizer>)synchronizer;

- (id<JavaUtilList>)getPendingActions;

- (jboolean)handleResultWithPSActionResult:(PSActionResult *)result;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSActionPerformerImpl)

FOUNDATION_EXPORT void PSActionPerformerImpl_initWithInt_withInt_withPSActionPerformerImpl_PerformListener_(PSActionPerformerImpl *self, jint performerId, jint actionTypeId, id<PSActionPerformerImpl_PerformListener> listener);

FOUNDATION_EXPORT PSActionPerformerImpl *new_PSActionPerformerImpl_initWithInt_withInt_withPSActionPerformerImpl_PerformListener_(jint performerId, jint actionTypeId, id<PSActionPerformerImpl_PerformListener> listener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSActionPerformerImpl *create_PSActionPerformerImpl_initWithInt_withInt_withPSActionPerformerImpl_PerformListener_(jint performerId, jint actionTypeId, id<PSActionPerformerImpl_PerformListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(PSActionPerformerImpl)

@compatibility_alias ComDevexpertsPipestoneClientSessionActionPerformerImpl PSActionPerformerImpl;

#endif

#if !defined (PSActionPerformerImpl_PerformListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionPerformerImpl || defined(INCLUDE_PSActionPerformerImpl_PerformListener))
#define PSActionPerformerImpl_PerformListener_

@protocol PSActionPerformerImpl_PerformListener < JavaObject >

- (void)onActionRequested;

@end

J2OBJC_EMPTY_STATIC_INIT(PSActionPerformerImpl_PerformListener)

J2OBJC_TYPE_LITERAL_HEADER(PSActionPerformerImpl_PerformListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientSessionActionPerformerImpl")
