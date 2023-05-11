
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItem")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItem
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItem 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItem 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelSectionedSectionedItem

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSectionedItem_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItem || defined(INCLUDE_DXMARKETSectionedItem))
#define DXMARKETSectionedItem_

@interface DXMARKETSectionedItem : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithId:(id)section
                              withId:(id)item;

- (id)getItem;

- (id)getSection;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSectionedItem)

FOUNDATION_EXPORT void DXMARKETSectionedItem_initWithId_withId_(DXMARKETSectionedItem *self, id section, id item);

FOUNDATION_EXPORT DXMARKETSectionedItem *new_DXMARKETSectionedItem_initWithId_withId_(id section, id item) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSectionedItem *create_DXMARKETSectionedItem_initWithId_withId_(id section, id item);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSectionedItem)

@compatibility_alias ComDevexpertsDxmarketClientModelSectionedSectionedItem DXMARKETSectionedItem;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedSectionedItem")
