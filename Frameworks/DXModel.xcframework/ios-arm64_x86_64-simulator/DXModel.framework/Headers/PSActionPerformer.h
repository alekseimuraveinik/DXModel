
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionPerformer")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiActionsActionPerformer
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionPerformer 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionPerformer 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiActionsActionPerformer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSActionPerformer_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionPerformer || defined(INCLUDE_PSActionPerformer))
#define PSActionPerformer_

@class PSActionId;
@protocol PSActionCallback;

@protocol PSActionPerformer < JavaObject >

- (PSActionId *)performWithId:(id)action
         withPSActionCallback:(id<PSActionCallback>)callback;

- (jboolean)awaitResultWithPSActionId:(PSActionId *)id_
                 withPSActionCallback:(id<PSActionCallback>)callback;

- (void)removeCallbackWithPSActionId:(PSActionId *)id_
                withPSActionCallback:(id<PSActionCallback>)callback;

@end

J2OBJC_EMPTY_STATIC_INIT(PSActionPerformer)

J2OBJC_TYPE_LITERAL_HEADER(PSActionPerformer)

#define ComDevexpertsPipestoneClientApiActionsActionPerformer PSActionPerformer

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiActionsActionPerformer")
