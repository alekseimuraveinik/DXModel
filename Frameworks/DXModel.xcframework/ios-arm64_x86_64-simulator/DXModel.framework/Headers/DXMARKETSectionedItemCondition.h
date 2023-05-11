
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSectionedItemCondition_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition || defined(INCLUDE_DXMARKETSectionedItemCondition))
#define DXMARKETSectionedItemCondition_

@class DXMARKETSectionedItem;

@protocol DXMARKETSectionedItemCondition < JavaObject >

- (void)visitWithDXMARKETSectionedItem:(DXMARKETSectionedItem *)item;

- (jboolean)shouldStop;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSectionedItemCondition)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSectionedItemCondition)

#define ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition DXMARKETSectionedItemCondition

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemCondition")
