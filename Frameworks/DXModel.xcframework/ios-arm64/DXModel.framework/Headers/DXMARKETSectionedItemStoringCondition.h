
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSectionedItemStoringCondition_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition || defined(INCLUDE_DXMARKETSectionedItemStoringCondition))
#define DXMARKETSectionedItemStoringCondition_

#define RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition 1
#define INCLUDE_DXMARKETSectionedItemCondition 1
#include "DXMARKETSectionedItemCondition.h"

@class DXMARKETSectionedItem;

@interface DXMARKETSectionedItemStoringCondition : NSObject < DXMARKETSectionedItemCondition >

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMARKETSectionedItem *)getSectionedItem;

- (jboolean)shouldStop;

- (void)visitWithDXMARKETSectionedItem:(DXMARKETSectionedItem *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSectionedItemStoringCondition)

FOUNDATION_EXPORT void DXMARKETSectionedItemStoringCondition_init(DXMARKETSectionedItemStoringCondition *self);

FOUNDATION_EXPORT DXMARKETSectionedItemStoringCondition *new_DXMARKETSectionedItemStoringCondition_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSectionedItemStoringCondition *create_DXMARKETSectionedItemStoringCondition_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSectionedItemStoringCondition)

@compatibility_alias ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition DXMARKETSectionedItemStoringCondition;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemStoringCondition")
