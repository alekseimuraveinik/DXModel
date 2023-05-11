
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientUtilAwaitingCondition")
#ifdef RESTRICT_ComDevexpertsPipestoneClientUtilAwaitingCondition
#define INCLUDE_ALL_ComDevexpertsPipestoneClientUtilAwaitingCondition 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientUtilAwaitingCondition 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientUtilAwaitingCondition

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSAwaitingCondition_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientUtilAwaitingCondition || defined(INCLUDE_PSAwaitingCondition))
#define PSAwaitingCondition_

@interface PSAwaitingCondition : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithBoolean:(jboolean)open;

- (void)await;

- (void)awaitWithLong:(jlong)timeout;

- (void)signal;

@end

J2OBJC_EMPTY_STATIC_INIT(PSAwaitingCondition)

FOUNDATION_EXPORT void PSAwaitingCondition_init(PSAwaitingCondition *self);

FOUNDATION_EXPORT PSAwaitingCondition *new_PSAwaitingCondition_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSAwaitingCondition *create_PSAwaitingCondition_init(void);

FOUNDATION_EXPORT void PSAwaitingCondition_initWithBoolean_(PSAwaitingCondition *self, jboolean open);

FOUNDATION_EXPORT PSAwaitingCondition *new_PSAwaitingCondition_initWithBoolean_(jboolean open) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSAwaitingCondition *create_PSAwaitingCondition_initWithBoolean_(jboolean open);

J2OBJC_TYPE_LITERAL_HEADER(PSAwaitingCondition)

@compatibility_alias ComDevexpertsPipestoneClientUtilAwaitingCondition PSAwaitingCondition;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientUtilAwaitingCondition")
