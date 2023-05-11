
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSectionedItemsHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper || defined(INCLUDE_DXMARKETSectionedItemsHelper))
#define DXMARKETSectionedItemsHelper_

@class DXMARKETSectionedItem;
@class PSListTO;
@protocol DXMARKETStopCondition;

@interface DXMARKETSectionedItemsHelper : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (DXMARKETSectionedItem *)traverseWithPSListTO:(PSListTO *)sections
                                   withPSListTO:(PSListTO *)items
                      withDXMARKETStopCondition:(id<DXMARKETStopCondition>)condition;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSectionedItemsHelper)

FOUNDATION_EXPORT void DXMARKETSectionedItemsHelper_init(DXMARKETSectionedItemsHelper *self);

FOUNDATION_EXPORT DXMARKETSectionedItemsHelper *new_DXMARKETSectionedItemsHelper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSectionedItemsHelper *create_DXMARKETSectionedItemsHelper_init(void);

FOUNDATION_EXPORT DXMARKETSectionedItem *DXMARKETSectionedItemsHelper_traverseWithPSListTO_withPSListTO_withDXMARKETStopCondition_(PSListTO *sections, PSListTO *items, id<DXMARKETStopCondition> condition);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSectionedItemsHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper DXMARKETSectionedItemsHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItemsHelper")
